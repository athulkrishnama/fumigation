#include <stdio.h>

int main()
{
	int arr[50], i, j, count;
	printf("Enter how many numbers you want to enter: ");
	scanf("%d" , &count);
	printf("Enter numbers:\n");
	for(i = 0; i < count; i++)scanf("%d", &arr[i]);
	for(i = 0; i < count - 1; i++)
	{
		 for(j = i + 1; j < count; j++)
		{
			if(arr[i] < arr[j])
			{	
				arr[i] = arr[i] + arr[j];
				arr[j] = arr[i] - arr[j];
				arr[i] = arr[i] - arr[j];
			}
		}
	}
	printf("Sorted array is: ");
	for(i = 0; i < count; i++)printf("%d ", arr[i]);
	printf("\n");
}