#include <stdio.h>
int main()
{
    int num;
    printf("Enter no of rows: ");
    scanf("%d",&num);
    for( int i = 1; i <= num; i++ )
    {
        // loop to print space
        for( int j = 1; j <= num - i; j++ )
        {
            printf(" ");
        }

        // loop to print star

        for( int k = 1; k <= i; k++ )
        {
            printf("* ");
        }
        printf("\n");
    }
}