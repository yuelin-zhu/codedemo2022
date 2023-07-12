#include<stdio.h>
#include<string.h>
int main()
{
	char s1[6],s2[6];
	int n;
	scanf("%s",s1);//输入正确密码 
	printf("请输入密码：");
	scanf("%s",s2);
	
	if(strcmp(s1,s2)!=0)
	{
	    printf("密码错误！\n"); 
		int q=3;
		do{
		 
		scanf("%s",s2);
		if(strcmp(s1,s2)!=0)
		{
			printf("密码错误！\n");
		    q--;	
		}
		else goto choose;
		
		}while(q>1);
		goto fin;
	}
	else goto choose;
choose:
	printf("请输入操作选项：\n");
	while(1)
	{
		scanf("%d",&n);
		switch(n)
		{
		   case 1:
		   printf("查询余额\n")	;
		   break;
		    case 2:
		   printf(" 提取 \n")	;
		   break;
		    case 3:
		   printf(" 存款 \n")	;
		   break;
		    case 4:
		   printf(" 转账 \n")	;
		   break;
		    case 5:
		   printf("打印清单\n")	;
		   break;
		} 
		if(n==6)
		{
		 printf(" 退卡 \n");	
		 printf("结束服务");
	     return 0;
		}
	}
	

fin:	
      printf("密码错误三次，无法输入!\n");
	return 0;
}

#include<stdio.h>
#include<string.h>
void main()
{
	char ps[7]="123456",str[7];
    
    for(i=0;i<6;i++)
{
	str[i]=getchar()
	putchar('*');
}
str[i]='\0';
if(!strcmp(s1,s2)) //strcmp(s1,s2)
{
	
printf("wrong");
}


