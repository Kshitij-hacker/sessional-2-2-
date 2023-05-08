// write a program to perform assignnment operator.
// Ayush Garg
#include <stdio.h>
int main()
{
    int a = 5, b=10, c=15, d=16, e=9, f=7, g=5;

    b = a;
    c += a;
    d -= a;
    e /= a;
    f *= a;
    g %= a;
    printf("%d\n", b);
    printf("%d\n", c);
    printf("%d\n", d);
    printf("%d\n", e);
    printf("%d\n", f);
    printf("%d\n", g);

    return 0;
}