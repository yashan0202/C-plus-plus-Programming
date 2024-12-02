#include<stdio.h> 

int main()
{
    int num = 10; 
    int *ptr = &num; // referencing operation 

    printf("num = %d",num); // 10 

    //Dereference operator -> * ( indirection operator )
    printf("ptr = %d",*ptr);//10  
    /*
            *ptr
            valueat(ptr)
            value(100)
            10  
    */
    return 0;
}
