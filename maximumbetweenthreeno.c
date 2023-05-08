// maximum between 3 number
// 20/03/2023
//Ayush Garg
#include <stdio.h>
#include <conio.h>
int main()
{
    int num1, num2, num3, max;
    printf("Enter the numbers\n");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            max = num1;
        }
        else
        {
            max = num3;
        }
    }
    else
    {
        if (num2 > num3)
        {
            max = num2;
        }
        else
        {
            max = num3;
        }
    }

    printf("The maximum value is %d", max);
    return 0;
}