#include<stdio.h>
int main()
{
	int n;
	printf("enter the no of  elements\n");
	scanf("%d",&n);
	int arr[n],high=0,sec_high=0;
	printf("enter the n no of array elements\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
      for(int i=0;i<n;i++)
      { 
	      if(arr[i] > high)
	      {
		      sec_high = high;
                      high = arr[i]; 
	      }
	      else if(arr[i] > sec_high && arr[i] != high) 
	      {
		      sec_high = arr[i]; 
	      }
        }

	printf("high=%d\n",high);
	printf("sec_high=%d\n",sec_high);
}

