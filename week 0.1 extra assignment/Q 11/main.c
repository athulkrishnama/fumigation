#include <stdio.h>

int main()
{
	int arr[50], i, j, len;
	printf("Enter length of array: ");
	scanf("%d", &len);
	
	printf("Enter array elements: \n");
	for(i = 0; i < len; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	
	printf("Duplicate elements are: ");
	for(i = 0; i < len - 1; i++)
	{	
		for(j = i + 1; j < len; j++)
		{
			if(arr[i] == arr[j])
			{
				printf("%d ", arr[i]); 
			}
		}
	}
	printf("\n");
}