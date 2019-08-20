#include "led.h"
#include "delay.h"
#include "sys.h"

int main(void)
{
	delay_init();//初始化
	LED_Init();//初始化与LED连接
	while(1)
	{ LED0=0;
	LED1=1;
	delay_ms(300);//延时300ms
	LED0=1;
	LED1=0;
	delay_ms(300);//延时300ms
	} 
}
