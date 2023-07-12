/*1、编程实现：编写计算矩形的面积和周长。用两个函数分别计算面积和周长，函数的输入参数都是两个表示长和宽的double型变量。
在主函数中调用这两个函数，计算长为5.5cm，宽为2cm的矩形的面积和周长。*/
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

//2、编程实现：输入两个实数，求出其中的大数。设计一个函数max求出两个实数中的大数。函数头为：float max(float x,float y)
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
}//输入输出不同，小数点后位数 */

/*3、编写实现：设计一个函数，用来判断一个整数是否为素数，并编写主函数，在主函数这个调用这个函数，
判断1000以内有多少个素数，并输出。
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
/*4、编程实现：1！+2！+3！+…+10!求和，
要求： 编写求阶乘的函数f，在主程序中调用f函数。
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

/*5、编程实现：设计一个函数判断一个正整数是否为回文数，所谓的回文数就是从左到右和从右向左读这个数都是一样的。
要求：在主函数中输入一个数并调用这个函数。
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
	//位数
	int t=x,k=0;
	while(t!=0)
	{
	  t=t/10;
	  k++;	
	} 
	//判断 
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
//6、编程实现：用递归函数实现求一个正整数的阶乘的函数。要求在主函数中调用这个函数。
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
/*7、编程实现：  算术游戏CAI软件开发
【功能要求】 
（1）实现一个小型的算术游戏CAI软件系统，要求具有友好的界面设计（良好的人机交互），操作方便，
帮助小学生进行一位数（初级）或两位数（高级）的四则运算。
（2）主界面给出游戏规则，提示小学生可以选择加、减、乘和除四则运算的任一种运算进行挑战。
游戏开始，屏幕上随机出现两个数（一位数），提示小学生给出答案，答错了请求重新输入，
每题只有5次答题机会，机会用完后直接进入下一题。
（3）统计得分，达到一定分数值（如：95分以上）后可进级，即进行两位数计算的挑战。
同样，可设置试题数目上限（如：一共50题），完成50题得分不及格者，提醒其"好好学习"。
（4）相关知识点：面向过程结构化程序设计思想，子函数的设计，菜单设计，
分支/循环结构设计，随机函数rand()应用，程序结束函数exit()应用，清屏函数应用等。
（5）提供程序测试方案，程序功能强弱可以因人而异，但程序必须经得起各种测试数据的考验。
注：出现差值为负数或除不尽时，直接跳到下一题。void add();
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
	//菜单 
	int score1=0,score2=0;
    system("color 02"); 
	printf("welcom to the arithmetic game\n");
	printf("ps:请通过回车键控制游戏进程");
	getchar();
	printf("是否进入主菜单..."); 
	getchar();
	printf("------------------------菜单模式-------------------------");
	getchar();	
	printf("<<<<<游戏规则>>>>>\n  请选择加、减、乘和除四则运算的任一种运算进行挑战,注意每题只有5次答题机会!!!\n") ;
	printf("  挑战分为一位数（初级）和两位数（高级），当达到一定分数值后方可进入高级场。");
	getchar();
	printf("<<<<<模式选择>>>>>\n  ");
	printf("A:【初级模式】\t\tB:【高级模式】");
	char ch;
	int flag=1;
	getchar();	
	printf("请选择...\n");
	while(flag)
	{
	
	scanf("%c",&ch);
	if(ch=='A')
	{
		printf("欢迎进入初级场！\n");
		flag=0; 
		junior();
	}
	if(ch=='B')
	{
		if(score1>=95)
		{
			printf("欢迎进入高级场！\n"); 
			flag=0;
			senior();
		}
	    else printf("未达到晋级标准！请重新选择！\n");
	} 
	}
	system("color 04"); 
	//初级 
	
	
	//高级 
	

/*}
int junior()
{
	int score1=0;
	char ch;
	int flag=1;
	while(flag) 
	{
		printf("请选择运算方式:");
	getchar();
	printf("A:【加】 B:【减】 C:【乘】 D:【除】\n");
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
		printf("闯关成功！！\n");
		getchar();	
		printf("您可以选择进入高级场(N)或者结束游戏(E)\n");
		scanf("%c",&ch);
		if(ch=='N')
		{
			printf("欢迎进入高级场！\n"); 
			senior();
	    }
		if(ch=='E')
		{
		return 0;	
		}	 
	}
	else 
	{
		printf("闯关失败，请重新开始游戏！！\n");
		getchar();	
	    printf("是否重新挑战？是（A) 否（B）\n");
	    scanf("%c",&ch);
		if(ch=='A')
		{
			printf("欢迎进入初级场！\n"); 
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
	printf("请选择运算方式:");
	getchar();
	printf("A:【加】 B:【减】 C:【乘】 D:【除】");
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
		printf("闯关成功！！\n");
		getchar();	
		printf("CONGRATULATIONS!!!\n");
		getchar();	
		printf("您是否想查看历史排行？是（A）否（B）\n");
		scanf("%c",&ch);//历史排行 
		if(ch=='A')
		{
			printf("欢迎进入排行榜！\n"); 
			senior();
	    }
		if(ch=='B')
		{
		return 0;	
		}	 
	}
	else 
	{
		printf("闯关失败，请重新开始游戏！！\n");
		getchar();	
	    printf("是否重新挑战？是（A) 否（B）\n");
		scanf("%c",&ch);
		if(ch=='A')
		{
			printf("欢迎进入高级场！\n"); 
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

