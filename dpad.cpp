/* 
 * 
 * Dpad for Arduino TinyTetris 
 * 
 * Designed for https://github.com/AJRussell/Tiny-Tetris
 * 
 * Clumsy code by tobozo (c+) 2016
 * Apologies for coding horror
 * 
 */
 
#ifndef DPADCPP
#define DPADCPP

#include <Arduino.h>
#include "TinyTetris.h"

// this is for analog 5x momentary buttons dpad
// as seen here http://fritzing.org/projects/arduino-5-buttons-keypad
// put your resistor calibration values here
const int dpad[5][2] = {
	{460, 480}, 		//KEY_MIDDLE 1
	{0x120, 0x140}, 	//KEY_LEFT 2
	{0x210, 0x220}, 	//KEY_RIGHT 3
	{0x280, 0x290}, 	//KEY_DOWN 4
	{0x2D0, 0x2F0}  	//KEY_ROTATE 5
};

static int dpadwarp[5] = { 0,0,0,0,0 };
static volatile bool processKey = true;
static volatile int currentPos;


class Dpad
{

  public:

    static int getPos() {
      
      currentPos = getPosition(KEYPAD_PIN)*1;
      delay(100);
      
      for(int i=0;i<5;i++) {
        if(currentPos > dpad[i][0] && currentPos < dpad[i][1]) {
          return i;  
        }
      }
      return -1;
    }

  private:
  
    static int getPosition(int pin) {
      return analogRead(pin);
    }
};

#endif

