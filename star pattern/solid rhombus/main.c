#include <stdio.h>

int main()
{
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows * 2; j++)
        {
            if ((i + j) <= rows || (i + j) > 2 * rows)
            {
                printf("  ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }
}