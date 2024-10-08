#include <stdio.h>
int main()
{
    int a, b; //declare variables 
    int op;
    printf("\nenter number:");
    scanf("%d", &a);
    printf("\nenter number:");
    scanf("%d", &b);
    printf("1.addition\n2.subtraction\n3.multiplication\n4.division\n");
    printf("enter your choice:");
    scanf("%d", &op);
    switch (op) //case value must be int or char
    {//case must inside switch
    case 1:
        printf("%d+%d=%d", a, b, a + b);
        break;
    case 2:
        printf("%d-%d=%d", a, b, a - b);
        break;
    case 3:
        printf("%d*%d=%d", a, b, a * b);
        break;
    case 4:
        if (b == 0)
        {
            printf("not define");
        }
        else
        {
            printf("%f/%f=%f", a, b, a / b);
        }
        break;
    default:
        printf("not a valid arithmatic operator");
        return 0;
    }
}
