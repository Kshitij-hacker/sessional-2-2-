// write a program to check the number is divisible by 5 or 11 or not
// 20/03/2023
// Ayush Garg
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);

    if ((num % 5 == 0) && (num % 11 == 0))
    {
        printf("The number is divisible by 5 & 11");
    }
    else
    {
        printf("The number is not divisible by 5 & 11");
    }
    return 0;
}