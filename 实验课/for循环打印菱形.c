//��for ѭ����ӡ����
/*#include<stdio.h>
int main()
{
    int i,j;
    for(i = 1;i <= 3;i++)//��ӡ�߶�Ϊ3��������
    {
        for(j=i;j<=3;j++)//��ӡ�ϲ��ֿո�
        {
            printf(" ");
        }
        for(j = 1;j <= 2*i-1;j++)//��ӡ������ʵ��
        {
            printf("*");
        }
            printf("\n");
        }
    //=================================���²��ַֽ���
        for(i = 1;i <= 2;i++) //��ӡ�²��ָ߶�Ϊ2�ĵ�������
        {       
        for(j = 1;j <= (2+i)-1;j++) //��ӡ�²��ֿո�
        {
        printf(" ");
        }
        for(j = 1;j <= 5-(i*2);j++)//��ӡ��������ʵ��
        {
        printf("*");
        }
        printf("\n");
        }
 
        return 0;
        }*/
//�Զ�����������
#include<stdio.h>
int main()
{
	int h,l,i,j;
	printf("input......\n");
	scanf_s("%d",&h);
	for(i=1;i<=h;++i)
	{
		for(j=1;j<=h-i;j++)//����ո� 
		{
			printf(" ");
		}
		for(l=1;l<=2*i-1;l++)//���������� 
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=h-1;i>=1;--i)
	{
		for(j=h-i;j>=1;j--)//����ո� 
		{
			printf(" ");
		}
		for(l=2*i-1;l>=1;l--)//���������� 
		{
			printf("*");
		}
		printf("\n");
	}
 }

//�������� 
/*#include<stdio.h>
void main()
{
	int h,l,i,j;
	printf("input......\n");
	scanf("%d",&h);
	for(i=1;i<=h;++i)
	{
		for(j=1;j<=h-i;j++)//����ո� 
		{
			printf(" ");
		}
		for(l=1;l<=2*i-1;l++)//���������� 
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
		for(j=h-i;j>=1;j--)//����ո� 
		{
			printf(" ");
		}
		for(l=2*i-1;l>=1;l--)//���������� 
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

//ÿ������ݼ� ��ֱ����������� ���������A 
/* #include<stdio.h>
void main()
{
	int h,i,j,l;
	char ch='A';
	printf("input......\n");
	scanf("%d",&h);
	for(i=1;i<=h;++i)
	{
		for(j=1;j<=h-i;j++)//����ո� 
		{
			printf(" ");
		}
		ch='A'+i-1;
		for(l=1;l<=i;l++)//������
		{
			
			printf("%c",ch);
			ch--;
	    }
		for(ch='B';ch<='A'+i-1;ch++)//������ 
		
			printf("%c",ch);
		
	
		printf("\n");
	}
	for(i=h-1;i>=1;--i)
	{
		for(j=h-i;j>=1;j--)//����ո� 
		{
			printf(" ");
		}
		ch='A'+i-1;
		for(l=i;l>=1;l--)//������
		{
			
			printf("%c",ch);
			ch--;
	    }
		for(ch='A'+i-1;ch>='B';ch--)//������ 
		
			printf("%c",ch);
		
		printf("\n");
	}
}
  */
	
 //} 
 //��ͼ��Ϸ ���弸��ͼ���������ֽ���ѡ���������ͼ��
 // ��ӡ���Σ��Զ���ߺͿ�
  //��ӡԲ��
  //��ӡ����
  //��ӡ����... 
