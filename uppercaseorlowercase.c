// write a program to check whether a alphabet is lower case or uppercase
// 20/03/2023
// Ayush Garg
#include <stdio.h>
int main()
{
    char al;
    printf("Enter the alphabet\n");
    scanf("%c", &al);

    if (al >= 'a' && al <= 'z')
    {
        printf("The aplhabet is Lower Case");
    }
    else if (al >= 'A' && al <= 'Z')
    {
        printf("The aplhabet is Upper Case");
    }
    else
    {
        printf("Please Enter Valid Input");
    }
    return 0;
}