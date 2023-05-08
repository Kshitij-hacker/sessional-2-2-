// write a program to check whether a character is an alphabet or not
// 20/03/2023
// Ayush Garg
#include <stdio.h>
int main()
{
    char alp;
    printf("Enter the character\n");
    scanf("%c", &alp);
    if (alp >= 'A' && alp <= 'Z')
    {
        printf("The character is an aplhabet");
    }
    else if (alp >= 'a' && alp <= 'z')
    {
        printf("The character is an alphabet");
    }
    else
    {
        printf("The character is not an alphabet");
    }
    return 0;
}