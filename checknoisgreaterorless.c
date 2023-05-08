// write a c program to find maximum between two number
// 20/03/2023
// Ayush Garg
#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter the number 1\n");
    scanf("%d", &num1);
    printf("Enter the number 2\n");
    scanf("%d", &num2);

    if (num1 < num2)
    {
        printf("The Number(2) %d is greater", num2);
    }
    else if(num1>num2)
    {
        printf("The Number(1) %d is greater", num1);
    }
    else
    { 
        printf("Both numbers are equal");
    }
    return 0;
}