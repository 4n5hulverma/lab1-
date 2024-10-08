/* write  a program to cslculate the cut off marks of a student using the formula 
CM=M/2+P/2+C/2+E */

#include<stdio.h>  //header file 
int main ()   //main function
{
    int M,P,C,E; //declare variables of subjects 
    printf("enter marks:");
    scanf("%d",&M); //M=marks in mathematics out of 200
    printf("enter marks:");
    scanf("%d",&C); //C=marks in chemistry out of 200
    printf("enter marks:");
    scanf("%d",&P); //P=marks in physics out of 200
    printf("enter marks:");
    scanf("%d",&E); //M=marks in entrance examination out of 100
    float CM=(M/2)+(P/2)+(C/2)+E; //CM=cut off marks
    printf("student cut off marks:%.2f",CM);
    return 0;
    }

