#include<stdio.h>
void main()
{
	double x,y;
	scanf("%lf",&x);
	if(x>0)
	{
		y=(x+5)*(x+5)+3*x;
		printf("x=%.2f y=%.2f\n",x,y);
	}
	if(x=0)
	{
		y=0;
		printf("x=%.2f y=%.2f\n",x,y);
	}
	if(x<0)
	{
		y=(x+5)*(x+5)-3*x;
		printf("x=%.2f y=%.2f\n",x,y);
	}
getch();	
}
