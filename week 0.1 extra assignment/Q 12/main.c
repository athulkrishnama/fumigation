#include <stdio.h>

int main()
{
	int alpha = 0, dig = 0, spc = 0, i;
	char str[50];
	printf("Enter the sentence: ");
	scanf("%s", str);
	
	for(i = 0; str[i] != '\0'; i++)
	{
		if( (str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
		{
			alpha++;
		}else if( (str[i] >= 33 && str[i] <= 47) || (str[i] >= 58 && str[i] <= 64) || (str[i] >= 91 && str[i] <= 96) || (str[i] >= 123 && str[i] <= 128)) 
		{
			spc++;
		}else if(str[i] >= 49 && str[i] <= 57)
		{
			dig++;
		}
	}

	printf("Number of alphabets is %d\n", alpha);
	printf("Number of digits is %d\n", dig);
	printf("Number of special characters is %d\n", spc);
	
}	