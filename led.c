#include <iom16v.h>									/*оƬͷ�ļ�*/

void delay_ms(unsigned int i)                       //��ʱ����
{
    unsigned int a;
	unsigned char b;
	for (a = 0; a < i; a++) {                       //��ʱ�����еĳ���
		for (b = 1; b; b++) {
			;
			}
		}
}

void io_init(void) 
{
    DDRA = 0x00;								/*��������								*/
	PORTA = 0xFF;								/*������								*/
}

void main(void) 
{
    unsigned char x;
	x=0;
    io_init();
	
	DDRA |= (1 << PA0);							/*��������Ϊ���					*/
	DDRA |= (1 << PA1);
	DDRA |= (1 << PA2);
	DDRA |= (1 << PA3);
	DDRA |= (1 << PA4);
	DDRA |= (1 << PA5);
	DDRA |= (1 << PA6);
	
	while (1) 
	{
		delay_ms(500);
		PORTA ^= (1 << PA0);						/*���͵�λȡ��д��					*/
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
		PORTA ^= (1 << PA6);                        //�ƴ����������ε���
		
		delay_ms(250);
		PORTA ^= (1 << PA6);						/*���͵�λȡ��д��					*/
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
		PORTA ^= (1 << PA0);                       //��������������Ϩ��
		
		delay_ms(500);
		PORTA ^= (1 << PA6);						/*���͵�λȡ��д��					*/
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
		PORTA ^= (1 << PA0);                        //�������������ε���
		
		delay_ms(500);
		PORTA ^= (1 << PA0);						/*���͵�λȡ��д��					*/
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
		PORTA ^= (1 << PA6);                        //��������������Ϩ��
		
		delay_ms(500);
		PORTA ^= (1 << PA3);						/*���͵�λȡ��д��					*/
		delay_ms(300);
		PORTA ^= (1 << PA2);PORTA ^= (1 << PA4);
		delay_ms(300);
		PORTA ^= (1 << PA1);PORTA ^= (1 << PA5);
		delay_ms(300);
		PORTA ^= (1 << PA0);PORTA ^= (1 << PA6);     //�������������ε���
		
		delay_ms(500);
		PORTA ^= (1 << PA0);PORTA ^= (1 << PA6);	 /*���͵�λȡ��д��					*/
		delay_ms(300);
		PORTA ^= (1 << PA1);PORTA ^= (1 << PA5);
		delay_ms(300);
		PORTA ^= (1 << PA2);PORTA ^= (1 << PA4);
		delay_ms(300);
		PORTA ^= (1 << PA3);                          //��������������Ϩ��
		
		delay_ms(500);
		PORTA ^= (1 << PA0);PORTA ^= (1 << PA6);	  /*���͵�λȡ��д��					*/
		delay_ms(300);
		PORTA ^= (1 << PA1);PORTA ^= (1 << PA5);
		delay_ms(300);
		PORTA ^= (1 << PA2);PORTA ^= (1 << PA4);
		delay_ms(300);
		PORTA ^= (1 << PA3);                          //�������������ε���
		
		delay_ms(500);
		PORTA ^= (1 << PA3);						  /*���͵�λȡ��д��					*/
		delay_ms(300);
		PORTA ^= (1 << PA2);PORTA ^= (1 << PA4);
		delay_ms(300);
		PORTA ^= (1 << PA1);PORTA ^= (1 << PA5);
		delay_ms(300);
		PORTA ^= (1 << PA0);PORTA ^= (1 << PA6);	   //��������������Ϩ��
		
		for(x=0;x<11;x++)
		{
		  delay_ms(150);PORTA ^= (1 << PA0);PORTA ^= (1 << PA1);PORTA ^= (1 << PA2);PORTA ^= (1 << PA3);PORTA ^= (1 << PA4);
		  PORTA ^= (1 << PA5);PORTA ^= (1 << PA6);      //forѭ���������е�ͬʱ��˸5��
		}
		
		delay_ms(2000);
		PORTA ^= (1 << PA0);						/*���͵�λȡ��д��					*/
		PORTA ^= (1 << PA1);
		PORTA ^= (1 << PA2);
		PORTA ^= (1 << PA3);
		PORTA ^= (1 << PA4);
		PORTA ^= (1 << PA5);
		PORTA ^= (1 << PA6);		
		}
}
