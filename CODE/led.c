#include "led.h"

/*************************
LEDģʽ1(��һ�Ҷ�)
*************************/
void LEDMODE1(void)
{
	LED1 = 0;//lignt
	LED2 = 1;//shut
}

/*************************
LEDģʽ2
*************************/
void LEDMODE2(void)
{
	LED1 = 1;//shut
	LED2 = 0;//light
}

///*************************
//LEDģʽ3
//*************************/
//void LEDMODE3(void)
//{
//	LED1 = 0;//light
//	LED2 = 0;//light
//}

///*************************
//LED��˸1
//*************************/
//void LEDBLINK1(void)
//{
//	LED1 = 1;
//	
//	LED1 = 0;
//	Delayxms(2000);
//	LED1 = 1;
//	
//	Delayxms(2000);
//	LED1 = 0;
//	Delayxms(2000);
//	LED1 = 1;
//}

///*************************
//LED��˸2
//*************************/
//void LEDBLINK2(void)
//{
//	LED2 = 1;
//	
//	LED2 = 0;
//	Delayxms(2000);
//	LED2 = 1;
//	
//	Delayxms(2000);
//	LED2 = 0;
//	Delayxms(2000);
//	LED2 = 1;
//}