/*1�����ʵ�֣���д������ε�������ܳ��������������ֱ����������ܳ��������������������������ʾ���Ϳ��double�ͱ�����
���������е������������������㳤Ϊ5.5cm����Ϊ2cm�ľ��ε�������ܳ���*/
#include<stdio.h>
double s(double x1,double x2);
double c(double x1,double x2);
void main()
{
	double a=5.5,b=2;
	printf("s=%.2f\nc=%.2f",s(a,b),c(a,b));
}
double s(double x1,double x2)
{
	double s=x1*x2;
	return s;
}
double c(double x1,double x2)
{
	double c=2*(x1+x2);
	return c;
} 

//2�����ʵ�֣���������ʵ����������еĴ��������һ������max�������ʵ���еĴ���������ͷΪ��float max(float x,float y)
/*#include<stdio.h>
float max(float x,float y);
void main()
{
	printf("please input...\n");
	float a,b;
	scanf("%f,%f",&a,&b);
	printf("max=%.2f",max(a,b));
}
float max(float x,float y)
{
	float max=x>=y?x:y;
	return max;
}//���������ͬ��С�����λ�� */

/*3����дʵ�֣����һ�������������ж�һ�������Ƿ�Ϊ����������д��������������������������������
�ж�1000�����ж��ٸ��������������
#include<stdio.h>
#include<math.h>
void prime(int x);
void main()
{
	printf("please input...\n");
	int n;
	scanf("%d",&n);
	prime(n);
}
void prime(int x)
{
	int i,j,flag=0;
	if(x==1)
	{
		printf("It is not a prime\n");
	}
	else
	{
	for(i=2;i<=sqrt(x);i++)
	{
		if(x%i==0)
		{
			printf("It is not a prime\n");
			flag++;
			break;
		}
	}
	if(flag==0)
	{
		printf("It is a prime\n");
	}
	}
	printf(" 1 - 1000 :\n");
	int sum=0;
	flag=1;
	for(i=2;i<=1000;i++)
	{   
		for(j=2;j<=sqrt(i);j++)
		{
		  	if(i%j==0)
		  	{ 
			  flag++;
			}
		}
		if(flag==1)
		{
		printf("%d\t",i);
		sum++;
		}
		flag=1;
	}
	printf("\nsum = %d",sum);
	
}*/
/*4�����ʵ�֣�1��+2��+3��+��+10!��ͣ�
Ҫ�� ��д��׳˵ĺ���f�����������е���f������
#include<stdio.h>
long fac(int x);
void main()
{
	long sum=0;
	int i;
	printf("please input...\n");
	int n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	sum+=fac(i);	
	printf("%d! + ",i);
	}
	printf("\b\b");
	printf("= %ld",sum);
	
	
}
long fac(int x)
{
	long t;
	int i;
	if(x<=1)
	  t=1;
	else 
	  t=x*fac(x-1);
	return t;
}*/

/*5�����ʵ�֣����һ�������ж�һ���������Ƿ�Ϊ����������ν�Ļ��������Ǵ����Һʹ�����������������һ���ġ�
Ҫ����������������һ�������������������
#include<stdio.h>
char pal(int x);
void main()
{
	printf("please input...\n");
	int n;
	scanf("%d",&n);
	printf("%c",pal(n));
}
char pal(int x)
{
	//λ��
	int t=x,k=0;
	while(t!=0)
	{
	  t=t/10;
	  k++;	
	} 
	//�ж� 
	t=x;
	int i,j,a[k];
	for(i=k-1;i>=0;i--)
	{
		a[i]=t%10;
		t=t/10;
	}
	int flag=1;
	for(i=0,j=k-1;i<j;i++,j--)
	{
		if(a[j]!=a[i])
		{
		flag=0;	
		}
	}
	if(flag)
	{
		return 'Y';
	}
	else return 'N';
}
//6�����ʵ�֣��õݹ麯��ʵ����һ���������Ľ׳˵ĺ�����Ҫ�����������е������������
/*#include<stdio.h>
long fact(int x);
void main()
{
	printf("please input...\n");
	int n;
	scanf("%d",&n);
	printf("%d!=%ld",n,fact(n));
}
long fact(int x)
{
	long pro;
	if(x<=1)
	  pro=1;
	else
	  pro=x*fact(x-1);
	return pro;
}*/
/*7�����ʵ�֣�  ������ϷCAI�������
������Ҫ�� 
��1��ʵ��һ��С�͵�������ϷCAI���ϵͳ��Ҫ������ѺõĽ�����ƣ����õ��˻����������������㣬
����Сѧ������һλ��������������λ�����߼������������㡣
��2�������������Ϸ������ʾСѧ������ѡ��ӡ������˺ͳ������������һ�����������ս��
��Ϸ��ʼ����Ļ�����������������һλ��������ʾСѧ�������𰸣�����������������룬
ÿ��ֻ��5�δ�����ᣬ���������ֱ�ӽ�����һ�⡣
��3��ͳ�Ƶ÷֣��ﵽһ������ֵ���磺95�����ϣ���ɽ�������������λ���������ս��
ͬ����������������Ŀ���ޣ��磺һ��50�⣩�����50��÷ֲ������ߣ�������"�ú�ѧϰ"��
��4�����֪ʶ�㣺������̽ṹ���������˼�룬�Ӻ�������ƣ��˵���ƣ�
��֧/ѭ���ṹ��ƣ��������rand()Ӧ�ã������������exit()Ӧ�ã���������Ӧ�õȡ�
��5���ṩ������Է�����������ǿ���������˶��죬��������뾭������ֲ������ݵĿ��顣
ע�����ֲ�ֵΪ�����������ʱ��ֱ��������һ�⡣void add();
void min();
void mul();
void div(); 
void main()*/
/*#include<stdio.h>
#include<Windows.h> 
#include<stdlib.h>
int junior();
int senior();
int jia();
int jian();
int cheng();
int chu();
void main()
{
	//�˵� 
	int score1=0,score2=0;
    system("color 02"); 
	printf("welcom to the arithmetic game\n");
	printf("ps:��ͨ���س���������Ϸ����");
	getchar();
	printf("�Ƿ�������˵�..."); 
	getchar();
	printf("------------------------�˵�ģʽ-------------------------");
	getchar();	
	printf("<<<<<��Ϸ����>>>>>\n  ��ѡ��ӡ������˺ͳ������������һ�����������ս,ע��ÿ��ֻ��5�δ������!!!\n") ;
	printf("  ��ս��Ϊһλ��������������λ�����߼��������ﵽһ������ֵ�󷽿ɽ���߼�����");
	getchar();
	printf("<<<<<ģʽѡ��>>>>>\n  ");
	printf("A:������ģʽ��\t\tB:���߼�ģʽ��");
	char ch;
	int flag=1;
	getchar();	
	printf("��ѡ��...\n");
	while(flag)
	{
	
	scanf("%c",&ch);
	if(ch=='A')
	{
		printf("��ӭ�����������\n");
		flag=0; 
		junior();
	}
	if(ch=='B')
	{
		if(score1>=95)
		{
			printf("��ӭ����߼�����\n"); 
			flag=0;
			senior();
		}
	    else printf("δ�ﵽ������׼��������ѡ��\n");
	} 
	}
	system("color 04"); 
	//���� 
	
	
	//�߼� 
	

/*}
int junior()
{
	int score1=0;
	char ch;
	int flag=1;
	while(flag) 
	{
		printf("��ѡ�����㷽ʽ:");
	getchar();
	printf("A:���ӡ� B:������ C:���ˡ� D:������\n");
	int i;
	scanf("%d",&ch);
		switch(ch)
		{
			case 'A':
			        score1=jia();
			        break;
			case 'B':
			        score1=jian();
			        break;
			case 'C':
			        score1=cheng();
			        break;
			case 'D':
			        score1=chu();
			        break;	                  	               
		}

	 if(score1==100)
	 {
	 	flag=0;
	 }
	}
	
	if(score1==100)
	{
		printf("���سɹ�����\n");
		getchar();	
		printf("������ѡ�����߼���(N)���߽�����Ϸ(E)\n");
		scanf("%c",&ch);
		if(ch=='N')
		{
			printf("��ӭ����߼�����\n"); 
			senior();
	    }
		if(ch=='E')
		{
		return 0;	
		}	 
	}
	else 
	{
		printf("����ʧ�ܣ������¿�ʼ��Ϸ����\n");
		getchar();	
	    printf("�Ƿ�������ս���ǣ�A) ��B��\n");
	    scanf("%c",&ch);
		if(ch=='A')
		{
			printf("��ӭ�����������\n"); 
			junior();
	    }
		if(ch=='B')
		{
		return 0;	
		}	 
	}
	
}
int senior()
{
	int score2=100;
	char ch;
	
	
	
	int flag;
	printf("��ѡ�����㷽ʽ:");
	getchar();
	printf("A:���ӡ� B:������ C:���ˡ� D:������");
	int i;

		scanf("%d",&ch);
		switch(ch)
		{
			case 'A':
			        jia();
			        getchar();
			        system("cls");
			        break;
			case 'B':
			        jian();
			        break;
			case 'C':
			        cheng();
			        break;
			case 'D': 
			        chu();
			        break;	                  	               
		}
	
	
	
	
	
	if(score2>=95)
	{
		system("color 07"); 
		printf("���سɹ�����\n");
		getchar();	
		printf("CONGRATULATIONS!!!\n");
		getchar();	
		printf("���Ƿ���鿴��ʷ���У��ǣ�A����B��\n");
		scanf("%c",&ch);//��ʷ���� 
		if(ch=='A')
		{
			printf("��ӭ�������а�\n"); 
			senior();
	    }
		if(ch=='B')
		{
		return 0;	
		}	 
	}
	else 
	{
		printf("����ʧ�ܣ������¿�ʼ��Ϸ����\n");
		getchar();	
	    printf("�Ƿ�������ս���ǣ�A) ��B��\n");
		scanf("%c",&ch);
		if(ch=='A')
		{
			printf("��ӭ����߼�����\n"); 
			senior();
	    }
		if(ch=='B')
		{
		return 0;	
		}	 
	}
	
}
int jia()
{
	int a,b,c;
	int score=0;
	b=rand()%10+1;
	c=rand()%10+1;
	printf("%d+%d=",b,c);
	scanf("%d",&a);
	if(a==b+c)
	{
		printf("/nbinggo");
		score+=2; 
	}
	if(a!=b+c)
	{
		printf("/nwrong");
	}
	return score;
}
int jian()
{
int a,b,c;
	int score;
	b=rand()%10+1;
	c=rand()%10+1;
	printf("%d-%d=",b,c);
	scanf("%d",&a);
	if(a==b-c)
	{
		printf("/nbinggo");
	}
	if(a!=b-c)
	{
		printf("/nwrong");
	}
}
int cheng()
{
	int a,b,c;
	b=rand()%10+1;
	c=rand()%10+1;
	printf("%d*%d=",b,c);
	scanf("%d",&a);
	if(a==b*c)
	{
		printf("/nbinggo");
	}
	if(a!=b*c)
	{
		printf("/nwrong");
	}
}
int chu()
{
	int a,b,c;
	int score;
	b=rand()%10+1;
	c=rand()%10+1;
	printf("%d/%d=",b,c);
	scanf("%d",&a);
	if(a==b/c)
	{
		printf("/nbinggo");
	}
	if(a!=b/c)
	{
		printf("/nwrong");
	}
}*/

