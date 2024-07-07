#include <stdio.h>

int main(){
	int arr[] = { 0 , 5, 2,0,0, 4, 5, 0 , 0, 8, 3, 5, 0, 4, 0, 0};
	int i, j, count = 0, size = 16;
	j = size - 1;

	for(i = size - 1; i >= 0; i--){
		if(arr[i] == 0) count++;
		else arr[j--] = arr[i];
	}
	count--;
	while(count >= 0){
		arr[count--] = 0;
	}

	printf("Array is ");

	for(i = 0; i < size; i++) printf("\t%d", arr[i]);
	printf("\n");
}