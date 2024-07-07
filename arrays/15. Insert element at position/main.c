#include <stdio.h>

int main(){
	int arr[50] = {4,6,2,6,3,7,3,4,56,2,3,7};
	int num, pos, i, size = 12;
	num = 34, pos = 4;

	for(i = size; i > pos; i--){
		arr[i] = arr[i-1];
	} 
	arr[i] = num;
	size++;

	printf("Array is: ");
	for(i = 0; i < size; i++) printf("\t%d", arr[i]);
	printf("\n");
}