
#include<stdio.h>

int main()
{
	int size;
	printf("Enter your size: ");
	scanf("%d", &size);
	if(size < 2)
	{
		printf("ERROR: invalid input\n");
		return 0;
	}

	int arr[size];
	printf("Enter your elements: ");
	for(int i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
	}

	int large = arr[0];
	int small = arr[0];

	for(int j = 0; j < size; j++)

	{
		if(arr[j] > large)
			large = arr[j];
		if(arr[j] < small)
			small = arr[j];


	}
	int second_large = small;


	for(int i = 0 ; i < size; i++)
	{
		if(arr[i] < large && arr[i] > second_large)
		{
			second_large = arr[i];
		}
		
	}
	printf("Second largest element in an array: %d\n", second_large);
	return 0;
}
