#include <stdio.h>

void print_str(int n){
	if( n == 0){
		return;
	}
	print_str(n - 1);
	printf("Crossroads\n");
}


int main(){
	print_str(8);
}