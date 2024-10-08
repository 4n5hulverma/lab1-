/*WRITE A C PROGRAM TO CALCULATE THE COMMISSION FOR A SALES
REPRESENTATIVE AS PER THE SALES AMOUNT GIVEN BELOW.
 If sales<=Rs. 500, commission is 5%
 If sales> but <=2000, commission is Rs. 35 plus 10% above Rs. 500
 If sales>2000 but <=5000, commission is Rs. 185 plus 12% above Rs. 2000
 If sales>5000, commission is 12.5%  */

#include <stdio.h>
int main()
{
    int sales, com;
    printf("Enter sales:");
    scanf("%d", &sales);
    if (sales >= 0 && sales <= 500)
        com = sales * 5 / 100;
    else if (sales > 500 && sales <= 2000)
        com = 35 + (sales - 500) * 10 / 100;
    else if (sales > 2000 && sales <= 5000)
        com = 185 + (sales - 2000) * 12 / 100;
    else if (sales > 5000)
        com = sales * 12.5 / 100;
    printf("Your comission is:%d", com);

    return 0;
}
