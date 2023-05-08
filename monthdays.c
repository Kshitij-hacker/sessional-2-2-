// write a program to input month number and print number of days in that month
// 20/03/2023
// Ayush Garg
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the month number\n");
    scanf("%d", &num);

    if (num == 4 || num == 6 || num == 9 || num == 11)
    {
        printf("The number of days is 30");
    }
    else if (num == 2)
    {
        printf("The number of days is 28 or 29");
    }
    else
    {
        printf("The number of days is 31");
    }
    return 0;
}    