#include<stdio.h> 

int main( ){
    int a; 
    float b; 

    a = 23 / 5; //int / int => int 
    //RHS => int 
    //LHS => int 
    //23 / 5 => 4.6 => 4  
    //printf("%d",a); 

    b = 23 / 5; // int / int => int 
    //RHS => int => 4.6 => 4   
    //LHS =>float 
    // 4.00 <= 4
    //printf("%.2f",b);  
    
    b = 23.0f / 5; // float / int => float 
    //RHS => 4.6 => float 
    //float<=float 
    printf("%.2f",b);  
    return 0; 
}
/*
    if 2 operands are of diff types then smaller type 
    is promoted to larger type for calculation 
    
    double
    float
    int 
    char

    int + int => int 
    int + double => double 
    double + float => double 
    char * int => int 
    int / float => float 
    short / int => int  


    char and short are promoted to "int" for 
    arithmatic calculation 

    char + char => int 
    short + short => int 
    char + short => int 

    typecasting 
    (float)23 => 23 is a integer but consider it as a float for this 
    calcuation 

*/