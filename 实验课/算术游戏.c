#include<stdio.h>
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
		if(score1==100)
		{
			printf("欢迎进入高级场！\n"); 
			flag=0;
			senior();
		}
	    else printf("未达到晋级标准！请重新选择！\n");
	} 
	}
	system("color 04"); 
	
//初级场 
}
int junior()
{
	int score1=0;
	char ch;
	int flag=1;
	while(flag!=50) 
	{
	printf("请选择运算方式:");
	printf("A:【加】 B:【减】 C:【乘】 D:【除】\n");
	int i;
	scanf("%d",&ch);
		switch(ch)//65 66 67 68
		{
			case 'A':
			        score1+=jia();
			        getchar();
			        system("cls");
			        break;
			case 'B':
			        score1+=jian();
			        getchar();
			        system("cls");
			        break;
			case 'C':
			        score1+=cheng();
			        getchar();
			        system("cls");
			        break;
			case 'D':
			        score1+=chu();
			        getchar();
			        system("cls");
			        break;	                  	               
		}

	 flag++;
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
		if(score1<60)
		{
			printf("好好学习，天天向上！！\n");
		} 
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
//改高级场 
int senior()
{
	int score2=0;
	char ch;
	int flag=1;
	while(flag!=50) 
	{
	printf("请选择运算方式:");
	printf("A:【加】 B:【减】 C:【乘】 D:【除】\n");
	int i;
	scanf("%d",&ch);
		switch(ch)//65 66 67 68
		{
			case 'A':
			        score2+=jia();
			        getchar();
			        system("cls");
			        break;
			case 'B':
			        score2+=jian();
			        getchar();
			        system("cls");
			        break;
			case 'C':
			        score2+=cheng();
			        getchar();
			        system("cls");
			        break;
			case 'D':
			        score2+=chu();
			        getchar();
			        system("cls");
			        break;	                  	               
		}

	 flag++;
	}
	
	
	if(score2>=60)
	{
		system("color 07"); 
		printf("闯关成功！！\n");
		getchar();	
		printf("CONGRATULATIONS!!!\n");
		getchar();	
		printf("您是否想查看成绩？是（A）否（B）\n");
		scanf("%c",&ch);//历史排行 
		if(ch=='A')
		{
			printf("欢迎进入成绩查询！\n"); 
			getchar();
			printf("%d",score2); 
	    }
		if(ch=='B')
		{
		printf("GAME OVER!感谢您的参与。");
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
//加 
int jia()
{
	int a,b,c;
	int score=0;
	b=rand()%10+1;
	c=rand()%10+1;
	printf("%d+%d=",b,c);
	scanf("%d",&a);
	getchar();
	if(a==b+c)
	{
		printf("binggo\n");
		score+=2; 
	}
	if(a!=b+c)
	{
		printf("wrong\n");
	}
	return score;
}
//减 
int jian()
{
int a,b,c;
	int score=0;
	b=rand()%10+1;
	c=rand()%10+1;
	printf("%d-%d=",b,c);
	if(b-c<0)
	{
		getchar();
		system("cls");
		jian();
	} 
	scanf("%d",&a);
	getchar();
	if(a==b-c)
	{
		printf("binggo\n");
		score+=2; 
	}
	if(a!=b-c)
	{
		printf("wrong\n");
	}
	return score;
}
//乘 
int cheng()
{
int a,b,c;
	int score=0;
	b=rand()%10+1;
	c=rand()%10+1;
	printf("%d*%d=",b,c);
	scanf("%d",&a);
	getchar();
	if(a==b*c)
	{
		printf("binggo\n");
		score+=2; 
	}
	if(a!=b*c)
	{
		printf("wrong\n");
	}
	return score;
}
//除 
int chu()
{
	int a,b,c;
	int score=0;
	b=rand()%10+1;
	c=rand()%10+1;
	printf("%d/%d=",b,c);
	if(b%c!=0)
	{
		getchar();
		system("cls");
		chu();
	}
	scanf("%d",&a);
	getchar();
	if(a==b/c)
	{
		printf("binggo\n");
		score+=2; 
	}
	if(a!=b/c)
	{
		printf("wrong\n");

	}
	return score;
}

