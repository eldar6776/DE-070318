/**
  * @file    fonts_hz16.c 
  * @author  WB R&D Team - openmcu666
  * @version V0.1
  * @date    2015.9.9
  * @brief   16x16����ģ
  */
#include "fonts.h"

const FNT_GB16 Chinese16x16_Table[] = {

	"��",
	0x00,0x00,0x31,0xFC,0x31,0xFC,0x60,0x30,0x6C,0x30,0xFC,0x30,0xF8,0x30,0x18,0x30,
  0x30,0x30,0x7C,0x30,0x7C,0x30,0x00,0x30,0x7D,0xFE,0xF1,0xFE,0x00,0x00,0x00,0x00,
	
	"��",
  0x03,0x00,0x03,0x60,0x03,0x30,0x03,0x10,0x7F,0xFC,0x7F,0xFC,0x06,0xC0,0x06,0xD8,
  0x06,0xD8,0x0C,0xF0,0x0C,0xE0,0x18,0xC0,0x31,0xC6,0x67,0xFE,0x42,0x7C,0x00,0x00,
	
	"��",
	0x00,0x00,0x7F,0xFC,0x7F,0xFC,0x0C,0x60,0x0C,0x60,0x0C,0x60,0xFF,0xFE,0xFF,0xFE,
  0x0C,0x60,0x0C,0x60,0x0C,0x60,0x18,0x60,0x18,0x60,0x70,0x60,0x20,0x60,0x00,0x00,
	
	"��",
	0x03,0x00,0x33,0x30,0x33,0x18,0x33,0x00,0x7F,0xFC,0x7F,0xFC,0x06,0x00,0x07,0xF8,
  0x0F,0xF8,0x1A,0x30,0x33,0x60,0x61,0xC0,0x43,0xE0,0x1E,0x3E,0x18,0x0E,0x00,0x00,
	
	"��",
	0x30,0x00,0x30,0x3C,0x33,0xF0,0xFF,0x00,0xFF,0xFC,0x33,0xFC,0x33,0x6C,0x7B,0x6C,
  0x7F,0x6C,0xB7,0x68,0xB3,0x38,0x33,0x30,0x36,0x78,0x34,0xCC,0x31,0x86,0x00,0x00,
};

 sFONT Font16x16 = {
  (const uint16_t*)Chinese16x16_Table->Index,
  16, /* Width */
  16, /* Height */
};
 