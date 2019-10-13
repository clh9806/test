#include <iom16v.h>									/*芯片头文件*/

void delay_ms(unsigned int i)                       //延时程序
{
    unsigned int a;
	unsigned char b;
	for (a = 0; a < i; a++) {                       //延时中运行的程序
		for (b = 1; b; b++) {
			;
			}
		}
}

void io_init(void) 
{
    DDRA = 0x00;								/*方向输入								*/
	PORTA = 0xFF;								/*打开上拉								*/
}

void main(void) 
{
    unsigned char x;
	x=0;
    io_init();
	
	DDRA |= (1 << PA0);							/*方向设置为输出					*/
	DDRA |= (1 << PA1);
	DDRA |= (1 << PA2);
	DDRA |= (1 << PA3);
	DDRA |= (1 << PA4);
	DDRA |= (1 << PA5);
	DDRA |= (1 << PA6);
	
	while (1) 
	{
		delay_ms(500);
		PORTA ^= (1 << PA0);						/*典型的位取反写法					*/
		delay_ms(250);
		PORTA ^= (1 << PA1);
		delay_ms(250);
		PORTA ^= (1 << PA2);
		delay_ms(250);
		PORTA ^= (1 << PA3);
		delay_ms(250);
		PORTA ^= (1 << PA4);
		delay_ms(250);
		PORTA ^= (1 << PA5);
		delay_ms(250);
		PORTA ^= (1 << PA6);                        //灯从右往左依次点亮
		
		delay_ms(250);
		PORTA ^= (1 << PA6);						/*典型的位取反写法					*/
		delay_ms(250);
		PORTA ^= (1 << PA5);
		delay_ms(250);
		PORTA ^= (1 << PA4);
		delay_ms(250);
		PORTA ^= (1 << PA3);
		delay_ms(250);
		PORTA ^= (1 << PA2);
		delay_ms(250);
		PORTA ^= (1 << PA1);
		delay_ms(250);
		PORTA ^= (1 << PA0);                       //灯自左往右依次熄灭
		
		delay_ms(500);
		PORTA ^= (1 << PA6);						/*典型的位取反写法					*/
		delay_ms(250);
		PORTA ^= (1 << PA5);
		delay_ms(250);
		PORTA ^= (1 << PA4);
		delay_ms(250);
		PORTA ^= (1 << PA3);
		delay_ms(250);
		PORTA ^= (1 << PA2);
		delay_ms(250);
		PORTA ^= (1 << PA1);
		delay_ms(250);
		PORTA ^= (1 << PA0);                        //灯自左往右依次点亮
		
		delay_ms(500);
		PORTA ^= (1 << PA0);						/*典型的位取反写法					*/
		delay_ms(250);
		PORTA ^= (1 << PA1);
		delay_ms(250);
		PORTA ^= (1 << PA2);
		delay_ms(250);
		PORTA ^= (1 << PA3);
		delay_ms(250);
		PORTA ^= (1 << PA4);
		delay_ms(250);
		PORTA ^= (1 << PA5);
		delay_ms(250);
		PORTA ^= (1 << PA6);                        //灯自右往左依次熄灭
		
		delay_ms(500);
		PORTA ^= (1 << PA3);						/*典型的位取反写法					*/
		delay_ms(300);
		PORTA ^= (1 << PA2);PORTA ^= (1 << PA4);
		delay_ms(300);
		PORTA ^= (1 << PA1);PORTA ^= (1 << PA5);
		delay_ms(300);
		PORTA ^= (1 << PA0);PORTA ^= (1 << PA6);     //灯自下往上依次点亮
		
		delay_ms(500);
		PORTA ^= (1 << PA0);PORTA ^= (1 << PA6);	 /*典型的位取反写法					*/
		delay_ms(300);
		PORTA ^= (1 << PA1);PORTA ^= (1 << PA5);
		delay_ms(300);
		PORTA ^= (1 << PA2);PORTA ^= (1 << PA4);
		delay_ms(300);
		PORTA ^= (1 << PA3);                          //灯自上往下依次熄灭
		
		delay_ms(500);
		PORTA ^= (1 << PA0);PORTA ^= (1 << PA6);	  /*典型的位取反写法					*/
		delay_ms(300);
		PORTA ^= (1 << PA1);PORTA ^= (1 << PA5);
		delay_ms(300);
		PORTA ^= (1 << PA2);PORTA ^= (1 << PA4);
		delay_ms(300);
		PORTA ^= (1 << PA3);                          //灯自上往下依次点亮
		
		delay_ms(500);
		PORTA ^= (1 << PA3);						  /*典型的位取反写法					*/
		delay_ms(300);
		PORTA ^= (1 << PA2);PORTA ^= (1 << PA4);
		delay_ms(300);
		PORTA ^= (1 << PA1);PORTA ^= (1 << PA5);
		delay_ms(300);
		PORTA ^= (1 << PA0);PORTA ^= (1 << PA6);	   //灯自下往上依次熄灭
		
		for(x=0;x<11;x++)
		{
		  delay_ms(150);PORTA ^= (1 << PA0);PORTA ^= (1 << PA1);PORTA ^= (1 << PA2);PORTA ^= (1 << PA3);PORTA ^= (1 << PA4);
		  PORTA ^= (1 << PA5);PORTA ^= (1 << PA6);      //for循环程序，所有灯同时闪烁5次
		}
		
		delay_ms(2000);
		PORTA ^= (1 << PA0);						/*典型的位取反写法					*/
		PORTA ^= (1 << PA1);
		PORTA ^= (1 << PA2);
		PORTA ^= (1 << PA3);
		PORTA ^= (1 << PA4);
		PORTA ^= (1 << PA5);
		PORTA ^= (1 << PA6);		
		}
}
