/*2������һ��������long�����Ӹ�λ��ʼ��λ�ָ�������������������磺����2018����λ�����2��0��1��8��8��1��0��2��
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
	//�������
	printf("�������\n");
	for(z=0;z<=i-1;z++)
	{
		printf("%d ",a[z]);
	 } 
	 //������� 
	 printf("\n�������\n"); 
	 for(f=i-1;f>=0;f--)
	 {
	 	printf("%d ",a[f]);
	 }
}
		
