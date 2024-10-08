/*variable=expression1?expression2:expression3;
syntax; 
variable=condition?expression 2: expression 3;
it can be visualised into an if else statement as:
if (expression 1)
{
variable=expression 2;
}
else
{
variable=expression 3;
}*/   //since the condition operator "?:" takes three operands to work ,hence they are also called ternary operators

#include<stdio.h>
int main()
{
    int M,S,L,U;
    printf("enter number:");
    scanf("%d %d %d",&M,&S,&L);
    U=(M>S && M>L? M:S>L?S:L);  //ASSIGN EXPRESSION:2 TO VARIABLE IF EXPRESSION:1 IS TRUE AND IF FALSE THEN ASSIGN EXPRESSION:3 TO VARIABLE
    printf("MAX NUMBER IS %d",U);
    return 0;
}