#include <stdio.h>

int main()
{
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for(int i = 1; i <= (2*rows )- 1; i++)
    {
        int count = i > rows? (2 * rows) - i: i;
        for(int j = 1; j <= count; j++){
            printf("*");
        }
        printf("\n");
    }
}