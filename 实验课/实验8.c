/*（1）编程实现：用指针法实现求数组中的最大值，数组的元素个数为10个。
#include<stdio.h>
void main()
{
	int a[10],i,max;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	int *p;
	p=a;
	max=*p;
	for(i=0;i<10;i++)
	{
		if(*(p+i)>max)
		{
		max=*(p+i);
	    }
	}
	printf("%d",max); 
} */

/*（2）编程实现：用指针法统计字符串中大写字母、小写字母、空格及数字的个数。*/
/*#include<stdio.h>
#include<string.h>
void main()
{
	char str[50];
	gets(str);
	char *p;
	p=str;
	int i,x1=0,x2=0,x3=0,x4=0;
	for(i=0;i<strlen(str);i++)
	{
		if(*(p+i)>=65&&*(p+i)<=90)
		{
			x1++;
		}
	     if(*(p+i)>=97&&*(p+i)<=122)
		{
			x2++;
		}
	    
	    if(*(p+i)==' ')
		{
			x3++;
		}
	    if(*(p+i)>=48&&*(p+i)<=57)
		{
			x4++;
		}
	
	}
	printf("大写字母=%d 小写字母=%d 空格数=%d 数字=%d",x1, x2,x3,x4); 
}*/


/*（3）编程实现：用冒泡法对键盘输入的10个整数由大到小排序输出，要求用指针实现。
#include<stdio.h>
void main()
{
	int a[10],i,j,t;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	int *p;
	p=a;
	for(i=0;i<9;i++)
	 	for(j=0;j<10-i-1;j++)
	 	{
	 		if(*(p+j)<*(p+j+1))
	 		{
	 			t=*(p+j);
	 			*(p+j)=*(p+j+1);
	 			*(p+j+1)=t;
			 }
		 }
	for(i=0;i<10;i++)
	{
		printf("%d",a[i]);
		printf(" ");
	}
} 
*/

/*（4）编程实现：输入一个字符串，将该字符串中从第m个字符开始的全部字符复制成另一个字符，
m由用户输入（其值小于串长）。要求编写一个函数mcopy(char *s,char *t,int m)来完成。 
#include<stdio.h>
#include<string.h>
void mcopy(char *s,char *t,int m);
void main()
{
	char str[50];
	gets(str);
	char arr[50];
	gets(arr);
	int m;
	printf("选择起始字符：\n");
	scanf("%d",&m); 
	mcopy(str,arr,m);
}
void mcopy(char *s,char *t,int m)
{
	int i,j=0;
	for(i=m-1;j<strlen(t);i++,j++)
	{
		*(s+i)=*(t+j);
	}
	   
	*(s+i)='\0';
	puts(s);
}*/

/*（5）编程实现：编程判断键盘输入的字符串是否为回文。所谓的"回文串"，即从前向后或从后向前读是一样的，
（默认长度是0或1的字符串是"回文串"），若是返回1，否则返回0. 如果用函数实现，如何实现？（用指针实现） 
#include<stdio.h>
#include<string.h>
int pal(char *s);
void main()
{
	char str[50];
	gets(str);
	int c=pal(str);
	if(c==0)
	{
		printf("非回文"); 
	}
	if(c==1)
	{
		printf("是回文") ;
	 } 
}
int pal(char *s)
{
	int i=0,j=strlen(s)-1,flag=0;
	while(i<j)
	{
		if(*(s+i)!=*(s+j))
		{
		    flag++;
			return 0;
		}
		i++;
		j--;
	}
	if(flag==0)
	{
		return 1;
	}
}
*/
/*（6）编程实现：编写一个程序，输入星期，输出该星期的英文名。用指针数组处理。
#include<stdio.h>
#include<string.h>
void main()
{
	char * a[]={"一","二","三","四","五","六","天"};
	char * p[]={"MON","TUS","THU","WED","FRI","SAT","SUN"};
    char input[7];
	int i;
	printf("please input...\n");
    gets(input);
	for(i=0;i<7;i++)
	{
		  if (!strcmp(input, a[i]))
        {		 		     	  
            printf("今天是星期%s，即%s！", input, p[i]);
            exit(0);
        }
	} 
	 printf("输入错误");
 } */ 


/*（7）编程实现：从键盘输入100个数存入数组np中，其中凡相同的数在np中只存入第一次出现的数，其余的都被剔除。（用指针实现）*/
/*#include<stdio.h>
void main()
{
	int np[10];
	int i,j,k;
    for(i=0;i<10;i++)
    {
    	scanf("%d",&np[i]);
	}
    int *p;
	p=np;
	int flag=0;
	for(i=0;i<=9;i++)
	{	
	  for(j=i+1;j<=10;j++) 
	   {
	   	
	     	if(*(p+j)==*(p+i))
	     	{
			  k=j;
			
			 while(k<(10-flag))
			  {
				 *(p+k)=*(p+k+1); 
				 k++;
				 printf("%d",k);
			  } 
			flag++;
			j-=1;
		    }
	   
	    }
	}
    	
	  //for(i=0;i<10-flag;i++)
	  //{
	  //	printf("%d",np[i]);
	  //}
	
} */
//开头结尾 
#include<stdio.h>
#define  N 100
void main()
{
	int n=100,i=0,k=0,j=0,temp=0,count=0;
	int a[N];
	int *p;
	p=a;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int num=n;
	for(i=0;i<num;i++)
	{
		*(a+i)=*(p+k);
		k++;
		for(j=0;j<i;j++)
		{
			if(*(a+j)==*(a+i))
			{
				i--;
				num--;
				count++;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		*(p+i)=*(a+i);
	}
	n=n-count;
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}

/*（8）编程实现：将字符数组str1中下标为双号的元素值赋给另一个字符数组str2，并输出str1和str2的内容。（用指针实现）
#include<stdio.h>
#include<string.h>
#define N 40
void main()
{
	char str1[N];
	char str2[N];
	gets(str1);
	int i=0,k=0;
	char *p;
	p=str1;
	while(*(p+i)!='\0')
	{
		str2[k]=*(p+i);
		i+=2;
		k++;
	 } 
	 str2[k]='\0';
	 puts(str2);
	
} */

/*（9）编程实现：输入一个字符串，输出这个字符串中第n个字符后的所有字符（n<输入字符串的长度） 
#include<stdio.h>
#include<string.h>
#define N 40
void main()
{
	char arr[N],arr1[N];
	int n;
	char *p;
	p=arr;
	gets(arr);
	printf("please input...\n");
	scanf("%d",&n);
	int i=n-1,k=0;
	while(*(p+i)!='\0')
	{
		arr1[k]=*(p+i);
		i++;
		k++;
	}
	arr1[k]='\0';
	puts(arr1);
}*/

/*（10）编程实现：输入一个字符串，把其中的字符按逆序输出。例如：friday，输出yadirf。
要求：
 	用字符数组方法实现
 	用string方法实现
 	用指针实现
并比较哪个方法更灵活
//string
#include<stdio.h>
#include<string.h>
#define N 40
void main()
{
	  char arr[N];
	  gets(arr);
	  int i=0,j=strlen(arr)-1;
	  char t;
	  while(i<j)
	  {
	  	t=arr[i];
	  	arr[i]=arr[j];
	  	arr[j]=t;
	  	i++;
	  	j--;
	  }
	  puts(arr);
}*/ 
//指针 
/*#include<stdio.h>
#include<string.h>
#define N 40
void main()
{
	  char arr[N];
	  gets(arr);
	  int i=0,j=strlen(arr)-1;
	  char *t;
	  char k;
	  t=arr; 
	  while(i<j)
	  {
	  	k=*(t+i);
	  	*(t+i)=*(t+j);
	  	*(t+j)=k;
	  	i++;
	  	j--;
	  }
	  puts(arr);
}*/
//arry
/*#include<stdio.h>
#define N 40
void main()
{
	  char arr[N];
	  scanf("%s",arr);
	  int j=0,i=0;
	  while(arr[i]!='\0')
	  {
	  	i++;
	  }
	  int n=i-1;
	  char t;
	  while(j<n)
	  {
	  	t=arr[j];
	  	arr[j]=arr[n];
	  	arr[n]=t;
	  	j++;
	  	n--;
	  }
	  printf("%s",arr);
} */
