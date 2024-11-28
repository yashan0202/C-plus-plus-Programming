#include<stdio.h> 
void display( int result ); 
void addition(int num1 , int num2); 
int accept_num( void ); 
int main()
{
    int num1 , num2 , res; 
    num1 = accept_num(); // function call 
    num2 = accept_num(); // function call 
    addition(num1,num2); 
    return 0;
}
//main ------> addition -------> display 
//main <------ addition <------- display 

void display( int result )
{
    printf("Result = %d",result); 
} 
void addition(int num1 , int num2)
{
    int res; 
    res = num1 + num2;
    display(res); // function call 
    
}
int accept_num( void )
{
    int num; 
    printf("Enter the number :: "); 
    scanf("%d",&num);
    return num; 
}