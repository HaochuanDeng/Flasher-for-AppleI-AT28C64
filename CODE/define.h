#ifndef __DEFINE_H
#define __DEFINE_H

#include <STC89C5xRC.H>
#define uint        unsigned int
#define uchar       unsigned char
#define wozaddr     0xFF00
#define basicaddr   0xE000


sbit OE = P1^0;//EEPROM
sbit CE = P1^1;
sbit WE = P1^2;
sbit LED1 = P1^6;//RED
sbit LED2 = P1^7;//YELLOW

#endif