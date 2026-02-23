#include<stdio.h>
int main()
{
	int n,a=0,b=1,sum=0;
	printf("enter the number of fibnoeci series\n");
	scanf("%d",&n);
	printf("%d ",a);
	printf("%d ",b);
	for(int i=0;i<n-2;i++)
	{
		sum=a+b;
		a=b;
		b=sum;
		printf("%d ",sum);

	}
}
