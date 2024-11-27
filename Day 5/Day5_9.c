#include<stdio.h> 

int main()
{
    //comma operator( , )
    int a ; 
    //a = 1,2,3; 
    //a = (1,2,3); 
    a = ( (1,2) , 3 );
    
     
    printf("%d",a); 
    return 0;
}
