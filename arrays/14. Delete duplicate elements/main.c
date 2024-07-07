#include <stdio.h>

void del_pos(int pos, int* arr, int* size){
	for(int j = pos; j < *size - 1; j++){
		arr[j] = arr[j + 1];
	}
	(*size)--;
}

int main(){
	int arr[] = { 2, 5, 6, 2, 2, 6, 8, 5, 9, 7};
	int i, j, size = 10;

	for(i = 0; i < size - 1; i++){
		for(j = i + 1; j < size; j++){
			if(arr[i] == arr[j]){
				del_pos(j, arr, &size);

			}
		} 
	}

	printf("Array is: ");
	for(i = 0; i < size; i++) printf("\t%d", arr[i]);
	printf("\n");
}