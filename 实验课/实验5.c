//1、编写子函数strcmp(char *,char *)，实现库函数strcmp(char *,char *)的功能，即比较两个字符串的大小。
/*#include <stdio.h>
#include <string.h>
#define N 50
int Strcmp(char *str1,char *str2);
void main()
{
	char arr1[N],arr2[N];
	printf("please input......\n");
	gets(arr1);
	gets(arr2);
	Strcmp(arr1,arr2);
		if(	Strcmp(arr1,arr2)<0)
	{
		printf("arr1<arr2");
	}
	    else if(Strcmp(arr1,arr2)>0)
	{
		printf("arr1>arr2");
	}
		else printf("arr1=arr2");
}
 int Strcmp(char *str1,char *str2)
{
	int i,n;
	n=strlen(str1)>strlen(str2)?strlen(str1):strlen(str2);
	for(i=0;i<n;i++)
	{
		if(str1[i]<str2[i]||str1[i]>str2[i])
		{
			return str1[i]-str2[i];
		}
	
	}
	
}*/

//2、编写子函数strcat(char *,char *)，实现库函数strcat(char *,char *)的功能，即连接两个字符串。
/*#include <stdio.h>
#include <string.h>
#define N 50
void Strcat(char *str1,char *str2);
void main()
{
	char arr1[N],arr2[N];
	printf("please input......\n");
	gets(arr1);
	gets(arr2);
	Strcat(arr1,arr2);
	
}
void Strcat(char *str1,char *str2)
{
	int i,j,n;
	i=strlen(str1);
	for(j=0;j<strlen(str2);i++,j++)
	{
		str1[i]=str2[j];
	}
	str1[i]='\0';
    printf("%s",str1);
}*/

//3、编写子函数strcpy(char *,char *)，实现库函数strcpy(char *,char *)的功能，即字符串的复制。
/*#include <stdio.h>
#include <string.h>
#define N 50
void Strcpy(char *str1,char *str2);
void main()
{
	char arr1[N],arr2[N];
	printf("please input......\n");
	gets(arr1);
	Strcpy(arr1,arr2);
}
void Strcpy(char *str1,char *str2)
{
	
	int i=0;
	while(str1[i]!='\0')
	{
		str2[i]=str1[i];
		i++;
	}
	str2[i]='\0' ;
	printf("%s",str2);	
}*/
//4、编写子函数strlen(char *)，实现库函数strlen(char *)的功能，即求字符串的长度。
/*#include <stdio.h>
#include <string.h>
#define N 50
int Strlen(char *str);
void main()
{
	char arr[N];
	printf("please input......\n");
	gets(arr);
	int c;
    c=Strlen(arr);
    printf("%d",c);
		
}
int Strlen(char *str)
{
	int i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	return i;
}*/
/*5、从键盘接收一个字符串，按照字符顺序从小到大进行排序并删除重复字符，将得到的新串输出。
 如从键盘输入的内容为"agehiagehp"，执行完程序之后变为："aeghip"。
 要求：排序和删除操作运用子函数实现。*/
#include <stdio.h>
#include <string.h>
#define N 50
void sort(char * str);
void Delete(char * arr );//找到重复字符位置，删除，挪位。 
void main()
{
	char ch[N];
	printf("please input ......\n");
	gets(ch);
	sort(ch);
}
 void sort(char * str)
 {
 	int i=0,j;
 	char t;
 	//冒泡排序 
 	for(i=0;i<strlen(str)-1;i++)
 	{
 		for(j=0;j<strlen(str)-i-1;j++)
 		{
 			if(str[j+1]<str[j])
 			{
 				t=str[j];
 				str[j]=str[j+1];
 				str[j+1]=t;
			 }
		 }
	}
        Delete(str );
 }
 void Delete(char * arr)
{
	int i,j;
	int k; 
	for(i=0;i<strlen(arr)-1;i++)
 	{
 		for(j=i+1;j<strlen(arr);j++)
 		{
 			if(arr[i]==arr[j])
 			{
                 for(k=i;k<strlen(arr);k++)
	             arr[k]=arr[k+1];
			}
		}
    }  
    puts(arr);
}

 
 

