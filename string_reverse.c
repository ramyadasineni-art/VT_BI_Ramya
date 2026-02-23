#include<stdio.h>
void string_reverse(char*); 

int main()
{

	char str[100];
	printf("Enter a string to reverse");
	scanf("%[^\n]",str);
	string_reverse(str);
	printf("Reversed string is %s",str);
	return 0;

}

void string_reverse(char* str)
{
   int len=0,i=0;
   while(str[i])
   {
	   i++;
	   len++;
   }

   int start=0,end=len-1;
   while(start<end)
   {
	   char temp=str[start];
	   str[start]=str[end];
	   str[end]=temp;
	   start ++;
	   end--;
	 }
}


