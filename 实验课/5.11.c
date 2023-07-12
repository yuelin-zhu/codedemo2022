#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
struct stu//class +功能函数 
{	
    long no;
	char name[20];
    int age;
	double score[5],sum,ave;//无法初始化 没有内存分配 
	
};
typedef struct stu ST; 
FILE *fp;
void main()
{
	ST st[20];
	char line[80] ;
	int n;
	fp=fopen("写入数据.txt","r+"); //. 成员运算符 
	fgets(line,35,fp);//fscanf读到空格
	strcat(line,"  总分");
	puts(line); 
	fclose(fp);
}
/*#include<stdio.h>
#include<math.h> 
struct d
{
	double dis;
	int x1,y1,x2,y2;//x,y 
}d1,d2;
////typedef struct d//结构体名 
{
	double dis;
	int x1,y1,x2,y2;//x,y
}point;//结构体类型名 
 point p1,p2;//全局变量
 point *p;
 p=&p1//// 
void  main()
{
	struct d d1;
	scanf("%d %d",&d1.x1,&d1.y1);/&(d1->x1)指向运算fu  
	scanf("%d %d",&d1.x2,&d1.y2);
	d1.dis=sqrt((d1.x1-d1.x2)*(d1.x1-d1.x2)+(d1.y1-d1.y2)*(d1.y1-d1.y2));
	printf("%f",d1.dis);
 } */
 
