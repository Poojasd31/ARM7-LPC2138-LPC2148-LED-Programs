#include<LPC21XX.h>

//Forward Declaration
void delay(int);

void main()
{
	//LED = P0.17
	PINSEL0 = 0X00000000; //P0.0-P0.15
	PINSEL1 = 0X00000000; //P0.16-P0.31
	PINSEL2 = 0X00000000; //P1.16 - P1.31
	
	//LED an an Output
	IODIR0 = (1<<17) | (1<<18)|  (1<<19);
	
	
	while(1)
	{
		IOSET0 = (1<<17) | (1<<18)|  (1<<19);
		delay(50);
		IOCLR0 = (1<<17) | (1<<18)|  (1<<19);
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