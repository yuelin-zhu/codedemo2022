#include<stdio.h>
int main()
{
	int a,b,c,s,num=0;
	printf("ˮ�ɻ�����\n");
	for(s=999;s>=100;s--)
	{
	a=s/100;
	b=(s-a*100)/10;
	c=s%10;
	if(s==a*a*a+b*b*b+c*c*c)
	  {
		num++;
	
	    printf("%d=%d*%d*%d+%d*%d*%d+%d*%d*%d\n",s,a,a,a,b,b,b,c,c,c);
      }
    }	
	printf("����%d��ˮ�ɻ���\n",num);
return 0;
}
