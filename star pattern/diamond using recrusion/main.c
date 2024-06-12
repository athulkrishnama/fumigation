#include <stdio.h>
void printMul(char a, int count)
{
    for (int i = 1; i <= count; i++)
    {
        printf("%c", a);
    }
}

void recursive(int space, int star)
{
    printMul(' ', space - 1);
    printMul('*', (star * 2) + 1);
    printf("\n");
    if (space == 1)
    {
        return;
    }
    recursive(space - 1, star + 1);
    printMul(' ', space - 1);
    printMul('*', (star * 2) + 1);
    printf("\n");
}

int main()
{
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    recursive(rows, 0);
}