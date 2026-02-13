
#include<stdio.h>

int main()
{
	int size;
	printf("Enter the size: ");
	scanf("%d", &size);

	int arr[size];
	printf("Enter all elements: ");
	for(int i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
	}

	int to_find, found = 0;
	printf("Enter the element to found: ");
	scanf("%d", &to_find);

	for(int i = 0; i < size; i++)
	{
		if(arr[i] == to_find)
		{
			found = 1;
			break;
		}
		
	}
	if(found == 1)
	{
		printf("Element found\n");
	}
	else
	{
		printf("Element not found\n");
	}

	return 0;
}
