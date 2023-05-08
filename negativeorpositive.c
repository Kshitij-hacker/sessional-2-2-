// program to check the given number is positive or negative
// 20/03/2023
// if conditon
#include <stdio.h>
#include <conio.h>
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);
    // Checking The condition
    // for negative condition
    if (num < 0)
    {
        printf("The number is negative");
    }
    // for positive condition
    else if (num > 0)
    {
        printf("The number is positive");
    }
  else
    {
        printf("The number is equal to zero");
    }
    return 0;
}