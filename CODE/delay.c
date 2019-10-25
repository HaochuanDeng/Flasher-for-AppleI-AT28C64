#include "delay.h"

/**
  * @brief 延时1ms
	* @note  XTAL=24MHZ,6T
	*/
void Delay1ms()
{
	unsigned char i, j;

	i = 8;
	j = 197;
	do
	{
		while (--j);
	} while (--i);
}

/**
  * @brief 延时 x ms
  * @note  XTAL=24MHZ,6T
  * @param unsigned int x 要延时的ms数
	*/
void Delayxms(unsigned int x)
{
	unsigned int k;
	
	for(k=x;k>0;k--)
	{
		Delay1ms();
	}
}

/**
  * @brief 延时1us
	* @note  XTAL=24MHZ,6T
	*/
//void Delay1us(void)
//{
//}
