// Print 1d array
// 10/04/2023
#include <stdio.h>
int main()
{
    int marks[5];
        printf("Enter the marks of students\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }

    for (int j = 0; j < 5; j++)
    {
        printf("The marks of %d student is %d\n", j, marks[j]);
    }
    return 0;
}