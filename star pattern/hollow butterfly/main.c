#include <stdio.h>
// void printRow(int target, int row)
// {

// }
// void printPatter(int target, int row)
// {
//     if (row >= target)
//         return;
//     for(int )
// }
int main()
{
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for (int i = 1; i <= rows * 2; i++)
    {
        for (int j = 1; j <= rows * 2; j++)
        {
            if ((j == 1) || (j == rows * 2) || (j == i) || (j == (rows * 2) - i + 1))
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}