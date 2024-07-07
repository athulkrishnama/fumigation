#include <stdio.h>

int main(){
	int num1, num2, *ptr1, *ptr2, temp;

	ptr1 = &num1;
	ptr2 = &num2;

	printf("Enter 2 numbers: ");
	scanf("%d%d", ptr1, ptr2);

	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
	
	printf("num1 = %d, num2 = %d\n", num1, num2);
}