#include<stdio.h>
void main()
{
	int a;
	printf("input:");
	scanf("%d",&a);
	if(a%10000%1000%100%10==a/10000&&a%10000%1000%100/10==a%10000/1000){
		printf("%d�ǶԳ���\n",a);
	}
	else printf("%d���ǶԳ���\n",a); 
	
	getch();
	
}
