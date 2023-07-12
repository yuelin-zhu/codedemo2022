/*1、 矩阵相乘，只有在第一个矩阵的列数（column）和第二个矩阵的行数（row）相同时才有意义。
设A为m×p的矩阵，B为p×n的矩阵，那么称m×n的矩阵C为矩阵A与B的乘积，记作
C=A×B
，其中矩阵C中的第i行第j列元素可以表示为:
 
   请编程实现矩阵的乘法运算。*/
/*#include<stdio.h>
void main()
{
	int m,p,n;
	printf("please input...\n");
	scanf("%d %d %d",&m,&p,&n);
	int a[m][p],b[p][n],c[m][n];
    printf("array1\n");
	int i,j,k,sum=0;
	for(i=0;i<m;i++)
	  for(j=0;j<p;j++)
	  {
	  scanf("%d",&a[i][j]);
	  }
	 printf("array2\n"); 
	for(i=0;i<p;i++)
	  for(j=0;j<n;j++)
	  {
	  scanf("%d",&b[i][j]);
	  }
	  
    for(i=0;i<m;i++)//a mh
    {
    	for(j=0;j<n;j++)//b nlie
		{
			for(k=0;k<p;k++)//b ph
			{
				sum+=a[i][k]*b[k][j];
			}
		c[i][j]=sum;
		sum=0;
	    }
	}
	for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
	  {
	  	printf("%d ",c[i][j]);
	  }	
	printf("\n");	
	}
}*/
   
/*2、运用二维数组，输出下列有规则图形。
                      1                  
                   1  2  1
                1  2  3  2  1
             1  2  3  4  3  2  1
          1  2  3  4  5  4  3  2  1*/
          
#include<stdio.h>
void main()
{
	int a[5][9];
	int i,j,n=4,m=4;
	//初始化
	for(i=0;i<5;i++) //h
   {
   	int k=i+49;
   for(j=n-1;j>=0;j--)//l
	  {
	  	a[i][j]=' ';
	  }
	 
	for(j=9-n;j<9;j++)//l必有，将数组初始化 
	  {
	  	a[i][j]=' ';
	  }
    for(j=4;j>=n;j--)
    {
     a[i][j]=k;
     k--;
	}
	n--;
	if(i!=0)
	{
		int f=48+i;
		for(j=5;j<=m+1;j++)
		{
			a[i][j]=f;
           f--;
		}
	m++;
	}
    
	}
	//输出 
	for(i=0;i<5;i++)
	{
	for(j=0;j<9;j++)
	  {
	  	printf("%c",a[i][j]);
	  }	
	printf("\n");	
	}
}

