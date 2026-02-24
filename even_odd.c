
#include<stdio.h>
int main()
{
	int size, c1 = 0, c2 = 0;
	printf("Enter the size : ");
	scanf("%d", &size);

	int arr[size];
	printf("enter array elements : ");
	for(int i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
	}

	for(int i = 0; i < size; i++)
	{
		if(arr[i]%2 == 0)
		{
			c1++;
		}
		else
		{
			c2++;
		}

	}
	printf("Event count : %d\n", c1);
	printf("Odd count : %d\n", c2);
	return 0;
}
