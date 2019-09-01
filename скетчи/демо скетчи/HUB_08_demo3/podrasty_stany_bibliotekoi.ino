/*подрасту и стану библиотекой*/

void printString(char* msg, int x){
  while (*msg){  int c = *msg; //uint8_t ln;
  if (c>-49 && c<32 ) { //если это первый байт кириллицы,
      msg++; continue;  //пропускаем
      }//32- это экономия массива,31 символ мы не используем
 c<-47 ? c+=224 : c-=32;//если кириллица прибавляем 256-32.иначе -32.*/
 if(ctart==1) printChar(c,x,0);//печатаем
 x+= pgm_read_byte_near(font_rus + (c * 33))+1;//
 msg++;//переходим к следующему байту фразы
  }
if (ctart==0) {
  dlina_pix = x; ctart=1;// Serial.println(dlina_pix);
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
    if (offset) //not aligned
    {
        writeByte(x-offset,y,data>>offset);
        writeByte(x+8-offset,y,data<<(8-offset));
    }
    else     //Aligned byte
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

void cleear ()
{
    uint8_t *ptr = displaybuf;
    for (uint16_t i = 0; i < (WIDTH * HEIGHT / 8); i++)
    {
        *ptr = 0x00;//00
        ptr++;
    }
}
