//Write a program to print area of rectangle and square.
//Ayush Garg
#include <stdio.h>
int main()
{
    float a, b, c, d, e;
    printf("Enter the value length and breadth of rectangle\n");
    scanf("%f %f", &a, &b);

    printf("Enter the value of side of square\n");
    scanf("%f", &c);

    // for rectangle
    d = a * b;
    // for square
    e = c * c;

    printf("The area of rectangle is %f\n", d);
    printf("The area of square is %f\n", e);

    return 0;
}