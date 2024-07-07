#include <stdio.h>

int maxNum(int*, int);
int main() {
	int arr[50], i, len, max;
	printf("Enter how many numbers you want to enter: ");
	scanf("%d", &len);
	
	printf("Enter numbers: \n");
	for(i = 0; i < len; i++) scanf("%d", &arr[i]);
	
	max = maxNum(arr, len);
	
	printf("Maximum number you have entered is %d\n", max);	
}	

int maxNum(int* arr, int len){
	int max = arr[0], i;
	for(i = 1; i < len; i++){
		if(max < arr[i]) max = arr[i]; 
	}

	return max;
}