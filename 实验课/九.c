/*��1�����ʵ�֣������˽ṹ�����ͣ��˰�������Ϣ���������Ա����䡢��ߡ����أ���
������ʾ��������롯Y��,��ʾ���м���������һ���˵���Ϣ���룬������롯N��,��ʾֹͣ�˵���Ϣ�����룩���������ǰ�˵���Ϣ�� 
#include<stdio.h>
#define N 40
struct person
{
	 char name[N];
	 char sex[N];
	 int age;
	 int height;
	 int weight;
	 
};
void main()
{
	struct person man[N] ;
	int i;
	while(1)
	{
	    char ch;
		i=0;
		printf("please input...\n");
		printf("������"); 
		scanf("%s",man[i].name);
		printf("�Ա�");
		scanf("%s",man[i].sex);
		printf("���䣺");
		scanf("%d",&man[i].age);
		printf("���(cm)��");
		scanf("%d",&man[i].height);
		printf("����(kg)��");
		scanf("%d",&man[i].weight);
		printf("please choose...\n");
		rewind(stdin);
		scanf("%c",&ch);
		if(ch=='Y')
		{
			i++;
		}
		if(ch=='N')
		{
			printf("%s %s %d %d %d ",man[i].name,man[i].sex,man[i].age,man[i].height,man[i].weight);
			break;
		}
	}
 } */

/*��2�����ʵ�֣�Ҫ������ĳ��10��ѧ������Ϣ������ѧ�š��������Ա𡢳ɼ�����Ҫ�󰴳ɼ��ɸߵ�������ð�ѧ����Ϣ��
����������ķֽ⣺
1������ѧ����Ϣ�Ľṹ�����ͣ�
2������ṹ���������������
3����дѧ����Ϣ���뺯����
4����дѧ����Ϣ���������
5����д����ѧ���ɼ�����������Ҫ�������㷨Ϊѡ�������ð���������֣�
��д���������Ӻ������к������ã�ʵ�ֹ��ܡ�
#include<stdio.h>
#define N 40
struct student 
{
	 char name[N];
	 char number[N];
	 int age;
	 char sex[N];
	 int score;
	 
}stu[N];
void sort(int i);
void input(int n);
void output(int k);
void main()
{
	input(10);	
 } 
 void input(int n)
 {
 	int i;
	printf("please input...\n");
 	for(i=0;i<n;i++)
 	{
	    printf("������");
		scanf("%s",stu[i].name);
 		printf("ѧ�ţ�"); 
		scanf("%s",stu[i].number);
		printf("�Ա�");
		scanf("%s",stu[i].sex);
		printf("���䣺");
		scanf("%d",&stu[i].age);
		printf("�ɼ���");
		scanf("%d",&stu[i].score);
	 }
 	sort(n);
 }
 void sort(int i)
 {
 	int k,j;
 	struct student temp;
 	//ѡ�� 
 	for(k=0;k<i-1;k++)
 	 for(j=k+1;j<i;j++)
 	 {
 	 	if(stu[j].score>stu[k].score)
		{
			temp=stu[k];
			stu[k]=stu[j];
			stu[j]=temp;
	    }
	//maopao
 	}
	 output(i);
}
 void output(int k)
 {
 	int i=0; 
 	for(i=0;i<k;i++)   
 	{
 		printf("%s %s %s %d %d \n",stu[i].number,stu[i].name,stu[i].sex,stu[i].age,stu[i].score);
	}
 }*/


/*��3�����ʵ�֣�ѧ������Ϣ������ͼ��ʾ��

Ҫ��
1���ȶ�����ѧʱ��Ľṹ������
2���ٶ���ѧ���Ľṹ������
3��ͨ����������3��ѧ������Ϣ����ŵ�������
4��������ѧ���ĳɼ���ѧ���Ľ������������
5���ú���ʵ��
6�����������ø�������*/
#include<stdio.h>
#include<string.h>
#define N 40
struct student 
{
	 char name[N];
	 char number[N];
	 char sex[N]; 
	 int text[5];
} std[3];
struct time
{
	 int year;
	 int month;
	 int day;
}t[3];

void sort(int n,int k);
void main()
{
   int i;
   for(i=0;i<3;i++)
   {
   	    printf("������");
		scanf("%s",std[i].name);
 		printf("ѧ�ţ�"); 
		scanf("%s",std[i].number);
		printf("�Ա�");
		scanf("%s",std[i].sex);
		printf("��ѧʱ��"); 
		printf("�꣺");
		scanf("%d",&t[i].year);
		printf("�£�");
		scanf("%d",&t[i].month);
		printf("�գ�");
		scanf("%d",&t[i].day);
		printf("��������ԭ�� �ɼ���");
		scanf("%d",&std[i].text[1]);
		printf("Ӣ�� �ɼ���");
		scanf("%d",&std[i].text[2]);
		printf("��ѧ �ɼ���");
		scanf("%d",&std[i].text[3]);
		printf("���� �ɼ���");
		scanf("%d",&std[i].text[4]);
	   }
	   sort(3,1);
	   sort(3,2);
	   sort(3,3);
	   sort(3,4);	
 } 
void sort(int n,int k)
{
	int i;
	int j;
struct student temp;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(std[j].text[k]>std[i].text[k])
			{
			temp=std[i];
			std[i]=std[j];
			std[j]=temp;
			}		
		}
		
	}
	printf("��%d�ſ�����\n",k);
	for(i=0;i<3;i++)
	{
		printf("%s %d\n",std[i].name,std[i].text[k]);
	}

	}
	
	 

/*��4�����ʵ�֣����һ����ѡ�˵�ѡƱ���򣬼�����3����ѡ�ˣ�10���˶���3����ѡ�˽���ͶƱ��
ÿ��������Ҫѡ��ĺ�ѡ��������������ÿ����ѡ�˵ĵ�Ʊ�����ѡ�����յĹھ���
#include<stdio.h>
#include<string.h>
#define N 40
struct candidate 
{
	 char name[N];
	 int score;
	 
};
void main()
{   
struct candidate c[3];
	int i=0;
	for(i=0;i<3;i++)
	{
		scanf("%s",c[i].name); 
	 } 
	char ch[N];
	printf("ͶƱ��ʼ��\n");
	    c[0].score=0;
		c[1].score=0;
		c[2].score=0;
	for(i=1;i<=10;i++)
	{
		printf("��%dƱ��",i); 
		
		scanf("%s",ch);
		if(strcmp(ch,c[0].name)==0)
		{
			c[0].score+=1;
		}
		 if(strcmp(ch,c[1].name)==0)
		{
			c[1].score+=1;
		}
		if(strcmp(ch,c[2].name)==0)
		{
			c[2].score+=1;
		}
	}
	int max=c[0].score;
	int k; 
	for(i=1;i<3;i++)
	{
		if(c[i].score>max)
		{
			max=c[i].score;
			k=i;
		 } 
		
	 } 
	printf("%d %d %d\n",c[0].score,c[1].score,c[2].score);
	printf("�ھ��ǣ�%s",c[k].name);
 } */
