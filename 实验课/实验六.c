/*1�� ������ˣ�ֻ���ڵ�һ�������������column���͵ڶ��������������row����ͬʱ�������塣
��AΪm��p�ľ���BΪp��n�ľ�����ô��m��n�ľ���CΪ����A��B�ĳ˻�������
C=A��B
�����о���C�еĵ�i�е�j��Ԫ�ؿ��Ա�ʾΪ:
 
   ����ʵ�־���ĳ˷����㡣*/
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
   
/*2�����ö�ά���飬��������й���ͼ�Ρ�
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
	//��ʼ��
	for(i=0;i<5;i++) //h
   {
   	int k=i+49;
   for(j=n-1;j>=0;j--)//l
	  {
	  	a[i][j]=' ';
	  }
	 
	for(j=9-n;j<9;j++)//l���У��������ʼ�� 
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
	//��� 
	for(i=0;i<5;i++)
	{
	for(j=0;j<9;j++)
	  {
	  	printf("%c",a[i][j]);
	  }	
	printf("\n");	
	}
}

