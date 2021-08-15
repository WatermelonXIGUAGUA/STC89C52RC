#include <REGX52.H>
#include "Delay.h"
#include "LCD1602.h"

/**
 * @brief 获取独立按键码
 * @param 无
 * @return 按键码 0～4
 */
unsigned char Key()
{
    unsigned char KeyNumber = 0;
   // LCD_Init();
    if (P3_1 == 0)
    {
        Delay(20);
        while (P3_1 == 0)
					//LCD_ShowString(1, 1, "Push Button: K1");
        ;
        Delay(20);
        KeyNumber = 1;
    }
    if (P3_0 == 0)
    {
        Delay(20);
        while (P3_0 == 0)
            //LCD_ShowString(1, 1, "Push Button: K2");
        ;
        Delay(20);
        KeyNumber = 2;
    }
    if (P3_2 == 0)
    {
        Delay(20);
        while (P3_2 == 0)
           // LCD_ShowString(1, 1, "Push Button: K3");
        ;
        Delay(20);
        KeyNumber = 3;
    }
    if (P3_3 == 0)
    {
        Delay(20);
        while (P3_3 == 0)
           // LCD_ShowString(1, 1, "Push Button: K4");
        ;
        Delay(20);
        KeyNumber = 4;
    }
   // LCD_ShowString(1, 1, "         ");
    return KeyNumber;
}
