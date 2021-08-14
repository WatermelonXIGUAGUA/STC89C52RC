#include <REGX52.H>
#include "Delay.h"
#include "LCD1602.h"
#include "MatrixKey.h"

unsigned char KeyNum;
unsigned int Password, Count;

void main()
{
	LCD_Init();
	LCD_ShowString(1, 1, "Password:");

	while (1)
	{
		KeyNum = MatrixKey();
		if (KeyNum)
		{
			switch (KeyNum)
			{
			//S1~S10 输入密码
			case 1:;
			case 2:;
			case 3:;
			case 4:;
			case 5:;
			case 6:;
			case 7:;
			case 9:;
			case 10:
				//输入超过五位就不在让其进行输入
				if (Count < 5)
				{
					Password *= 10;
					Password += KeyNum % 10;
					Count++;
				}
				LCD_ShowNum(2, 1, Password, 5);
				break;

			//S11 确认密码是否正确
			case 11:
				if (Password == 12345)
				{
					LCD_ShowString(1, 13, "OK ");
				}
				else
				{
					LCD_ShowString(1, 13, "ERR");
				}
				Password = 0;
				Count = 0;
				LCD_ShowNum(2, 1, Password, 5);
				break;
			//S12 重置输入的密码
			case 12:
				Password = 0;
				Count = 0;
				LCD_ShowNum(2, 1, Password, 5);
				break;
			default:
				break;
			}
		}
	}
}