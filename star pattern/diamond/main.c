#include <stdio.h>
int main()
{
    int num;
    printf("Enter number of rows: ");
    scanf("%d", &num);
    // this loop prints upper half 
    for(int i = 1; i <= num; i++)
    {
        // loop for printing space
        for(int j = 1; j <= num - i; j++){
            printf(" ");
        }
        // loop for printing stars
        for(int k = 1; k <= (i*2) - 1; k++){
            printf("*");
        }
        printf("\n");
    }

    // this loop prints lower half
    for(int i = num - 1; i >= 1; i--){
        // loop for printing space
        for(int j = 1; j <= num-i; j++){
            printf(" ");
        }
        // loop for printing stars
        for(int k = 1; k <= (i*2) - 1; k++){
            printf("*");
        }
        printf("\n");
    }
}