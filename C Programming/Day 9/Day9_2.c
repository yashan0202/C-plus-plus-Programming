#include<stdio.h> 

int addition(int a , int b); //function declaration 

int main() //user-defined function 
{
    int num1 = 10 , num2 = 20 , ans ; 
    ans = addition(num1,num2); // function call 
    printf("ans = %d",ans); //30 
    ans = addition(50,50); 
    printf("ans = %d",ans); //
    ans = addition(30,30);  
    printf("ans = %d",ans); //
    return 0;
}
//function defination 
int addition(int a , int b){
    //a , b , z are local variables 
    int z; 
    z = a + b; //10 + 20 ==> 30 
    return z; 
}

