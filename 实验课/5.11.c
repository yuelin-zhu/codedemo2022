#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
struct stu//class +���ܺ��� 
{	
    long no;
	char name[20];
    int age;
	double score[5],sum,ave;//�޷���ʼ�� û���ڴ���� 
	
};
typedef struct stu ST; 
FILE *fp;
void main()
{
	ST st[20];
	char line[80] ;
	int n;
	fp=fopen("д������.txt","r+"); //. ��Ա����� 
	fgets(line,35,fp);//fscanf�����ո�
	strcat(line,"  �ܷ�");
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
////typedef struct d//�ṹ���� 
{
	double dis;
	int x1,y1,x2,y2;//x,y
}point;//�ṹ�������� 
 point p1,p2;//ȫ�ֱ���
 point *p;
 p=&p1//// 
void  main()
{
	struct d d1;
	scanf("%d %d",&d1.x1,&d1.y1);/&(d1->x1)ָ������fu  
	scanf("%d %d",&d1.x2,&d1.y2);
	d1.dis=sqrt((d1.x1-d1.x2)*(d1.x1-d1.x2)+(d1.y1-d1.y2)*(d1.y1-d1.y2));
	printf("%f",d1.dis);
 } */
 
