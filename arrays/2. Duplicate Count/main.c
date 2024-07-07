#include <stdio.h>

int main(){
	int arr[50], i, j, size, count = 0;
	printf("Enter the size of array: ");
	scanf("%d", &size);
	printf("Enter array elements: \n");
	for(i = 0; i < size; i++) scanf("%d", &arr[i]);
	for(i = 0; i < size; i++){
		for(j = i + 1; j < size; j++){
			if(arr[i] == arr[j]){
				count++;
				break;
			}
		}
	}
	printf("There is %d duplicate elements in array\n", count);
}