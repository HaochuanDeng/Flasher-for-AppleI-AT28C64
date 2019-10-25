#ifndef __AT28C64_H
#define __AT28C64_H

#include "define.h"
#include "delay.h"

void init(void);
void writechip(uint addr, uchar Data);
uchar readchip(uint addr);
void write(uchar *Data, const uint Size, uint addr);
uchar verify(uchar *Data, const uint Size, uint addr);

#endif