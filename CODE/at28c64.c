#include "at28c64.h"



void init(void)
{
	CE=1;
	OE=1;
	WE=1;
}

void writechip(uint addr, uchar Data)
{
	uchar addrlsb,addrhsb;
	addrlsb = (uchar)addr;
  addrhsb = (uchar)(addr>>8);
	
	CE=1;
	OE=0;
	WE=1;
	P0=Data;
	Delay1ms();
	CE=0;
	OE=1;
	P2=addrlsb;
	P3=addrhsb;
	Delay1ms();
	WE=0;
	CE=1;
	Delayxms(5);
}

uchar readchip(uint addr)
{
	uchar addrlsb,addrhsb,Data;
	addrlsb = (uchar)addr;
  addrhsb = (uchar)(addr>>8);
	
  P2=addrlsb;
	P3=addrhsb;
	CE=0;
	OE=0;
	P0=0xFF;
	Delayxms(2);
	Data=P0;
	OE=1;
	CE=1;
	
  return Data;
}

void write(uchar *Data, const uint Size, uint addr)
{
	uint x;
	
	for(x=0; x<Size; x++)
	{
		writechip(addr, *Data);
		addr++;
		Data++;
	}
}

uchar verify(uchar *Data, const uint Size, uint addr)
{
	uint x;
	
	for(x=0; x<Size; x++)
	{
		if(readchip(addr)==*Data)
		{
			addr++;
			Data++;
		}
		else
			return 0;
	}
	return 1;
}