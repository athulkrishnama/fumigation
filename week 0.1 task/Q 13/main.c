#include <stdio.h>
#include <string.h>

int main()
{
	int length, i, flag = 1;
	char str[50];
	printf("Enter the string: ");
	scanf("%s", str);
	length = strlen(str);
	for(i = 0; i < length/2; i++)
	{
		if(str[i] != str[length - 1 - i])
		{
			flag=0;
			break;
		}
	}
	if(flag)
	{
		printf("String is a palindrome\n");
	}
	else
	{
		printf("String is not a palindrome\n");
	}
}