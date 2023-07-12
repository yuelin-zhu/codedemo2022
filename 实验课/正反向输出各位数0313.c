/*2、输入一个整数（long），从高位开始逐位分割并输出（或反序输出）。例如：输入2018，逐位输出：2、0、1、8或8、1、0、2。
*/
#include<stdio.h>
void main()
{
	long int n;
	int i=0;
	int a[100];
	int t,z,f;
	
	printf("input......\n");
	scanf("%lld",&n);
	do
	{
		t=n%10;
		a[i]=t;
		i+=1;
		n=n/10;
	}while(n!=0);
	//反向输出
	printf("反向输出\n");
	for(z=0;z<=i-1;z++)
	{
		printf("%d ",a[z]);
	 } 
	 //正序输出 
	 printf("\n正向输出\n"); 
	 for(f=i-1;f>=0;f--)
	 {
	 	printf("%d ",a[f]);
	 }
}
		
