#include <stdio.h>

int main(){
	int arr[50], i, j, size, flag;
	printf("Enter size of array: ");
	scanf("%d", &size);

	printf("Enter array elements: \n");
	for(i = 0; i < size; i++) scanf("%d", &arr[i]);
	
	printf("Unique elements are: ");
	for(i = 0; i < size; i++){
		flag = 1;
		for(j = 0; j < size; j++){
			if(i == j) continue;
			if(arr[i] == arr[j]){
				flag = 0;
				break;
			}
		}
		if(flag){
			printf("\t%d", arr[i]); 
		}
	}	
	printf("\n");
}