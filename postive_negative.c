#include<stdio.h>
int main()
{
	int num;
	printf("enter the number\n");
	scanf("%d",&num);
	if(num>0)
	{
		printf("positive\n");
		return 0;
	}
	else
	{
		printf("negative\n");
		return 0;
	}
}
