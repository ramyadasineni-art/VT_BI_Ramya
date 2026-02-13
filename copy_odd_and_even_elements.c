
#include<stdio.h>

int main()
{
	int size, even = 0, odd = 0;
	printf("Enter the size: ");
	scanf("%d", &size);

	int arr[size];
	printf("Enter array elements: ");
	for(int i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
	}
	
        
	int Even[size], Odd[size];
	for(int i = 0; i < size; i++)
	{
		if(arr[i]%2 == 0)
		{
			Even[even] = arr[i];
			even++;
		}
		else
		{
			Odd[odd] = arr[i];
			odd++;
		}
	}

	printf("Even array elements: ");
	
	for(int i = 0; i < even; i++)
	{
		printf("%d, ", Even[i]);
	}
	printf("\n");

	printf("Odd array elements: ");

	for(int i = 0; i < odd; i++)
        {
                printf("%d, ", Odd[i]);
        }


	printf("\n");


	return 0;
}

		




