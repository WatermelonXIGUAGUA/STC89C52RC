#include <REGX52.H>
#include "Timer0.h"
#include "Key.h"
#include "INTRINS.h"
#include "LCD1602.h"

unsigned char Sec;

void main()
{
	//初始化LCD,定时器0
	LCD_Init();
	Timer0Init();
	LCD_ShowString(1, 1, "Clock:");

	while (1)
	{
		LCD_ShowNum(2,1,Sec,5)
	}

	void Timer0_Routine() interrupt 1
	{
		static unsigned int T0Count;
		TL0 = 0x18; //设置定时初值
		TH0 = 0xFC; //设置定时初值
		T0Count++;
		if (T0Count >= 1000)
		{
			T0Count = 0;
			Sec++;
		}
	}
}