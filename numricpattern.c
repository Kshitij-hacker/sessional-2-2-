#include <stdio.h>
int main()
{
    int rows,num;
    printf("Enter the number of rows\n");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++)
    {
           
        for (int space = 1; space <= rows - i; space++)
        {
            printf(" ");
        }
        num=i;
        for(int j=1; j<=i;j++)
        {    
           
            printf("%d",num);
            num++;
        }
        num=2*i-2;
        for (int k = 1; k <=i-1; k++)
        {
            printf("%d",num);
            --num;
        }
        
        printf("\n");
    }
}