#include <stdio.h>

int main()
{
	int arr[50], arr2[50], len, i;
	printf("Enter size of array: ");
	scanf("%d", &len);
	printf("Enter array elements: \n");
	for(i = 0; i < len; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	for(i = 0; i < len - 1; i++)
	{
		arr2[i] = arr[i] * arr[i + 1];
	}
	
	printf("Result is : ");
	for(i = 0 ; i < len - 1; i++)
	{
		printf("\t%d", arr2[i]);
	}
	printf("\n");
}