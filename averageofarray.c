// avearge
// 10/04/2023
#include <stdio.h>
int main()
{
    float b = 0;
    int n, i, j;
    int marks[n];

    printf("Enter the number of students\n");
    scanf("%d", &n);

    for (int i = 0; i <= (n - 1); ++i)
    {
        printf("Enter the marks of students\n");
        scanf("%d", &marks[i]);
    }
    for (int j = 0; j < n; j++)
    {
        b = b + marks[j];
    }
    b = b / n;
    printf("The average is %f ", b);
    return 0;
}