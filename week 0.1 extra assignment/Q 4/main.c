#include <stdio.h>

void concatenate();
void reverse();
void Exit();
void stringLength();

int main()
{
	int choice = 1;
	
	while(choice != 4)
	{
		printf("Enter your choice:\n1.Find length of string\n2.Concatenate strings\n3.Reverse the string\n4.Exit\n");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				stringLength();
				break;
			case 2:
				concatenate();
				break;
			case 3:
				reverse();
				break;
			case 4:
				Exit();
				break;
			default: 
				printf("Invalid input\n");
		}
	}
}

void stringLength()
{
	int  i;
	char str[50];
	printf("\nEnter the string: ");
	scanf("%s", str);
	
	for(i = 0; str[i] != '\0'; i++);
	printf("\nLength of string is %d\n\n\n" , i); 
}
void concatenate()
{
	int i,j;
	char str1[50], str2[50], str3[100];
	printf("\n\nEnter stirng 1 : ");
	scanf("%s", str1);
	printf("Enter stirng 2 : ");
	scanf("%s", str2);
	
	for(i = 0; str1[i] != '\0'; i++)
	{
		str3[i] = str1[i];
	}
	
	for(j = 0; str2[j] != '\0'; j++,i++)
	{
		str3[i] = str2[j];
	}
	str3[i] = '\0';
	printf("Concatenated string is: %s\n\n", str3);

}
void reverse()
{
	int i,j;
	char str[50], rev[50];
	printf("\nEnter string: ");
	scanf("%s", str);
	for(i = 0; str[i] != '\0'; i++);
	i--;
	for(j=0; i>= 0; i--,j++)
	{
		rev[j] = str[i];
	}
	rev[j] = '\0';
	printf("\nReversed string is %s\n\n", rev);

}
void Exit()
{
	printf("Your are exiting function\n");
}

