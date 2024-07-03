#include <stdio.h>

int main()
{
	int arr[50], i, j, length;
	printf("Enter size of array: ");
	scanf("%d", &length);
	printf("Enter array elements: \n");
	for(i = 0; i < length; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	//sorting

	for(i = 0; i < length - 1; i++)
	{
		for(j = i + 1; j < length; j++)
		{
			if(arr[i] < arr[j])
			{
				arr[i] = arr[i] + arr[j];
				arr[j] = arr[i] - arr[j];
				arr[i] = arr[i] - arr[j];
			}
		}
	}
	
	printf("Sorted array is :");
	for(i = 0; i < length; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}