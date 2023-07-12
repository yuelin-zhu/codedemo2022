/*4、一个球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？*/
#include<stdio.h>
void main()
{
	float h,sum=0,t=0;
	int i;
	h=100.0;
	printf("output.....\n");
	for(i=1;i<=10;++i)
	{
	    sum+=h;
		t=h/2;
		h=t;
		
	}
	printf("第十次落地时经过%.4f米\n第十次反弹%.4f米",sum,h);
	
}
