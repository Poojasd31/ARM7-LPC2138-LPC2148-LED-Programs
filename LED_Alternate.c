#include<lpc21xx.h>

//Forward Declaration
void delay(int);

void main()
{
	//PINSEL Register to select pins
	PINSEL0 = 0X00000000;
	PINSEL1 = 0X00000000; //pin 17,18,19
	PINSEL2 = 0X00000000;
	
//LED1, LED 2, LED3 an an Output
	IODIR0 = (1<<17) | (1<<18)|  (1<<19); 
	
	while(1)
	{
		IOSET0 = (1<<17) | (1<<19);
    IOCLR0 = (1<<18);
    delay(50);
    IOCLR0 = (1<<17) | (1<<19);
    IOSET0 = (1<<18);
    delay(50);
	}	
}

void delay(int t)
{
	int i,j;
	for(i=0;i<t;i++)
	{
		for(j=0;j<60000;j++)
		{
		}
	}
}

