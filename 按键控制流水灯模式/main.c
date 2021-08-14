#include <REGX52.H>
#include "Delay.h"
#include "LCD1602.h"
#include "MatrixKey.h"

void Timer0_Init();

void main()
{
	while (1)
	{
	}
}

void Timer0_Init() 
{
	TMOD=0x01;
}