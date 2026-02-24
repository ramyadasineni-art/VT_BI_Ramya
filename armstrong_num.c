#include<stdio.h>
int main()
{
	int num,rem=0,temp,cnt=0,temp_cnt=0,pow=1,sum=0;
	printf("enter number:");
	scanf("%d",&num);
	temp=num;
	while(temp)
	{
		cnt++;
		temp=temp/10;
	}
	temp=num;
	while(temp)
	{
		rem=temp%10;
		temp_cnt=cnt;
		pow=1;
		while(temp_cnt)
		{
			pow=pow*rem;
			temp_cnt--;
		}
		temp=temp/10;
		sum=sum+pow;
	}
	if(sum==num)
		printf("armstrong\n");
	else
		printf("not\n");
}
		
