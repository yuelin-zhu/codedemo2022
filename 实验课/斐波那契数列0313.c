/*1��Fibonacci���е������Fibonacci�����е�ÿ�����ݶ���Ĺ������£� 
����1   1   2   3   5   8   13  21 ���� �����ǰ20�����ݣ�ÿ����ʾ5������*/
#include<stdio.h>
void main()
{
	int a1=1,a2=1,a3;
	int i;
	printf("output.....\n"); 
	printf("%d %d ",a1,a2);
	for(i=1;i<=18;++i)
	{
	    a3=a1+a2;
		a1=a2;
		a2=a3;
		printf("%d ",a3);
		if(i==3||i%5==3)
		{
			printf("\n");
		}	
	}
}
