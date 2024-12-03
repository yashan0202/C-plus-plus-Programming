#include<stdio.h> 

int main()
{
    const int num = 10; 
    const int num2 = 20; 
    const int * const ptr = &num; 
    //const int const * const ptr = &num; // OK 
 //ptr is a constant pointer pointing to constant integer variable  
    printf("num = %d",num); //10  // OK 
    printf("*ptr = %d",*ptr); //10 // OK 
    
    //num = 20; // NOT OK 
    //*ptr = 20; // NOT OK 
    //ptr = &num2; // NOT OK 
    return 0;
}
