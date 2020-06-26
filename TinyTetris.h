#ifndef TINY_TETRIS_CPP_H
#define TINY_TETRIS_CPP_H

#define OLED_ADDRESS	        	0x3C //you may need to change this, this is the OLED I2C address.  
#define OLED_COMMAND	                0x80
#define OLED_DATA	                0x40
#define OLED_DISPLAY_OFF	        0xAE
#define OLED_DISPLAY_ON	                0xAF
#define OLED_NORMAL_DISPLAY	    	0xA6
#define OLED_INVERSE_DISPLAY     	0xA7
#define OLED_SET_BRIGHTNESS	        0x81
#define OLED_SET_ADDRESSING	        0x20
#define OLED_HORIZONTAL_ADDRESSING	0x00
#define OLED_VERTICAL_ADDRESSING	0x01
#define OLED_PAGE_ADDRESSING	        0x02
#define OLED_SET_COLUMN                 0x21
#define OLED_SET_PAGE	                0x22

#define KEY_MIDDLE  0
#define KEY_LEFT    1
#define KEY_RIGHT   2
#define KEY_DOWN    3
#define KEY_ROTATE  4

#define PIEZO_PIN   3
#define LED_PIN     13
#define KEYPAD_PIN  A7

#endif
