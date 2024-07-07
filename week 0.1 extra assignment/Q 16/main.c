#include <stdio.h>

int summation(int);
int main(){
	int n, hs;
	printf("Enter number of students: ");
	scanf("%d", &n);
	hs = summation(n - 1);
	printf("Number of shakehands is %d\n", hs);
}

int summation(int n){
	if(n == 0) return 0;
	return n + summation(n - 1);
}