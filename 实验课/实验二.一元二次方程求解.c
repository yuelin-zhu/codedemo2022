#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,c;
	double x1,x2;
	printf("please input the three:\n");
	scanf("%d,%d,%d",&a,&b,&c);
	x1=(-1*b+sqrt(b*b-4*a*c))/2*a;
	x2=(-1*b-sqrt(b*b-4*a*c))/2*a;
	printf("The real roots are:x1=%6.2f,x2=%6.2f\n",x1,x2);//%6.2f:至少六位数据保留两位小数，若不足六位则数据前以空格补齐 
	getch();
	
}
