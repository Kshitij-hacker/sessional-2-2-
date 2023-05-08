// write a program to input a character to check whether it is a alphabet or digit or special
// 20/03/2023
//Ayush Garg
#include <stdio.h>
int main()
{
    char al;
    printf("Enter the character\n");
    scanf("%c", &al);

    if (al>='0'&& al<='9')
    {
        printf("The character is a digit");
    }
    else if (al >= 'a' && al<='z'|| al >= 'A' && al<='Z')
    {
        printf("The character is a alphabet");
    }
    else
    {
        printf("The character is a special");
    }
    return 0;
}