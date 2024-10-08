//program to read marks of five subjects and print division 

#include <stdio.h> //header file
int main() // main function
{
    int m,c,p,e,ai;  //define variables of subject maths,chemitry,physics,english and Ai
    printf("enter marks of maths:");
    scanf("%d",&m);
    printf("\nenter marks of chemistry:");
    scanf("%d",&c);
    printf("\nenter marks of physics:");
    scanf("%d",&p);
    printf("\nenter marks of english:");
    scanf("%d",&e);
    printf("\nenter marks of AI:");
    scanf("%d",&ai);
    float avg=(m+c+p+e+ai); //avg of total marks marks 
    float PER=(avg/500)*100; //percentage of total marks 
    printf("\nPERCENTGE:%f\n",PER);

    //for division per>=60 "first division",50=<per<60 "second division",40=<per<50 "third division"

    if (PER>=60)
    {
        printf("first division with %f percentage:",PER);
    }
    else if (PER>=50 && PER<60)
    {
        printf("second division with %f percentage:",PER);

    }
    else if (PER>=40 && PER<50)
    {
        printf("third division with %f percentage :",PER);
    }
    else
    {
        printf("you are fail");
    }
    return 0;
}