#include<stdio.h>
int main()
{
	int num,temp,arm=0,rem=0;
	printf("enter number:\n");
	scanf("%d",&num);
	temp=num;
	while(temp){
		rem=temp%10;
		arm=arm+(rem*rem*rem);
		temp/=10;
	}
	if(num==arm)
		printf("armstrong number\n");
	else
		printf("not armstrong\n");
}
