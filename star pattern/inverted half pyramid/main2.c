#include <stdio.h>
int main()
{
    int num;
    printf("Enter no of rows: ");
    scanf("%d", &num);
    for (int i = num; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}