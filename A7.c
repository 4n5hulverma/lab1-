//area of triangle using heron's formula,  area=sqrt((s*(s-a)*(s-b)*(s-c))
#include <stdio.h> //header file
#include <math.h> //header file for use of maths tools
int main() //main function
{
    //declare variable 
    float a,b,c,s,area;
    printf("enter value:\n");
    scanf("%f %f %f",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt((s)*(s-a)*(s-b)*(s-c)); //heron's formula 
    printf("\narea using heron's forula:%.2f",s);
    return 0;
}
/*   
//area of triangle=(1/2)*b*h
#include <stdio.h>  //header file
int main() //main function
{
    //declaare variabel of base and height
    float b,h;
    printf("enter the base:");
    scanf("%f",&b);
    printf("\nenter the height:");
    scanf("%f",&h);
    float A=(b*h)/2 ;
    printf("\n area of triangle :%.2f",A);
    return 0;
}    */