#include <stdio.h>

int main()
{
    int rows, incrementer = 1; 
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for (int i = 1; i >= 1; i+= incrementer)
    {
        if(i == rows)incrementer = -1;
        for(int j = 1; j <= (rows * 2 - 1); j++)
        {
            if((j == rows - i + 1) || (j == rows + i - 1)){
                printf("*");
            }
            else printf(" ");
        }
        printf("\n");
    }
}