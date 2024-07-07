#include <stdio.h>

int main(){
	int arr1[50], arr2[50], arr3[100], n1, n2, i, j, k;
	
	printf("Enter size of array 1: ");
	scanf("%d", &n1);
	
	printf("Enter size of array 2: ");
	scanf("%d", &n2);

	printf("Enter array 1\n");
	for(i = 0; i < n1; i++) scanf("%d", &arr1[i]);

	printf("Enter array 2\n");
	for(i = 0; i < n2; i++) scanf("%d", &arr2[i]);
	
	i = j = k = 0;
	while( i < n1 && j < n2){
		if(arr1[i] > arr2[j]){
			arr3[k++] = arr1[i++]; 
		}
		else{
			arr3[k++] = arr2[j++];
		}
	}

	while(i < n1) arr3[k++] = arr1[i++];
	while(j < n2) arr3[k++] = arr2[j++];

	printf("Sorted array is :");
	for(i = 0; i < k; i++ )printf("\t%d", arr3[i]);
	printf("\n");
	
}