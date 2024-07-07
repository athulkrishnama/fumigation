#include <stdio.h>

int isPrime(int);
int main(){
	int arr[50], i, size;
	printf("Enter size of array: ");
	scanf("%d", &size);
	
	printf("Enter the array elements:\n" );
	for(i = 0; i < size; i++) scanf("%d", &arr[i]);

	printf("Prime numbers in array is: ");
	for(i = 0; i < size; i++){
		if(isPrime(arr[i])){
			printf("\t%d", arr[i]);
		}
	}

	printf("\n");
}


int isPrime(int num){
	int i;
	if(num <= 1) return  0;
	
	for(i = 2; i <= num / 2; i++){
		if(num % i == 0)return 0;
	}
	return 1;
}