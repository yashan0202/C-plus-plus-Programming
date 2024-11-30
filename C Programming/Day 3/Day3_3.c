#include<stdio.h> 

int main()
{
    int x;//variable declaration 
    int num = 10; //variable declaration + init 
    num = 20; //assignment  
    printf("num = %d\n",num);
    num = 30; 
    num = -11; 
    printf("num = %d\n",num);
    num = 222; 
    printf("num = %d\n",num);
    return 0;
}
/*  
    
    int x = 10; // NOT OK 
    int x = 20; // NOT OK 

    Initialization can be done only once 


    Assignment can be done multiple number of times 
    int x = 10; // var declaration + init 
    x = 20; //assignment 
    x = 30; //assignment 


*/