#include<stdio.h>

int main()
{
	int prev = 0, cur = 1, nxt, num;
	
	printf("Enter the number: ");
	scanf("%d", &num);

	printf("Fibonacci series: ");

	for(int i = 1; i <= num; i++)
	{		
		printf("%d ", prev);
		nxt = prev + cur;
		prev = cur;
		cur = nxt;
	}
	return 0;
}
