#include<stdio.h> 

int addition(int a , int b); //function declaration 

int main() //user-defined function 
{
    int num1 = 10 , num2 = 20 , ans ; 
    //num1 and num2 are called as local variables 
    ans = addition(num1,num2); // function call 
    //num1 and num2 are called as actual arguments 
    printf("ans = %d",ans); //30 
    return 0;
}
//actual arguments are copied into formal arguments 
//main function --> calling function 
//addition function ---> called function
//int => return type ---> int 
//actual argument and formal arguments type must be same
//function defination    
int addition(int a , int b){
    //a , b , z are local variables 
    int z; 
    z = a + b; //10 + 20 ==> 30 
    return z; 
}
/*
    int addition(int a, int b); 
    int -> return type 
    a,b => formal arguments 
*/
