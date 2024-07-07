#include <stdio.h>

int main(){
	int arr[] = {6,4,8,2,5,7,2,8,1,8};

	int size = 10, i, temp;

	for(i = 0; i < (size - 1) / 2; i++){
		temp = arr[i];
		arr[i] = arr[ size - 1 - i];
		arr[ size - 1 - i] = temp ;
	}

	printf("Array is: ");
	for(i = 0; i < size; i++) printf("\t%d", arr[i]);
	printf("\n");
}