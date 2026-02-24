/*
 * required output
 * 1³ + 5³ + 3^3
 * = 1 + 125 + 27
 * = 153
*/
#include<stdio.h>

int main()
{
	int num, rem;


	printf("Enter your number: ");
	scanf("%d", &num);


	int temp = num;
	int ndigit = 0;
	while(num != 0)
	{
		num = num/10;
		ndigit++;
	}
	int sum = 0;
	int temp2= temp;
	while(temp != 0)
	{
		int pow = 1;
		rem = temp % 10;
		for(int i =1; i<= ndigit; i++)
		{
			pow = pow *rem;
			
		}
		sum = sum + pow;
			
		temp /= 10;
	}
	//printf("%d %d", temp2, sum);

	if(sum == temp2)
		printf("It is arm strong number\n");
	else
		printf("It is not an arm strong number\n");
	return 0;
}
		
	
