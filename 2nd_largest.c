#include<stdio.h>

int second_largest(int *arr,int size);


int main()
{
	
	int size;
	printf("Enter the size of the array:");
	scanf("%d ", &size);
	int arr[size];
	
	for(int i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
	}

	printf("The 2nd Largest element is : %d \n",second_largest(arr, size));

	
}

int second_largest(int *arr, int size)
{
	int temp = 0;
	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < size; j++)
		{
			if(arr[j] < arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;		
			}	
		}
	
	}
	return arr[1];
}
