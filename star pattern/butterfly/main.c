#include <stdio.h>
void printRow(int row, int target)
{
    for (int i = 1; i <= row; i++)
        printf("* ");
    for (int i = 1; i <= (target - row) * 2; i++)
        printf("  ");
    for (int i = 1; i <= row; i++)
        printf("* ");
    printf("\n");
}
void printPattern(int row, int target)
{
    printRow(row, target);
    if (row >= target)
        return;
    printPattern(row+1, target);
    printRow(row, target);
}
int main()
{
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printPattern(1, rows);
}