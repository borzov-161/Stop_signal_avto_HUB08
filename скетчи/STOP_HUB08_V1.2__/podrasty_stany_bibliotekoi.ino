/*подрасту и стану библиотекой*/

void printString(char* msg, int x,int8_t ZX){//функция принимает три переменные из вне
 while (*msg)
 {// крутим цикл 
  int c = *msg;//перводим символ в число
  if (c>-49 && c<32 ) {msg++; continue;} //если это первый байт кириллицы,пропускаем
  c<-47 ? c+=224 : c-=32;//если кириллица прибавляем 256-32.иначе -32.
  if(flag_len)  printChar(c,x,ZX);//печатаем после подсчета длины фразы
  x+= pgm_read_byte_near(font_rus + (c * 33))+1;//складываем первые байты из массива(ширину)
  msg++;//переходим к следующему байту фразы
 }
if (!flag_len)//если нужно посчитать ширину фразы
  {
  length = x; flag_len=1;//заканчиваем расчет ширины фразы
  length <= WIDTH ? length = WIDTH : length += WIDTH;
  }
}

void printChar(byte c, int x, int y){
   byte l = pgm_read_byte_near(font_rus + (c * 33))+1;//получить ширину в пикселях характер
      for (int a=0;a<16;a++){   
      clearLine(x,y+a,l);
      writeByte(x,y+a,pgm_read_byte_near(font_rus + (c * 33) +a*2 +1));
      writeByte(x+8,y+a,pgm_read_byte_near(font_rus + (c * 33) +a*2 +2));
  }
}
void writeByte(int x, int y, uint8_t data)
{
    if (x >= WIDTH ||y >= HEIGHT || x+8<=0 || y < 0) return; //outside screen
    uint8_t offset = x & 7;  //bit offset//7
    if (offset) //не выравнивается
    {
        writeByte(x-offset,y,data>>offset);
        writeByte(x+8-offset,y,data<<(8-offset));
    }
    else     //выравниваем byte
    {
        uint8_t col = x / 8;
        displaybuf[y*8+col] |= data;
    }
}
void clearLine(int x,int y, int w)
{
    if (y < 0 || y >= HEIGHT || x >= WIDTH) return;
    if (x < 0)
    {
        w = w+x;
        x = 0;
    }
    if (x + w > WIDTH)
        w = WIDTH-x;
    if (w <= 0) return;
    if ((x& 7)+w <= 8)
    {
        uint8_t m = 0xFF << (8-w);
        m >>= (x& 7);
        displaybuf[y*8+x/8] &= ~m;
    }
    else
    {
        uint16_t start = y*8+(x+7)/8;  //included
        uint16_t end =   y*8+(x+w)/8;  //not included
        if (x& 7) displaybuf[start-1] &= ~(0xFF >> (x& 7));
        for (uint16_t p = start; p < end ; p++) displaybuf[p] = 0;
        if ((x+w)& 7) displaybuf[end] &= ~(0xFF << (8-(x+w)& 7));
 }  
 }
 
