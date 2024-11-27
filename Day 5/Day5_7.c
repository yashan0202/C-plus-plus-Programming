#include<stdio.h> 
int main()
{
    //Arithmetic operators 
    // + , - , * , % , / 
    // binary operators 

    // / => quotient 
    //printf("%d",1234 / 10); //123   
    // % => remainder => modulus operator 
    // % => only works with int types  

    //printf("%d ", 1234 % 10); // 
    
    // % operator takes sign of numerator 
    printf("%d " , 4 % 3);//1 
    printf("%d " , -4 % 3);//-1 
    printf("%d " , 4 % -3);//1
    printf("%d " , -4 % -3);//-1  
    return 0;
}
