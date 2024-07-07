#include <stdio.h>

int fib(int);

int main() {
	int n, fibNum;
	printf("Enter position of fibonacci you want to find: ");
	scanf("%d", &n);
	fibNum = fib(n);
	printf("%dth fibonacci number is %d\n", n,  fibNum);
}


int fib(int n){
	if( n <= 1){
		return n;
	}
	return fib(n - 1) + fib(n - 2);
}