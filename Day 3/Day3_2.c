#include<stdio.h> 

//Complilation starts from line number 1 
//Program execution starts from main( ) 

int main( ){
    //Variable must be declared before its use in the program.
    //C is a typed language 
    //Simple C data types are: int, double,char
    //printf is used to print data / string on terminal 
    int num = 10;  // variable declaration + initialization 
    char ch = 'A';  // variable declaration + initialization 
    double dvar = 13.33; // variable declaration + initialization

    //format specifier 
    // int => %d
    // char => %c 
    // double => %lf
    //printf("%d\n",num); 
    //printf("%c\n",ch); 
    //printf("%.1lf\n",dvar); 
    //%.lf => print upto 2 decimal points 

    printf("dvar = %.2lf,ch = %c,num = %d",dvar,ch,num); 
    //      dvar = 
    
    return 0; 
}