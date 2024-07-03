#include <stdio.h>
int main()
{
    int num;
    printf("Enter no of rows: ");
    scanf("%d",&num);
    for( int i = 1; i <= num; i++ )
    {
        // loop for printing space
        for( int j = 1; j <= num-i; j++ )
        {
            printf(" ");
        }

        // loop for printing stars
        for( int k = 1; k <= (i*2)-1; k++ )
        {
            printf("*");
        }
        printf("\n");
    }
}