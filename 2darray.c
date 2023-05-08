//Printing 2d array
//10/04/2023
#include <stdio.h>
int main()
{
    int matrix[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the value of %d%d elements of matrix\n", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int k = 0; k < 2; k++)
    {
        for (int l = 0; l < 3; l++)
        {
            printf("The value of %d%d elements of matrix is %d\n", k, l, matrix[k][l]);
        }
    }
    return 0;
}