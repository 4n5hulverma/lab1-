//PROGRAM TO CHECK WHETHER A NO. IS EVEN OR ODD
#include <stdio.h> //header file 
int main ()
{
    int n; //declare variable of number 
    printf("enter the number:");
    scanf("%f",&n);
    if (n % 2 == 0) //after division remainder will be zero 
        printf("number is even");
    else
        printf("number is odd");
    return 0; 
}   