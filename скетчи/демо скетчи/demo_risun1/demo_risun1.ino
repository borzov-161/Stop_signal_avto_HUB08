/* ------------
Library only works for Arduino Uno and others based on the ATmega328.
The pins are hard coded into the library for better performance, only port D and the SPI Pins are used.

HUB08-Pin | Arduino Pin | Note
  LA / A  |     4       | Line select A
  LB / B  |     5       | Line select B 
  LC / C  |     6       | Line select C
  LD / D  |     7       | Line select D
  CLK     |   13 (SCK)  | Serial clock
  R1 / R  |   11 (MOSI) | Serial Data (Red pixels)
  OE / EN |     3       | Output Enable (PWM brightness control)
 LAT / STB|     2       | Latch
  
The library increases the Timer2 frequency so that the PWM runs on 32 kHz.
Affected are only the pins 3 and 11, both occupied by the interface.

-------------*/


#include <SPI.h>
#include "HUB08SPI.h"
#include <TimerOne.h>

#define WIDTH   64
#define HEIGHT  16

HUB08SPI display;

//=============== рисунок ===============================================//
uint8_t display_risunok[WIDTH * HEIGHT / 8] = {
128,0,1,255,255,192,0,1,
0,0,7,0,0,112,0,0,
0,0,28,127,255,28,0,0,
0,0,49,255,255,198,0,0,
0,0,32,3,224,2,0,0,
0,0,39,227,227,242,0,0,
0,0,39,227,227,242,0,0,
0,0,39,227,227,242,0,0,
0,0,39,227,227,242,0,0,
0,0,39,243,231,242,0,0,
0,0,33,251,239,194,0,0,
0,0,56,115,231,14,0,0,
0,0,15,3,224,120,0,0,
0,0,1,193,193,192,0,0,
0,0,0,56,142,0,0,0,
128,0,0,15,120,0,0,1
};///*/

void setup()
{   display.begin(display_risunok, WIDTH, HEIGHT);
    Timer1.initialize(200);  //800 us -> refresh rate 1250 Hz per line / 16 = 78 fps
    Timer1.attachInterrupt(refresh);
    
    display.setBrightness(164); //low brightness to save energy
    
    delay(2000); //show splash screen
  //  display.clear();
}

void loop()
{ 
}
void refresh() {
    display.scan();  //refresh a single line of the display
}
