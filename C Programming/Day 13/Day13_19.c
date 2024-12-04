#include<stdio.h> 

int main()
{
    //int a = 1, b = 2; 
    //printf("%d %d",a,b); 
    
    int num = 10; 
    int *ptr = &num; 

    printf("%d %d",num,++*ptr); 
    //THIS CONCEPT IS CALLED AS CALLING CONVENTION 
    //CDECL calling convention is used here 
    
    return 0;
}
//printf("%d %d %d",a++, ++a, a++); // Compiler dependent question 

// a = a++ + ++a + a++; 