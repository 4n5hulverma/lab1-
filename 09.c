/*PROGRAM TO READ TIME IN HR,MIN,SEC AND CONVERT IT INTO TOTAL SECOND*/

#include<stdio.h>   //header file
int main()
{
    // declare variable hour,min,sec
    int num,h,m,s;
    printf("enter number:"); //enter large number for better output 
    scanf("%d",&num);
    //let num=sec
    //calculate hour,min and second 
    h=num/3600;//total sec in 1 hour is 60*60
    m=(num-(h)*3600)/60; //total min in 1 min is 60
    s=num-(m)*60-(h)*3600;
    //display in form of h:m:s
    printf(" hours:min:sec=%d:%d:%d",h,m,s);
    int Ts=(h*3600)+(m*60)+s ;
    printf("\ntotal sec:%d",Ts);
    
    return 0;
}