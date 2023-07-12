/*将偶数升序，奇数降序 
#include <stdio.h>
int main()
{
	int num[10],temp=0;
	int i,k,j,m;
	for(i=0;i<10;i++){
	scanf("%d",&num[i]);
	}
	int a[10],b[10];
	for(i=0;i<10;i++){
		if(num[i]%2!=0){
			a[i]=num[i];
			for(k=0;k<9;++k){
				for(j=1+k;j<10;j++){
					if(a[j],a[k]){
						temp=a[j];
						a[j]=a[k];
						a[k]=temp;
						
					}
		
				}
			}
			for(m=0;m<10;++m){
				printf("%d",a[m]);
			}
		}
		else if(num[i]%2==0){
			b[i]=num[i];
			for(k=0;k<9;++k){
				for(j=1+k;j<10;j++){
					if(a[j],a[k]){
						temp=a[j];
						a[j]=a[k];
						a[k]=temp;
						
					}
		
				}
			
			
		}
		for(m=0;m<10;++m){
				printf("%d",a[m]);
			}
	}
}
	getch();
return 0;	
}*/
#include <stdio.h>
int main()
{
	int num[10];
	int i,k,j;
	int a[10],b[10];
	
	
	
	for(i=0;i<10;i++)
	{
	scanf("%d",&num[i]);
	
		if(num[i]%2==0)//为偶数 
		{
			a[i]=num[i];//放进数组A 
			for(k=0;k<9;k++)
			{
				for(j=1+k;j<10;j++)
				{
					if(a[k]>a[j])//k在j前 
					{
						a[j]=a[k]+a[j]-a[j];
						a[k]=a[k]+a[j]-a[k];//选择排序 	
					}
		
				}
			}
				printf("%d\n",a[i]);//输出排序后的数组 
		}
		 if(num[i]%2==1)//为奇数 
		{
			b[i]=num[i];
			for(k=0;k<9;k++)
			{
				for(j=1+k;j<10;j++)
				{
					if(b[k]<b[j])
					{
						b[j]=b[k]+b[j]-b[j];
						b[k]=b[k]+b[j]-b[k];
					}
				}
			}	
		}
			printf("%d",b[i]);//输出排序后的数组 	
	}
	return 0;
}

