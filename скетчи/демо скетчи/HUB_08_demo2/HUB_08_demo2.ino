///http://emgoz.blogspot.ru/search/label/hub08// разработчик библиотеки
//https://www.drive2.ru/users/borzov161/#blog///
//https://ru.aliexpress.com/item/P3-75-dot-matrix-led-module-3-75mm-high-clear-top1-for-text-display-304-60mm/32616683948.html?traffic_analysisId=recommend_2088_1_-1_iswistore&scm=1007.13339.90158.0&pvid=d0879e13-1505-4f73-a46c-b2ed5ccf27c5&tpp=1//
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
uint8_t displaybuf[WIDTH * HEIGHT / 8];

HUB08SPI display;

 char *msg_avto[]=
{ "HUB 08 РУССКИЙ ШРИФТ",//0
  "1234567890",//1
  "ABCDEFGHIJKLMNOPQRSTUVWXYZ",//2
  "АБВГДЕЖЗКЛМНПРСТУФХЦЧШЩЪЫЭЮЯ",//3
  "абвгдежзклмнпрстуфхцчшщъьэюя",//4
  "www.drive2.ru.borzov161"
};
unsigned long  taimer6=0;  //  время таймеров
uint8_t old_N=0,flag_tel=0,ctart=0,flag=1; ////флаги //
//------------------стартовые переменные-----------------------------
uint8_t N = 1;//
uint16_t Skorost=150;//от 30 до 300//0-бысто, 700 медлено
uint8_t Jarkost=150; //0-256//256 max
unsigned long  time_sbros=15000; 
//-------------------------------------------------------------------
String Str_telf;
volatile uint16_t Nx = 0;
char * msg_tel; ///резервируем память под массив фраз с телефона
uint16_t dlina_pix = WIDTH;// ширина в пикселях

//===============================================================================//
void setup(){ Serial.begin( 9600);

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
//----------------- прием по блютуз фраз  -или печатаем в потр по англ
if (Serial.available() !=0){  /// если данные пришли по блютуз
    Str_telf = Serial.readString();//создем строку из буфера порта
    old_N =0; N++;flag=0;//
    flag_tel=1; //опрокидываем флаг
    taimer6 = new_taimer;//сброс таймера
}
if (flag_tel==1){
    String str = Str_telf; // создаем объект
    msg_tel = str.c_str(); //преобразовываем массив
    printString(msg_tel,WIDTH-Nx);
   if (flag==0) {
       cleear();//стираем старую фразу/
       ctart=0;Nx = 0;flag=1; ///разрешаем пересчитать длину новой фразы (ctart=0)
    }   
 }

if (new_taimer - taimer6 >= time_sbros && flag_tel==1){
    flag_tel=0;
   }
//--------------текст из массива-----------------------------------------//
if (flag_tel==0){ //Serial.println(N);}
   if (N>5) N=0;
   printString(msg_avto[N],WIDTH-Nx);//
   if (old_N !=N) {
       old_N =N; cleear();ctart=0; Nx=0; //
      }
 }
} ///конец//а кто читал молодец*/


