
#include<stdio.h>
int main()
{
	int size;
	printf("Enter the size: ");
	scanf("%d", &size);

	int arr[size];
	for(int i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
	}

	int sum = 0;
	for(int i = 0; i < size; i++)
	{
		sum = sum + arr[i];
	}
	printf("SUM : %d\n", sum);

	float avg =(float) sum/size;

	printf("Avg : %.2f\n", avg);

	return 0;
}
