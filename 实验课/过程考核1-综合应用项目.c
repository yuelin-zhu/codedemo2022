#include<stdio.h>
#include<string.h>
int main()
{
	char s1[6],s2[6];
	int n;
	scanf("%s",s1);//������ȷ���� 
	printf("���������룺");
	scanf("%s",s2);
	
	if(strcmp(s1,s2)!=0)
	{
	    printf("�������\n"); 
		int q=3;
		do{
		 
		scanf("%s",s2);
		if(strcmp(s1,s2)!=0)
		{
			printf("�������\n");
		    q--;	
		}
		else goto choose;
		
		}while(q>1);
		goto fin;
	}
	else goto choose;
choose:
	printf("���������ѡ�\n");
	while(1)
	{
		scanf("%d",&n);
		switch(n)
		{
		   case 1:
		   printf("��ѯ���\n")	;
		   break;
		    case 2:
		   printf(" ��ȡ \n")	;
		   break;
		    case 3:
		   printf(" ��� \n")	;
		   break;
		    case 4:
		   printf(" ת�� \n")	;
		   break;
		    case 5:
		   printf("��ӡ�嵥\n")	;
		   break;
		} 
		if(n==6)
		{
		 printf(" �˿� \n");	
		 printf("��������");
	     return 0;
		}
	}
	

fin:	
      printf("����������Σ��޷�����!\n");
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


