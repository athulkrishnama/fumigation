#include <stdio.h>

int main()
{
	int pos, len, i, j, matchlen, flag;
	char str[50], match[50] = "is";
	printf("Enter the string: ");
	scanf("%[^\n]s", str);
	for(matchlen = 0; match[matchlen] != '\0'; matchlen++);
	for(i = 0; str[i] != '\0'; i++)
	{
		for(j = 0; str[j] != '\0'; j++)
		{
			if(match[j] != str[j + i])break;
			
		}
		if(j == matchlen)pos=i;
	}
	printf("Position = %d\n", pos);
}