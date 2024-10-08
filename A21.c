//program to read two number and perform specific task (usinfg arithmetic operator ) AND this perform using switch-case
#include <stdio.h>
int main()
{
    float a, b; //
    char op;
    printf("\nenter number:");
    scanf("%f", &a);
    printf("\nenter number:");
    scanf("%f", &b);
    printf("choose operator(+,-,*,/):");
    scanf(" %c", &op);
    switch (op)
    {
    case '+':
        printf("%.2f+%.2f=%.2f", a, b, a + b);
        break;
    case '-':
        printf("%.2f-%.2f=%.2f", a, b, a - b);
        break;
    case '*':
        printf("%.2f*%.2f=%.2f", a, b, a * b);
        break;
    case '/':
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
