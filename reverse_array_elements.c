
#include<stdio.h>

int main()
{
	int size;
	printf("Enter the size: ");
	scanf("%d", &size);

	int arr[size];
	printf("Enter array elements: ");

	for(int i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
	}

	int start = 0, end = size - 1;

	while(start < end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}

	for(int i = 0; i < size; i++)
	{
		printf("%d, ", arr[i]);
	}

	printf("\n");
	return 0;
}
