#include<stdio.h> 
int main( ){
    int num = 10; 
    int *ptr; // declaration of pointer   
    //ptr is a pointer to a integer 
    //ptr will be going to store the address of int variable 

    ptr = &num; //referencing operation 

    printf("num = %d\n",num);//10 
    printf("&num = %d\n",&num);//100 

    printf("ptr = %u\n",ptr); //100  
    printf("&ptr = %u",&ptr); //100  

    return 0; 
}
/*
    It is not compatible with unsigned int.
    int *ptr = 100; 
*/
