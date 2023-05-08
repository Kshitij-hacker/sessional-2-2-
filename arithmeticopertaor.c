//write a program to perform arithmetic operation 
//Ayush Garg
#include <stdio.h>
int main()
{
    int a, b, w, x, y, z, v;
    printf("Enter two number\n");
    scanf("%d %d",&a,&b);

    w = a + b;
    x = a - b;
    y = a / b;
    z = a * b;
    v = a % b;

    printf("Sum is %d\n", w);
    printf("Difference is %d\n", x);
    printf("Division is %d\n", y);
    printf("Product is %d\n", z);
    printf("Remainder is %d", v);
    return 0;
}