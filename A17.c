//found max number among three number using &&(logical operator AND)
#include <stdio.h>
int main()
{
    int a,b,c;//declare variable of three number
    printf("enter number:\n");
    scanf("%d\n%d\n%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("max number is a=%d",a);
    }
    else if(b>a && b>c)
    {
        printf("max number is b=%d",b);
    }
    else
    {
        printf("max number is c=%d",c);
    }
    return 0;
}