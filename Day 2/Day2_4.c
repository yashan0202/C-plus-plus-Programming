#include<stdio.h> 

int main( )
{
    printf("Program execution started ....\n"); 
    printf("execute..\n");
    printf("execute..\n");
    printf("execute..\n");
    int num;
    num = 4 / 0;// (runtime error )
    printf("num = %d\n",num); 
    printf("Program end...\n");  
    return 0; 
}