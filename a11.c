/*PROGRAM TO READ TOTAL SECOND CONVERT IT INTO TIME*/

#include<stdio.h> // HEADER FILE
int main()
{
    // declare variable hour,min,sec
    int num,H,M,S;
    printf("enter number:"); //enter large number for better output 
    scanf("%d",&num);
    //let num=sec
    //calculate hour,min and second 
    H=num/3600;//total sec in 1 hour is 60*60
    M=(num-(H)*3600)/60; //total min in 1 min is 60
    S=num-(M)*60-(H)*3600;
    
    int Ts=(H*3600)+(M*60)+S ;
    printf("\ntotal sec:%d",Ts);
    // TIME IN HOUR:MINUTE:SECOND
    printf("\nTime \nH:M:S=%d:%d:%d",H,M,S);
    
    return 0;
}