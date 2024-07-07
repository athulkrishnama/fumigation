#include <stdio.h>

int main(){
	int arr[50], i, j, size, freq[50] = {0};
	printf("Enter size of array: ");
	scanf("%d", &size);
	
	printf("Enter array elements\n");
	for(i = 0; i < size; i++) scanf("%d", &arr[i]);

	//traverse through array
	for(i = 0; i < size; i++){
		//traverse from 0 till i to check if already an entry done for same number
		int flag = 0;
		for(j = 0; j < i; j++){
			if(arr[i] == arr[j]){
				flag = 1;
				break;				
			}
		}
	
		if(flag)continue;
		//if not create entry 
		for(;j < size; j++){
			if(arr[i] == arr[j])freq[i]++;
		}
		
	}

	printf("Frequency of elements are: \n");
	for(i = 0; i < size; i++){
		if(freq[i])printf("%d : %d\n", arr[i], freq[i]);
	}
}