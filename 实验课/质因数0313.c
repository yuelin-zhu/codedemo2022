/*3��������һ�������������������磺����90�����2 3 3 5��90=2*3*3*5��*/
#include<stdio.h>
void main()
{
    int n,d,t,m;
	printf("please input......\n");
	scanf("%d",&n);
	d=3;
	if(n%2!=0)
	{
		printf("1*");
	}
	if(n%2==0)
	{
		do
		{
			int i=0;
			n=n/2;
		    printf("2*");
		}while(n%2==0);	
	}
	
	 do
	 {
		m=n%d;
		if(m==0)
		{
		n=n/d;
		printf("%d*",d);
	    }	
		else d=d+2;		
	 }while(n!=1); 
}
//�� 
