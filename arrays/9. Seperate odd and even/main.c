#include <stdio.h>

int main(){
	int arr[50], odd[50], even[50], i, j, k, size;
	printf("Enter size of array: ");
	scanf("%d", &size);
	
	printf("Enter array elements: \n");
	for(i = 0; i < size; i++)scanf("%d", &arr[i]);
	
	j = k = 0;
	for(i = 0; i < size; i++){
		if(arr[i] % 2) odd[k++] = arr[i];
		else even[j++] = arr[i];
	}

	printf("Even array is : ");
	for(i = 0; i < j; i++) printf("\t%d", even[i]);
	
	printf("\n");

	printf("Odd array is: \t");
	for(i = 0; i < k; i++) printf("\t%d", odd[i]);

	printf("\n");
}