///http://emgoz.blogspot.ru/search/label/hub08// разработчик библиотеки
//https://www.drive2.ru/users/borzov161/#blog///
//https://ru.aliexpress.com/item/P3-75-dot-matrix-led-module-3-75mm-high-clear-top1-for-text-display-304-60mm/32616683948.html?traffic_analysisId=recommend_2088_1_-1_iswistore&scm=1007.13339.90158.0&pvid=d0879e13-1505-4f73-a46c-b2ed5ccf27c5&tpp=1//
//начало .Реализованы не все функции....
/*LA / A -> Digital Pin 4  
LB / B -> Digital Pin 5  
LC / C -> Digital Pin 6  
LD / D -> Digital Pin 7  
CLK -> Digital Pin 13   
R1 / R -> Digital Pin 11  
OE / EN -> Digital Pin 3  >   
LAT / STB -> Digital Pin 2*/
#include <avr/pgmspace.h>
#include <SPI.h>
#include "HUB08SPI.h"
#include <TimerOne.h>
#include "Font_RUS.h" //English + Russian
#define WIDTH   64
#define HEIGHT  16
#include <EEPROM.h> // подключаем библиотеку EEPROM 
uint8_t displaybuf[WIDTH * HEIGHT / 8];

HUB08SPI display;

 char *msg_avto[]=
{ "HUB 08 РУССКИЙ ШРИФТ",//0
  "1234567890",//1
  "ABCDEFGHIJKLMNOPQRSTUVWXYZ",//2
  "АБВГДЕЖЗКЛМНПРСТУФХЦЧШЩЪЫЭЮЯ",//3
  "абвгдежзклмнпрстуфхцчшщъьэюя",//4
  "www.drive2.ru/borzov161"
};
unsigned long  taimer6=0, time_sbros;  //  время таймеров
uint8_t eeprom=0,old_N=0,text_avto =3,len=25,flag_tel=0,ctart=0,flag=1; ////флаги //
//------------------стартовые переменные-----------------------------
uint8_t N = 1;//
uint16_t Skorost=150;//от 30 до 300//0-бысто, 700 медлено
uint8_t Jarkost=50; //0-256//256 max
unsigned long  vremya_long =5;//время горенияфраз с телефона сек(! не точно)примерно 
//-------------------------------------------------------------------
String Str_telf;
volatile uint16_t Nx = 0;
char * msg_tel; ///резервируем память под массив фраз с телефона
uint16_t dlina_pix = WIDTH;// ширина в пикселях
//--------------------------для эпром памяти --------------------------------
int adrees=0;//адрес ардуино//29184
int skorst=25;// скорость(1-100)//0 быстро 99-медлено//
int jarkost=5;//яркость(1-15)
int invers=6;// инверсия// количество инверсий "СТОП".после чего стоп не будет инвертироватся и раздражать соседа сзади
int cikl=1;// цикличность//1нет//2 да
int vremya=15;//время фраз
int coxpan=1;//сохранить еером//1нет//2 да
int iffekt=1;// бежит//1-нет//2- да
int shtorki=1;//эфект шторки
int sped_bufer=70; //0 медлено, 99- быстро//так передаем телефоном, потом инвертируем под паролу.
 
//===============================================================================//
void setup(){ Serial.begin( 9600);
 //------------чтение сохранненых переменных их энергонезависимой памяти --
skorst=EEPROM.read(50);jarkost=EEPROM.read(52);invers=EEPROM.read(54); vremya=EEPROM.read(56);iffekt=EEPROM.read(58);shtorki=EEPROM.read(60);
      Skorost=map(sped_bufer, 10, 99, 300, 30); //ивертируем диапазон .
      Jarkost=map(jarkost, 1, 15, 50, 256); //ивертируем диапазон 
      vremya_long=vremya; //меняем переменные для коррекного умножения ниже
      time_sbros=vremya_long*1000; /// переводим сек в млсек
//----------------прерывания---------------------------------------------- 
    display.begin(displaybuf, WIDTH, HEIGHT);
    Timer1.initialize(200);  //slightly faster refresh rate
    Timer1.attachInterrupt(refresh);
    display.setBrightness(Jarkost); 
}//----------------------------------------------------------------------- 
  
void refresh() {//функция обновления строки
 static uint16_t count = 0; //
    count++;
if (count > Skorost){// шим регулятор на прерываниях
    count= 0; Nx++;//новый ветикальный столбец табло
    if(Nx > dlina_pix) Nx = 0;  //reset после xxx pixels
   } 
  display.scan();//refresh//обновить одну строку дисплея
}

//=============================================================================
void loop(){
  unsigned long new_taimer = millis();
//----------------- прием по блютуз фраз и команд ----------------------------=
if (Serial.available() !=0){  /// если данные пришли по блютуз
    Str_telf = Serial.readString();//создем строку из буфера порта
    cleear(); old_N =0; N++;flag=0;Nx=0;//стираем старую фразу//
    flag_tel=1; //опрокидываем флаг
    taimer6 = new_taimer;
}
if (flag_tel==1){
    String str = Str_telf; // создаем объект
    msg_tel = str.c_str(); //заполняем массив
    sscanf(msg_tel, "%d,", &adrees);///берем 5 символов
//---------------------управление-----------------------------------------------
 if (adrees == 29184 && len>21&&len<26) { //если пришла команда разгбераем его на части отделенные запятой
     sscanf(msg_tel, "%d,%d,%d,%d,%d,%d,%d,%d,%d",
     &adrees,&sped_bufer,&jarkost,&invers,&cikl, &vremya, &coxpan, &iffekt, &shtorki);// переменные
     //--1-------2---------3--------4-------5-------6---------7-------8--------9------  № п/п
     //29184----27---------9--------6-------1-------15--------2-------1--------1------  значение
    //29184,70,9,6,1,15,2,1,1  // пример для записи EEPROM через порт 
      Skorost=map(sped_bufer, 10, 99, 300, 30); //ивертирует диапазон , после новой команды.
      Jarkost=map(jarkost, 1, 15, 50, 256); //ивертирует диапазон , после новой команды
      display.setBrightness(Jarkost); 
      vremya_long=vremya; //меняем переменные для коррекного умножения ниже
      time_sbros=vremya_long*1000; /// переводим сек в млсек
   if (coxpan==2)  //если пришла команда записать//седьмая позиция в команде
      { EEPROM.update(50, skorst);  /// если значение новое перезаписываем.
        EEPROM.update(52, jarkost); //50,52..56 от фоноря взял //лишбы не первые//
        EEPROM.update(54, invers);
        EEPROM.update(56, vremya);
        EEPROM.update(58, iffekt);
        EEPROM.update(60, shtorki);
       }
    flag_tel=0;adrees = 0;//выходим из записи
 } //
else {//если не команда , значит слово. печатаем его
  printString(msg_tel,WIDTH-Nx);
  if (flag==0&& Nx == 0) {
     ctart=0;flag=1; ///разрешаем пересчитать длину новой фразы (ctart=0)
     }   
    }
}
if (new_taimer - taimer6 >= time_sbros && flag_tel==1){
    flag_tel=0;
   }
//-----------------машина---------------------------------------//
if (flag_tel==0){ //Serial.println(N);}
   if (N>5) N=0;
  printString(msg_avto[N],WIDTH-Nx);//
   if (old_N !=N) {
       old_N =N; cleear();ctart=0; Nx=0; //
      }
 }
} ///конец//а кто читал молодец*/


