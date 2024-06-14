#include <stdio.h>

int main()
{
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            printf("  ");
        }
        for(int j = 1; j <= rows; j++){
            if((j==1) || (j == rows) || (i == 1) || (i == rows))
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}