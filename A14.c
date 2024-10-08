//C program to check whether a given character is upper case, lower case, number or special character 
#include<stdio.h> //header file,inbuilt library
 int main()
 {
    char x; //declare variable 
    printf("enter the character:");
    scanf("%c",&x);
    if (x>='A' && x<='Z') //range of uppercase 
    {
        printf("%c is uppercase",x);

    }
    else if (x>='a' && x<='z' ) //range of lowercase
    {
        printf("%c is lowercase",x);
    }
    else if (x>='0' && x<='9') // number range for character is 0 to 9 
    {
        printf("%c is number",x);

    }
    else 
    {
        printf("%c is special symbol",x);
    }
    return 0;
}


/*#include <stdio.h> // header file
int main ()
{
    char son; //declare variable 
    printf("enter character:");
    scanf("%c",&son);
    printf("\n The ASCII of %c is %d\n",son,son); //with the use of ascii we can classify char will be either uppercase ,lowercase ,number or special symbol

    if (son>=65 && son<=91) //ASCII value range for A to Z upper case is 65 to 91
    printf("uppercase character");
    else if (son>=97 && son<=122) //ASCII value range for a to z lower case is 97 to 122
    printf("lower case character");
    else if (son>=48 && son<=57) //ASCII value range for number is 48 to 57
    printf("number hai");
    else
    printf("character is special symbol");
    return 0;

}*/
 