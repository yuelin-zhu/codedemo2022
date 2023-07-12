//用for 循环打印菱形
/*#include<stdio.h>
int main()
{
    int i,j;
    for(i = 1;i <= 3;i++)//打印高度为3的三角形
    {
        for(j=i;j<=3;j++)//打印上部分空格
        {
            printf(" ");
        }
        for(j = 1;j <= 2*i-1;j++)//打印三角形实体
        {
            printf("*");
        }
            printf("\n");
        }
    //=================================上下部分分界线
        for(i = 1;i <= 2;i++) //打印下部分高度为2的倒三角形
        {       
        for(j = 1;j <= (2+i)-1;j++) //打印下部分空格
        {
        printf(" ");
        }
        for(j = 1;j <= 5-(i*2);j++)//打印倒三角形实体
        {
        printf("*");
        }
        printf("\n");
        }
 
        return 0;
        }*/
//自定义行数菱形
#include<stdio.h>
int main()
{
	int h,l,i,j;
	printf("input......\n");
	scanf_s("%d",&h);
	for(i=1;i<=h;++i)
	{
		for(j=1;j<=h-i;j++)//输入空格 
		{
			printf(" ");
		}
		for(l=1;l<=2*i-1;l++)//输入上三角 
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=h-1;i>=1;--i)
	{
		for(j=h-i;j>=1;j--)//输入空格 
		{
			printf(" ");
		}
		for(l=2*i-1;l>=1;l--)//输入下三角 
		{
			printf("*");
		}
		printf("\n");
	}
 }

//空心菱形 
/*#include<stdio.h>
void main()
{
	int h,l,i,j;
	printf("input......\n");
	scanf("%d",&h);
	for(i=1;i<=h;++i)
	{
		for(j=1;j<=h-i;j++)//输入空格 
		{
			printf(" ");
		}
		for(l=1;l<=2*i-1;l++)//输入上三角 
		{
			if(l==1||l==2*i-1)
			{
			printf("*");
		    }
		    else printf(" ");
		}
		printf("\n");
	}
	for(i=h-1;i>=1;--i)
	{
		for(j=h-i;j>=1;j--)//输入空格 
		{
			printf(" ");
		}
		for(l=2*i-1;l>=1;l--)//输入下三角 
		{
		if(l==1||l==2*i-1)
			{
			printf("*");
		    }
		    else printf(" ");
		}
		printf("\n");
	}
 } 

//每行输出递减 按直角三角型输出 都先输出到A 
/* #include<stdio.h>
void main()
{
	int h,i,j,l;
	char ch='A';
	printf("input......\n");
	scanf("%d",&h);
	for(i=1;i<=h;++i)
	{
		for(j=1;j<=h-i;j++)//输入空格 
		{
			printf(" ");
		}
		ch='A'+i-1;
		for(l=1;l<=i;l++)//输入左
		{
			
			printf("%c",ch);
			ch--;
	    }
		for(ch='B';ch<='A'+i-1;ch++)//输入右 
		
			printf("%c",ch);
		
	
		printf("\n");
	}
	for(i=h-1;i>=1;--i)
	{
		for(j=h-i;j>=1;j--)//输入空格 
		{
			printf(" ");
		}
		ch='A'+i-1;
		for(l=i;l>=1;l--)//输入左
		{
			
			printf("%c",ch);
			ch--;
	    }
		for(ch='A'+i-1;ch>='B';ch--)//输入右 
		
			printf("%c",ch);
		
		printf("\n");
	}
}
  */
	
 //} 
 //画图游戏 定义几种图形输入数字进行选择自由组成图形
 // 打印矩形：自定义高和宽
  //打印圆形
  //打印星星
  //打印爱心... 
