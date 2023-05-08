//write a program to print sum and product of numbers
//27/03/2023
#include<stdio.h>
int main()
{
    int rows,sum=0,product=1;
    printf("Enter the number\n");
    scanf("%d",&rows);
    for (int i = 1; i <=rows; i++)
    {
        sum=sum+(rows-i+1);
        product=product*(rows-i+1);
         
        

    }
    printf("sum is %d\n",sum);
    printf("product is %d",product);
    
}