/*（1）编程实现：定义人结构体类型，人包括的信息（姓名、性别、年龄、身高、体重），
根据提示（如果输入’Y’,表示还有继续接受下一个人的信息输入，如果输入’N’,表示停止人的信息的输入），并输出当前人的信息。 
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
		printf("姓名："); 
		scanf("%s",man[i].name);
		printf("性别：");
		scanf("%s",man[i].sex);
		printf("年龄：");
		scanf("%d",&man[i].age);
		printf("身高(cm)：");
		scanf("%d",&man[i].height);
		printf("体重(kg)：");
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

/*（2）编程实现：要求输入某班10个学生的信息（包括学号、姓名、性别、成绩），要求按成绩由高到低输出该班学生信息。
分析：问题的分解：
1）定义学生信息的结构体类型；
2）定义结构体类型数组变量；
3）编写学生信息输入函数；
4）编写学生信息输出函数；
5）编写按照学生成绩排序函数；（要求排序算法为选择排序和冒泡排序两种）
编写主函数对子函数进行函数调用，实现功能。
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
	    printf("姓名：");
		scanf("%s",stu[i].name);
 		printf("学号："); 
		scanf("%s",stu[i].number);
		printf("性别：");
		scanf("%s",stu[i].sex);
		printf("年龄：");
		scanf("%d",&stu[i].age);
		printf("成绩：");
		scanf("%d",&stu[i].score);
	 }
 	sort(n);
 }
 void sort(int i)
 {
 	int k,j;
 	struct student temp;
 	//选择 
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


/*（3）编程实现：学生的信息如下面图所示：

要求：
1）先定义入学时间的结构体类型
2）再定义学生的结构体类型
3）通过键盘输入3个学生的信息，存放到数组中
4）并根据学生的成绩对学生的进行排名并输出
5）用函数实现
6）主函数调用各个函数*/
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
   	    printf("姓名：");
		scanf("%s",std[i].name);
 		printf("学号："); 
		scanf("%s",std[i].number);
		printf("性别：");
		scanf("%s",std[i].sex);
		printf("入学时间"); 
		printf("年：");
		scanf("%d",&t[i].year);
		printf("月：");
		scanf("%d",&t[i].month);
		printf("日：");
		scanf("%d",&t[i].day);
		printf("计算机组成原理 成绩：");
		scanf("%d",&std[i].text[1]);
		printf("英语 成绩：");
		scanf("%d",&std[i].text[2]);
		printf("数学 成绩：");
		scanf("%d",&std[i].text[3]);
		printf("音乐 成绩：");
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
	printf("第%d门课排名\n",k);
	for(i=0;i<3;i++)
	{
		printf("%s %d\n",std[i].name,std[i].text[k]);
	}

	}
	
	 

/*（4）编程实现：设计一个候选人的选票程序，假设有3个候选人，10个人对这3个候选人进行投票，
每个人输入要选择的候选人姓名，最后输出每个候选人的得票结果并选出最终的冠军。
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
	printf("投票开始！\n");
	    c[0].score=0;
		c[1].score=0;
		c[2].score=0;
	for(i=1;i<=10;i++)
	{
		printf("第%d票：",i); 
		
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
	printf("冠军是：%s",c[k].name);
 } */
