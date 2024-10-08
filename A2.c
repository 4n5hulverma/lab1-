//find average and percentage of 5 subject marks

#include <stdio.h> //header file
int main()
{
    //define variables for physics,chemistry,maths,artificial intelligence,total marks and mean
    float p,c,m,e,ai,T,n;
    printf("enter the marks:\n");
    scanf("%f %f %f %f %f",&p,&c,&m,&e,&ai);
    T=p+c+m+e+ai; //sum of marks 
    n=T/5; //mean or average of marks 
  
    printf("mean: %f",n); 
    float pe=T/500*100; //percentage=(total marks/500)*100
    printf("\nPer: %f",pe);
    
    return 0;
}