#include<stdio.h>
int main()
{
	unsigned int arr[10],i=0,max=0,max1=0;
	printf("enter numbers\n:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	for(i=0;i<10;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	max1=0;
	for(i=0;i<10;i++)
	{
		if(arr[i]<max && arr[i]>max1)
		{
			max1=arr[i];
		}
	}
	printf("sec largest:%d\n",max1);
}


