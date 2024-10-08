//PROGRAM TO READ A CHARACTER AND CHECK WHETHER IT IS A SMALL CASE LETTER OR NOT USING CONDATIONAL OPERATOR.
#include <stdio.h>
#include<ctype.h> //inbuilt library for check uppercase and lowercase
int main()
{
    char SO; //declare variable 
    printf("enter the character:");
    scanf("%c",&SO);
    if (isupper(SO)) //check uppercase by inbuilt function isupper()
    {
        printf("%c is uppercase character",SO);
    }
    else if (islower(SO)) //check lowercase by inbuilt function islower()
    {
        printf("%c is lowercase character",SO);
    }
    else{
        printf("%c is not a alphabet",SO);
    }
    return 0;
}

