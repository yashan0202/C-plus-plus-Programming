#include<stdio.h> 
/*
    calculate area and circumference of  circle 
    PI = 3.1412 
    area = PI * r * r 
    cir = 2 * PI * r 
*/
int main()
{
    //variable declaration
    float area , circumference , radius;  

    //1.Input
    printf("Enter the radius :: "); 
    scanf("%f",&radius); 

    //2.Processing 
    //area = PI * r * r 
    //cir = 2 * PI * r 

    area = 3.1412 * radius * radius; 
    circumference = 2 * 3.1412 * radius; 

    //3.Output 
    printf("Area = %.2f\n",area); 
    printf("Circumference = %.2f",circumference); 
    return 0;
}
