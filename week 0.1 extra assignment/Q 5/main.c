#include <stdio.h>

int main()
{
	int i;
	char str[50], str2[50];
	printf("Enter the string: ");
	scanf("%s", str);
	for(i = 0; str[i] != '\0'; i++)
	{
		str2[i] = str[i];
	}
	
	printf("Copied string is : %s\n", str2);
}