#include <stdio.h>

int main(){
	int arr[] = {2,5,3,6,3,2,6,4,1,7,4,7,8};
	int size = 13, i, j, count = 0, flag;
	
	for(i = 0; i < size; i++){
		flag = 1;
		for(j = 0; j < size; j++){
			if(i == j)continue;
			if(arr[i] == arr[j]){
				flag = 0;
				break;
			}
		}
		if(flag)count++;
	}
	
	printf("Number of unique are %d\n", count);
}