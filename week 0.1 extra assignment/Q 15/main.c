#include <stdio.h>

int main(){
	int i, j, row;
	printf("Enter row height: ");
	scanf("%d", &row);
	
	for(i = 1; i <= row; i++){
		for(j = 1; j <= 2 * row; j++){
			if(j <= i || j > (row * 2)  - i){
				printf("* ");
			}
			else{
				printf("  ");
			}
		}
		printf("\n\n");
	}
}