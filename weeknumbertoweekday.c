// write a program to input week number and print week days
// 20/03/2023
//Ayush Garg
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the week number\n");
    scanf("%d", &num);

    if (num == 1)
    {
        printf("Monday");
    }
    else if (num == 2)
    {
        printf("Tuesday");
    }
    else if (num == 3)
    {
        printf("Wednesday");
    }
    else if (num == 4)
    {
        printf("Thursday");
    }
    else if (num == 5)
    {
        printf("Friday");
    }
    else if (num == 6)
    {
        printf("Saturday");
    }
    else
    {
        printf("Sunday");
    }
    return 0;
}