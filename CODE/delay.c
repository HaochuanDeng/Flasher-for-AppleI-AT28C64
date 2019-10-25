#include "delay.h"

/**
  * @brief ��ʱ1ms
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
  * @brief ��ʱ x ms
  * @note  XTAL=24MHZ,6T
  * @param unsigned int x Ҫ��ʱ��ms��
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
  * @brief ��ʱ1us
	* @note  XTAL=24MHZ,6T
	*/
//void Delay1us(void)
//{
//}
