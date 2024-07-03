#include <stdio.h>

int main()
{
	int i, count = 0, arr[50], length;
	printf("Enter size of array: ");
	scanf("%d", &length);
	printf("Enter elements of array:\n");
	for(i = 0; i < length; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	for(i = 0; i < length; i++)
	{
		if(arr[i] % 2 == 0)
		{
			count++;
		}
	}
	printf("Number of even numbers in given arary is %d\n", count);
}