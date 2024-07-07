#include <stdio.h>

int main(){
	int arr[50], i, j, size, flag;
	printf("Enter size of array: ");
	scanf("%d", &size);

	printf("Enter array elements:\n");
	for(i = 0; i < size; i++)scanf("%d", &arr[i]);

	printf("Unique elements in the array is :\t");
	
	for(i = 0; i < size; i++){
		flag = 1;
		for(j = 0; j < i; j++){
			if(arr[i] == arr[j]){
				flag = 0;
				break;
			}
		}
		if(flag) printf("%d\t", arr[i]);
	}

	printf("\n");
}