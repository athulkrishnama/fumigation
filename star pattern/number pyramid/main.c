#include <stdio.h>

int main()
{
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for(int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <= rows - i ; j++){
            printf(" ");
        }
        int incrementer=-1;
        for(int j = i; j <=i; j+=incrementer)
        {   
            printf("%d",j);
            if(j==1)incrementer=1;
        }
        printf("\n");
    }
}