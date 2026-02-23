#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],*p,*q,temp;
	printf("enter string:\n");
	gets(str);
	p=str;
	q=str+(strlen(str)-1);
	for( ;p<q;p++,q--)
	{
		if(*p!=*q)
		{
			temp=*p;
			*p=*q;
			*q=temp;
		}
	}
	printf("rev str is:%s\n",str);
}


