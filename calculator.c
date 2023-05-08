//write a program to make a calculator
//Ayush Garg
#include <stdio.h>
int main()
{

    float a, b;
    char c;
    printf("Enter operator \n");
    scanf("%c", &c);
    printf("Enter 1st number \n");
    scanf("%f", &a);
    printf("Enter 2nd number \n");
    scanf("%f", &b);

    if (c == '+')
    {
        printf("%f + %f = %f \n", a, b, a + b);
    }
    else if (c == '-')
    {
        printf("%f - %f = %f \n", a, b, a - b);
    }
    else if (c == '/')
    {
        printf("%f / %f = %f \n", a, b, a / b);
    }
    else 
    {
        printf("%f x %f = %f \n", a, b, a * b);
    }
    
    return 0;
}