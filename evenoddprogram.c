// program to check number is even or odd
// 20/03/2023
// Ayush Garg
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the Number\n");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("The number is even");
    }
    else
    {
        printf("The number is odd");
    }
    return 0;
}
