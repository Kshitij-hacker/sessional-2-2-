//write a program to input a alphabet and check whether it is  a vowel or consonant
//20/03/2023
//Ayush Garg
#include<stdio.h>
int main(){
   char alp;
    printf("Enter the aplhabet\n");
    scanf("%c",&alp);

    if(alp=='a'||alp=='i'||alp=='e'||alp=='o'||alp=='u'||alp=='A'||alp=='I'||alp=='E'||alp=='O'||alp=='U')
    {
        printf("The aplhabet is a vowel");
    }
    else
    {
        printf("The alphabet is a consonant");
    }
    return 0;
}