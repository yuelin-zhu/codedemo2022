/*��1�����ʵ�֣���ָ�뷨ʵ���������е����ֵ�������Ԫ�ظ���Ϊ10����
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

/*��2�����ʵ�֣���ָ�뷨ͳ���ַ����д�д��ĸ��Сд��ĸ���ո����ֵĸ�����*/
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
	printf("��д��ĸ=%d Сд��ĸ=%d �ո���=%d ����=%d",x1, x2,x3,x4); 
}*/


/*��3�����ʵ�֣���ð�ݷ��Լ��������10�������ɴ�С���������Ҫ����ָ��ʵ�֡�
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

/*��4�����ʵ�֣�����һ���ַ����������ַ����дӵ�m���ַ���ʼ��ȫ���ַ����Ƴ���һ���ַ���
m���û����루��ֵС�ڴ�������Ҫ���дһ������mcopy(char *s,char *t,int m)����ɡ� 
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
	printf("ѡ����ʼ�ַ���\n");
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

/*��5�����ʵ�֣�����жϼ���������ַ����Ƿ�Ϊ���ġ���ν��"���Ĵ�"������ǰ����Ӻ���ǰ����һ���ģ�
��Ĭ�ϳ�����0��1���ַ�����"���Ĵ�"�������Ƿ���1�����򷵻�0. ����ú���ʵ�֣����ʵ�֣�����ָ��ʵ�֣� 
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
		printf("�ǻ���"); 
	}
	if(c==1)
	{
		printf("�ǻ���") ;
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
/*��6�����ʵ�֣���дһ�������������ڣ���������ڵ�Ӣ��������ָ�����鴦��
#include<stdio.h>
#include<string.h>
void main()
{
	char * a[]={"һ","��","��","��","��","��","��"};
	char * p[]={"MON","TUS","THU","WED","FRI","SAT","SUN"};
    char input[7];
	int i;
	printf("please input...\n");
    gets(input);
	for(i=0;i<7;i++)
	{
		  if (!strcmp(input, a[i]))
        {		 		     	  
            printf("����������%s����%s��", input, p[i]);
            exit(0);
        }
	} 
	 printf("�������");
 } */ 


/*��7�����ʵ�֣��Ӽ�������100������������np�У����з���ͬ������np��ֻ�����һ�γ��ֵ���������Ķ����޳�������ָ��ʵ�֣�*/
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
//��ͷ��β 
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

/*��8�����ʵ�֣����ַ�����str1���±�Ϊ˫�ŵ�Ԫ��ֵ������һ���ַ�����str2�������str1��str2�����ݡ�����ָ��ʵ�֣�
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

/*��9�����ʵ�֣�����һ���ַ������������ַ����е�n���ַ���������ַ���n<�����ַ����ĳ��ȣ� 
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

/*��10�����ʵ�֣�����һ���ַ����������е��ַ���������������磺friday�����yadirf��
Ҫ��
 	���ַ����鷽��ʵ��
 	��string����ʵ��
 	��ָ��ʵ��
���Ƚ��ĸ����������
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
//ָ�� 
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
