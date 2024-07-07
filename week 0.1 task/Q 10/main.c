#include <stdio.h>

int main()
{
	int arr1[50], arr2[50], length, i;
	printf("Enter the size of the array: ");
	scanf("%d", &length);

	printf("Enter values of array 1:\n");
	for(i = 1; i <= length; i++)
	{
		scanf("%d", &arr1[i-1]);
	}

	printf("Enter values of array 2:\n");
	for(i = 1; i <= length; i++)
	{
		scanf("%d" , &arr2[i - 1]);
	}

	for(i = 0; i < length; i++)
	{
		arr1[i] = arr1[i] + arr2[i];
		arr2[i] = arr1[i] - arr2[i];
		arr1[i] = arr1[i] - arr2[i];
	}

	printf("Array 1: ");
	for(i = 0; i < length; i++)
	{
		printf("%d ", arr1[i]);
	}
	
	printf("\nArray 2: ");
	for(i = 0; i < length; i++)
	{
		printf("%d ", arr2[i]);
	}
	printf("\n");
}