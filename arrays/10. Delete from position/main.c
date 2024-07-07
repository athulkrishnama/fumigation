#include <stdio.h>

int main(){
	int arr[50], i, size, pos;
	printf("Enter size of array: ");
	scanf("%d", &size);

	printf("Enter array elements: \n");
 	for(i = 0; i < size; i++) scanf("%d", &arr[i]);

	printf("Enter the position you want to delete: ");
	scanf("%d", &pos);
	
	printf("Array before deleting\n");
	for(i = 0; i < size; i++) printf("%d\t", arr[i]);
	printf("\n");
	
	for(i = pos; i < size - 1; i++){
		arr[i] = arr[i + 1];
	}
	
	size--;
	
	printf("Array after deleting\n");
	for(i = 0; i < size; i++) printf("%d\t", arr[i]);
	printf("\n");	
}