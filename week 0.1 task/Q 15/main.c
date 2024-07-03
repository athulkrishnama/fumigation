#include <stdio.h>

int getArray(int*);
void displayArray(int*,int);
int main()
{
	int arr[50],len;
	len = getArray(arr);
	displayArray(arr, len);
}

int getArray(int* arr)
{
	int len, i;
	printf("Enter size of array: ");
	scanf("%d", &len);
	printf("Enter elements of array: \n");
	for(i = 0; i < len; i++)
	{
		scanf("%d", &arr[i]);
	}
	return len;
}

void displayArray(int* arr, int len)
{
	int i;
	printf("Array is: \n");
	for(i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}