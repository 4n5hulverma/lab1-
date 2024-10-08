//convert sec in hour,day min
#include<stdio.h>  //header file
int main()
{
    //declare variable for day,hour and minute
    int d,h,m,s=31558150;
    
    d=s/86400; //total sec in 1 day is 60*60*24
    printf("\n day:%d",d);
    h=(s-d*86400)/3600; //total sec in 1 hour is 60*60
    printf("\n hour:%d",h);
    m=(s-d*86400-h*3600)/60; //total sec in 1 ,min is 60
    printf("\n min:%d",m);
    //display in form of d:h:m
    printf("\nday:hour:min=%d:%d:%d",d,h,m);
    return 0;
    
}