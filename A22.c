//program tp calculate factorial of a number
#include<stdio.h> //include standard i/p o/p header file
int main()
{
    int m,s=1,i; //declare variable 'i' for loopcounter,'s' to store factorial,'m' for user input 
    printf("enter the number:");
    scanf("%d",&m); //read the value of m from the user input
    for(i=1;i<=m;i++) //start loop to calculate factorial
    {
        s*=i; //calculate factorial
    }
    printf("factorial of %d=%d",m,s); //
} 