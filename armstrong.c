#include<stdio.h>
#include<math.h>

int main()
{
	int val, org, dig = 0, rem, result = 0;
	printf("Enter the number: ");
	scanf("%d", &val);

	org = val;
	while(org != 0)
	{
		org /= 10;
		dig++;
	}	

	org = val;
	
	while(org != 0)
	{
		rem = org % 10;
		result += pow(rem, dig);
		org /= 10;
	}

	if(result == val)
	{
		printf("The %d is armstrong number.\n", val);
	}
	else
	{
		printf("The %d is not an armstrong number.\n", val);
	}
}
