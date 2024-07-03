#include <stdio.h>

void printStar(int num)
{
    for(int i = 1; i <= num; i++)
    {
        printf("*");
    }
    printf("\n");
}

void printPyramid(int num, int target)
{
    printStar(num);
    if (num == target)
    {
        return;
    }
    printPyramid(num + 1, target);
    printStar(num);
}
int main()
{
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printPyramid(1, rows);
}