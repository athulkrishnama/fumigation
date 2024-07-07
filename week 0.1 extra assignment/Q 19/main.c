#include <stdio.h>

int main(){
	int weight, price = 200;
	printf("Enter the weight in grams: ");
	scanf("%d", &weight);
	weight -= 500;
	while(weight > 0){
		price += 170;
		weight -= 500;
	}

	printf("Total cost of parcel is %d\n", price);
}