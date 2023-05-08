// 17/04/2023
// matrix addition
#include <stdio.h>
int main()
{
    int a, b, c, d;
    int tot[10][10] = {0}, frt[10][10], scd[10][10];

    printf("Enter the no. of rows and column of first matrix\n");
    scanf("%d %d", &a, &b);

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("Enter the %d %d elements of matrix\t", i, j);
            scanf("%d", &frt[i][j]);
        }
        printf("\n");
    }
    printf("Enter the no. of rows and column of first matrix\n");
    scanf("%d %d", &c, &d);

    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < d; j++)
        {
            printf("Enter the %d %d elements of matrix\t", i, j);
            scanf("%d", &scd[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            tot[i][j] = frt[i][j] + scd[i][j];
        }
    }
    printf("Addition is\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d\t", tot[i][j]);
        }
        printf("\n");
    }
}