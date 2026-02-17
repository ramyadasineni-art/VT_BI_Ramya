#include<stdio.h>
int fact(int num)
{
	if(num==1)
		return 1;
	else
		return (num*(fact(num-1)));
}
int main()
{
	int num,prod=1;
	printf("enter the num\n");
	scanf("%d",&num);
	/*for(int i=1;i<=num;i++)
	{
		prod=prod*i;
	}
	printf("fact=%d\n",prod);*/
	printf("fact=%d\n",fact(num));
}
