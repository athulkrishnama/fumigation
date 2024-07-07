#include <stdio.h>




int cmp(char* str1, char* str2)
{
	int i;
	for(i = 0; str1[i] != '\0' && str2[i] != '\0'; i++)
	{
		if(str1[i] == str2[i])continue;
		if(str1[i] > str2[i])return 1;
		else return 0;
	}
	
	if(str1[i] == '\0')return 0;
	else return 1;
	return 0;
}

void swap(char str1[], char str2[])
{
	char* temp;
	temp = str1;
	str1 = str2;
	str2 = temp;
}


int main(){
	int count, i, j;
	char movies[15][50];
	
	printf("Enter number of movies you want to enter: ");
	scanf("%d", &count);
	
	printf("Enter movies:\n");
	for(i = 0 ; i < count; i++)
	{	
		scanf("%s", movies[i]);
		
	}
	for(i = 0; i < count - 1; i++)
	{
		for(j = i + 1; j < count; j++)
		{
			if(cmp(movies[i], movies[j]))
			{
				for(int k = 0; k < 50; k++)
				{
					char temp = movies[i][k];
					movies[i][k] = movies[j][k];
					movies[j][k] = temp;
				}
			}
		}
	}

	printf("\nSorted list of movies are:\n \n");
	for(i = 0; i < count; i++)printf("%s\n", movies[i]);
}