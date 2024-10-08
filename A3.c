// PROGRAM TO CALCULATE GROSS SALARY.
#include <stdio.h>
int main()
{

    int bs, da, hra, gs;
    printf("Enter the basic salary=");
    scanf("%d", &bs);
    da = bs * (0.4);
    hra = bs * (0.2);
    gs = bs + da + hra;
    printf("The gross salary=%d", gs);
    return 0;

}