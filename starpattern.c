//write a program to print traingular pattren
//20/03/2023
#include<stdio.h>
int main(){
    int rows;
    printf("Enter the value\n");
    scanf("%d",&rows);
    for (int i = 1; i <=rows; i++)
    {
       for (int j = 1; j <=i; j++)
       {
       printf("*");
       }
       printf("\n");
    }
    
}