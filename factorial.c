#include<stdio.h>
int main()
{
	int num,prod=1;
	printf("enter the num\n");
	scanf("%d",&num);
	for(int i=1;i<=num;i++)
	{
		prod=prod*i;
	}
	printf("fact=%d\n",prod);
}
