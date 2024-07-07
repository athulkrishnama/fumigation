#include <stdio.h>

int main(){
	char str[50];
	int i;
	printf("Enter the string: ");
	scanf("%s", str);
	
	for(i = 0; str[i] != '\0'; i++){
		if(str[i] >= 'a' && str[i] <= 'z'){
			str[i] += 'A' - 'a';
		}
	}
	printf("Upper case string is %s\n", str);
}