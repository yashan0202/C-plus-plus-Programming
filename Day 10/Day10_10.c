#include<stdio.h> 
void fun1( ); 
void fun2( ); 
extern int num1; 
int main()
{
    //extern int num1;//declaration 
    printf("%d",num1); 
    fun1( ); 
    fun2( );  
    return 0;
}
void fun1( ){
    //extern int num1; //declaration 
    printf("%d",num1);  
}
void fun2( ){
    //extern int num1; //declaration 
    printf("%d",num1); 
}
int num1 = 10; 