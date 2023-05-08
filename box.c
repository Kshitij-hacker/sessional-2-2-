// write  a table using listed for loop
// 20/03/2023
#include <stdio.h>
int main()
{
    int num;
    printf("Enter how many stars you want to print");
    scanf("%d", &num);

    for (int i = 0; i <= 3 * num; i++)
    {
        for (int j = 0; j <= 3 * num; j++)
        {
            if (i == 0 || i == num || i == 2 * num || i == 3 * num || j == 0 || j == num || j == 2 * num || j == 3 * num)
            {
                printf(" *");
            }
            else
            {
                printf("  ");
            }
        }

        printf("\n");
    }
}