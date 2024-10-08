//program to read two numbers and calculate power without using header file<math.h>
//in <math.h> we can use power(base,exp) inbuilt function
#include<stdio.h>
int main ()

{
    int e,b,c=1;
    printf("enter the base:");
    scanf("%d",&b);
    printf("enter the exponent:");
    scanf("%d",&e);
    while(e!=0)
    {
        c*=b;
        --e;
    }
    printf("answer=%d",c);
    return 0;
} 