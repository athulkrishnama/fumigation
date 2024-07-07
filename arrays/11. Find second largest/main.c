#include <stdio.h>

int main(){
	int arr[50], max1, max2, size, i;
	
	printf("Enter size of array: ");
	scanf("%d", &size);

	printf("Enter array elements: \n");
	for(i = 0; i < size; i++) scanf("%d", &arr[i]);
	
	max1 = max2 = 0;
	for(i = 0; i < size; i++){
		if( max1 < arr[i]){
			max2 = max1;
			max1 = arr[i];
		}

		if( max2 < arr[i] && max1 > arr[i]) max2 = arr[i];
	}

	printf("Second largst number is %d\n", max2);
}