#include<stdio.h>
int main()
{
	char ch;
	double a,b,l;
	printf("�����븸����ߣ�");//cm
	scanf("%lf",&a);
	printf("������ĸ����ߣ�");
	scanf("%lf",&b);
	printf("�����뺢���Ա�:");//��-M��Ů-F�� 
	scanf("%c\n",&ch);
	if(ch='M')
	{
		l=(a+b)/2*1.08;
	printf("���ӵ����Ϊ��%.2f",l);	
	} 
	if(ch='F')
	{
		l=(a*0.923+b)/2;
	printf("���ӵ����Ϊ��%.2f",l);
	}
	getch();
	return 0;
}//����1.double lf 2.if �ṹ 3. 
