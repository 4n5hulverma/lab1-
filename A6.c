//swap two variables without using third variable 
#include<stdio.h>  //header file
int main() //a=main function
{
    int a,b ;  //declare variable 
    printf("starting value of a:");
    scanf("%d",&a);
    printf("\nstarting  value of b:");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nafter,at the end:a=%d,b=%d",a,b);
    return 0;
} 