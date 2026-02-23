#include<stdio.h>

int main()
{
	int size;
	printf("Enter size of an array");
	scanf("%d",&size);
	int arr[size];
	printf("Enter the array elements");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}

	int first_lar=arr[0];
	int sec_lar=arr[1];

	for(int i=0;i<size;i++)
	{
		if(first_lar<arr[i])
		{
			first_lar=arr[i];

		}
		else if(sec_lar>arr[i])
		{
			sec_lar=arr[i];

		}
	}

	for(int i=0;i<size;i++)
	{
		if(arr[i]<first_lar && arr[i]>sec_lar)
			sec_lar=arr[i];
	}
	printf("Second largest in an array is %d",sec_lar);

	return 0;
}
