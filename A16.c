//find max number among three numbers 
#include <stdio.h>
int main()
{
    int a,b,c; //declare variables of three numbers 
    printf("enter the number:");
    scanf("%d",&a);
    printf("enter the number:");
    scanf("%d",&b);
    printf("enter the number:");
    scanf("%d",&c);
    if (a>=c)
    {
        if (a>=b)
           printf("max number is %d",a);
        else
           printf("max number is %d",b);
    }
    else 
    {
        if (b>=c)
           printf("max number is %d", b);
        else
           printf("max number is %d",c);
    }
    
}


/*#include <stdio.h>
int main()
{
   int a,b,c;
   printf("enter value:");
   scanf("%d",&a);
   printf("enter value:");
   scanf("%d",&b);
   printf("enter value:");
   scanf("%d",&c);
   int max=a; //assume that a is max number

   // compaire the remaining number eith assumed maximum
   if (b>max)
   {
      if (b>c)
      max=b;
      else 
      max=c;
   }
   else if (c>max)
   {
      max=c;
   }
   else 
   {
      max=a;
   }
   printf("\nmax number is %d",max);
   return 0;
}*/


