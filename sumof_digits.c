#include<stdio.h>
int main()
{
	int num,digit,sum=0,prod=1;
	printf("enter the number\n");
	scanf("%d",&num);
        while(num>0)
	{
		digit=num%10;
		sum=sum+digit;
		prod=prod*digit;
		num/=10;

	}
	printf("sum=%d",sum);
	printf("prod=%d",prod);
}
