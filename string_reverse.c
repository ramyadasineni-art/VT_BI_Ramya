#include<stdio.h>
#include<string.h>
char* str_reverse(char *str)
{
	char *left,*right,temp;
	int len=strlen(str)-1;
	left=str;
	right=str+len;
	while(left<right)
	{
		temp=*left;
		*left=*right;
		*right=temp;
		left++,right--;
	}
	return str;
}

int main()
{
	char str[10];
	printf("enetr the string\n");
	scanf("%s",str);
	str_reverse(str);
	printf("reversed string=%s",str);
}
