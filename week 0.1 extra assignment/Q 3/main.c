#include <stdio.h>

int main()
{
	int i,flag = 0;
	char str1[50], str2[50];
	printf("Enter the string 1: ");
	scanf("%s", str1);
	printf("Enter the string 2: ");
	scanf("%s", str2);
	for(i = 0; str1[i] == str2[i]; i++)
	{
		if(str1[i] == '\0')flag=1;
	}
	
	if(flag)
	{
		printf("Both are same\n");
	}else{
		printf("These are different\n");
	}
	
}