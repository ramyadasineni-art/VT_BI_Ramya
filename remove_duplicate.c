
#include<stdio.h>

int main()
{
	int size;
	printf("Enter the size: ");
	scanf("%d", &size);

	int arr1[size];
	printf("Enter the elements: ");
	for(int i = 0; i < size; i++)
	{
		scanf("%d", &arr1[i]);
	}

	int arr2[size];

	for(int i = 0; i < size; i++)
	{
		for(int j = i+1; j < size; j++)
		{
			
			if(arr1[i] == arr1[j])
			{
				for(int k = j; k < size; k++)
				{
					arr1[k] = arr1[k+1];
				}
				size--;
				j--;
			}
		}
	}

	printf("Unique array elements: ");
	for(int i = 0; i < size; i++)
	{
		arr2[i] = arr1[i];
		printf("%d ", arr2[i]);
	}
	return 0;
}

