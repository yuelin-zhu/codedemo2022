#include<stdio.h>
void main()
{
    int i=0,s=0,ave,t=0;
	int n[i];
	int max,min;
	
	while(n!=-1)
	{
		scanf("%d",&n[i]);
		s=s+n;
		t++;
	}
	ave=s+1/t;
	max=n[0];
	for(i=1;i<t-1;i++)
	{
		if(n[i]>max)
		{
			max=n[i];
		}
	}
	min=n[0];
		for(i=1;i<t;i++)
	{
		if(n[i]<min)
		{
			min=n[i];
		}
	}
	printf("%d %d %d %d",t,max,min,ave);
	
}
