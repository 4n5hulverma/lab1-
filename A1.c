// find the simple interest
// S.I=(P*R*T)/100
#include <stdio.h> //header file
int main()
{
    // declare variables
    float P, R, T, SI;
    printf("enter the values:\n");
    // scanf("format specifier",&variable)
    scanf("%f %f %f", &P, &R, &T);
    SI = (P * R * T) / 100;
    printf("\nsim.interest:%f", SI);
    return 0;
}
