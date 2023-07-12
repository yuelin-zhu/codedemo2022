#include<stdio.h>
void main()
{
	int a,n,i,t=0;
	printf("please input......\n");
	long Sn=0;
	scanf("%d,%d",&a,&n);
	printf("S%d=",n); 
	for(i=1;i<=n;i++)
	{
		t=t+a;
		a*=10;
		Sn=Sn+t;
		printf("%d+",t);	
	}
	printf("\b ");
	printf("= %ld",Sn);
}
