#include <stdio.h>

int main(){
	int arr[] = { 0, 2, 5, 0 , 0, 9 , 8 , 7 , 3 ,8, 0, 0, 0};
	int size = 13, i, j, count, diff = 0;
	j = count = 0;
	for(i = 0; i < size; i++){
		if(arr[i] == 0)count++;
		else arr[j++] = arr[i];
	}	
	while(count >= 0){
		arr[i--] = 0;
		count--;
	}

	printf("Array after: ");
	for(i = 0; i < size; i++) printf("\t%d", arr[i]);
	printf("\n");
}