#include<stdio.h>

int main()
{
	int num;
	printf("Enter a number to check armstrong or not");
	scanf("%d",&num);
if(num<0)
{
	printf("Enter only +ve number");
}
	int temp=num;
	int result=1,rem=0,sum=0,count=0;

	while(num!=0)
	{
		num=num/10;
		count++;
	}
	num=temp;


	while(num!=0)
	{
		rem=num%10;
		for(int i=0;i<count;i++)
		{
			result*=rem;
		}
		sum=sum+result;
		num=num/10;
		result=1;

	}


	if(temp==sum)
	{
		printf("yes it is a armstrong");
	}
	else
	{
		printf("No a armstrong");
	}



	return 0;
}




