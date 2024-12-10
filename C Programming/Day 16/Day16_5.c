#include<stdio.h> 
#include"Day16_5.h"

//main => user-defined function 
int main()
{
    double rad , area; 

    printf("Enter the radius "); 
    scanf("%lf",&rad); 

    area = PI * rad * rad;
    printf("area = %.2lf",area);  
    return 0;
}
//gcc Day16_5.c -E -o Day16_5.i