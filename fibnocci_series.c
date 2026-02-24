
#include<stdio.h>

int main()
{
	int first = 0, second = 1, next;
	int range, i = 1;

	printf("Enter your range: ");
	scanf("%d", &range);
	printf("%d, %d, ", first, second);

	while(i < range - 1)
	{
		next = first + second;
		printf("%d, ", next);
		first = second;
		second = next;
		i++;
	}
	printf("\n");


	return 0;
}
