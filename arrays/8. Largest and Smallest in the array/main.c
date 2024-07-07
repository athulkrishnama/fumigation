#include <stdio.h>

int main(){
	int arr[50], i, max, min, size;
	printf("Enter size of array: ");
	scanf("%d", &size);

	printf("Enter array elements: \n");
	for(i = 0; i < size; i++) scanf("%d", &arr[i]);

	min = max = arr[0];

	for(i = 1; i < size; i++){
		if(arr[i] > max) max = arr[i];
		if(arr[i] < min) min = arr[i];
	}

	printf("Largest element is %d\nSmallets element is %d\n", min, max);
}