//1����д�Ӻ���strcmp(char *,char *)��ʵ�ֿ⺯��strcmp(char *,char *)�Ĺ��ܣ����Ƚ������ַ����Ĵ�С��
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

//2����д�Ӻ���strcat(char *,char *)��ʵ�ֿ⺯��strcat(char *,char *)�Ĺ��ܣ������������ַ�����
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

//3����д�Ӻ���strcpy(char *,char *)��ʵ�ֿ⺯��strcpy(char *,char *)�Ĺ��ܣ����ַ����ĸ��ơ�
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
//4����д�Ӻ���strlen(char *)��ʵ�ֿ⺯��strlen(char *)�Ĺ��ܣ������ַ����ĳ��ȡ�
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
/*5���Ӽ��̽���һ���ַ����������ַ�˳���С�����������ɾ���ظ��ַ������õ����´������
 ��Ӽ������������Ϊ"agehiagehp"��ִ�������֮���Ϊ��"aeghip"��
 Ҫ�������ɾ�����������Ӻ���ʵ�֡�*/
#include <stdio.h>
#include <string.h>
#define N 50
void sort(char * str);
void Delete(char * arr );//�ҵ��ظ��ַ�λ�ã�ɾ����Ųλ�� 
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
 	//ð������ 
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

 
 

