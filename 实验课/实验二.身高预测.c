#include<stdio.h>
int main()
{
	char ch;
	double a,b,l;
	printf("请输入父亲身高；");//cm
	scanf("%lf",&a);
	printf("请输入母亲身高；");
	scanf("%lf",&b);
	printf("请输入孩子性别:");//男-M，女-F。 
	scanf("%c\n",&ch);
	if(ch='M')
	{
		l=(a+b)/2*1.08;
	printf("孩子的身高为：%.2f",l);	
	} 
	if(ch='F')
	{
		l=(a*0.923+b)/2;
	printf("孩子的身高为：%.2f",l);
	}
	getch();
	return 0;
}//问题1.double lf 2.if 结构 3. 
