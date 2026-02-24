#include<stdio.h>
#include<stdlib.h>

char* reverse_str(char *str);

int main()
{
	printf("Enter the string here: ");
	
	char *str =(char *)malloc(50 * sizeof(char));
	if(str == NULL)
	{
		printf("Memory allocation failed");
		return 1;
	}	
	scanf("%[^\n]", str);

	printf(" REVERSED: %s\n" ,reverse_str(str));
	
	free(str);
}

char* reverse_str(char *str)
{

	int size = 0;

	while(str[size] != '\0')
	size++;
	
	char temp;
	
	for(int i = 0; i < size/2; i++)
	{
		temp = str[i];
		str[i] = str[size -1 -i];
		str[size -1 -i] = temp;
	}
	return str;
}
