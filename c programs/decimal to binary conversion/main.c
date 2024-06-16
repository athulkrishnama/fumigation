#include <stdio.h>

int main(){
    int  bin[50], dec, orgDec,count=0, rem;
    printf("Enter the decimal number: ");
    scanf("%d", &dec);
    orgDec = dec;
    while(dec > 0){
        rem = dec % 2;
        bin[count++] = rem;
        dec /= 2;
    }
    printf("Binary of %d is ", orgDec);
    while(count > 0){
        printf("%d", bin[--count]);
    }
    printf("\n");
}