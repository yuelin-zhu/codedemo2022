#include<stdio.h>
void main()
{
	int a;
	printf("input:");
	scanf("%d",&a);
	if(a%10000%1000%100%10==a/10000&&a%10000%1000%100/10==a%10000/1000){
		printf("%d是对称数\n",a);
	}
	else printf("%d不是对称数\n",a); 
	
	getch();
	
}
