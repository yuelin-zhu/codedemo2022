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
	//�˵� 
	int score1=0,score2=0;
    system("color 02"); 
	printf("welcom to the arithmetic game\n");
	printf("ps:��ͨ���س���������Ϸ����");
	getchar();
	printf("�Ƿ�������˵�..."); 
	getchar();
	printf("------------------------�˵�ģʽ-------------------------");
	getchar();	
	printf("<<<<<��Ϸ����>>>>>\n  ��ѡ��ӡ������˺ͳ������������һ�����������ս,ע��ÿ��ֻ��5�δ������!!!\n") ;
	printf("  ��ս��Ϊһλ��������������λ�����߼��������ﵽһ������ֵ�󷽿ɽ���߼�����");
	getchar();
	printf("<<<<<ģʽѡ��>>>>>\n  ");
	printf("A:������ģʽ��\t\tB:���߼�ģʽ��");
	char ch;
	int flag=1;
	getchar();	
	printf("��ѡ��...\n");
	while(flag)
	{
	
	scanf("%c",&ch);
	if(ch=='A')
	{
		printf("��ӭ�����������\n");
		flag=0; 
		junior();
	}
	if(ch=='B')
	{
		if(score1==100)
		{
			printf("��ӭ����߼�����\n"); 
			flag=0;
			senior();
		}
	    else printf("δ�ﵽ������׼��������ѡ��\n");
	} 
	}
	system("color 04"); 
	
//������ 
}
int junior()
{
	int score1=0;
	char ch;
	int flag=1;
	while(flag!=50) 
	{
	printf("��ѡ�����㷽ʽ:");
	printf("A:���ӡ� B:������ C:���ˡ� D:������\n");
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
		printf("���سɹ�����\n");
		getchar();	
		printf("������ѡ�����߼���(N)���߽�����Ϸ(E)\n");
		scanf("%c",&ch);
		if(ch=='N')
		{
			printf("��ӭ����߼�����\n"); 
			senior();
	    }
		if(ch=='E')
		{
		return 0;	
		}	 
	}
	else 
	{
		printf("����ʧ�ܣ������¿�ʼ��Ϸ����\n");
		if(score1<60)
		{
			printf("�ú�ѧϰ���������ϣ���\n");
		} 
		getchar();	
	    printf("�Ƿ�������ս���ǣ�A) ��B��\n");
	    scanf("%c",&ch);
		if(ch=='A')
		{
			printf("��ӭ�����������\n"); 
			junior();
	    }
		if(ch=='B')
		{
		return 0;	
		}	 
	}
	
}
//�ĸ߼��� 
int senior()
{
	int score2=0;
	char ch;
	int flag=1;
	while(flag!=50) 
	{
	printf("��ѡ�����㷽ʽ:");
	printf("A:���ӡ� B:������ C:���ˡ� D:������\n");
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
		printf("���سɹ�����\n");
		getchar();	
		printf("CONGRATULATIONS!!!\n");
		getchar();	
		printf("���Ƿ���鿴�ɼ����ǣ�A����B��\n");
		scanf("%c",&ch);//��ʷ���� 
		if(ch=='A')
		{
			printf("��ӭ����ɼ���ѯ��\n"); 
			getchar();
			printf("%d",score2); 
	    }
		if(ch=='B')
		{
		printf("GAME OVER!��л���Ĳ��롣");
		return 0;	
		}	 
	}
	else 
	{
		printf("����ʧ�ܣ������¿�ʼ��Ϸ����\n");
		getchar();	
	    printf("�Ƿ�������ս���ǣ�A) ��B��\n");
		scanf("%c",&ch);
		if(ch=='A')
		{
			printf("��ӭ����߼�����\n"); 
			senior();
	    }
		if(ch=='B')
		{
		return 0;	
		}	 
	}
	
}
//�� 
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
//�� 
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
//�� 
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
//�� 
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

