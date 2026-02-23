 #include<stdio.h>

int main()
{
	int num;
	printf("Enter a number");
	scanf("%d",&num);
	int a=0,b=1;
	int next=0;
if(num>=0)
{
	while(next<=num)
	{
		printf("%d",next);
		printf(",");
		a=b;
		b=next;
		next=a+b;
	}
}
else
{
	printf("Enter only postive number");
}


	return 0;
}

	
