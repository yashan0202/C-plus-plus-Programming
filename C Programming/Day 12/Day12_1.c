#include<stdio.h> 
int main()
{
    int num = 10; 
    int *ptr = &num; //referencing 
    int **pptr = &ptr; // pointer to pointer   
//pptr is a pointer holding the address of another int pointer 
//pptr is pointer which is storing the address of a pointer to int 
    
    printf("num = %d\n",num); //10 
    printf("&num = %u\n",&num); //100
    printf("ptr = %u\n",ptr); //100 

    printf("&ptr = %u\n",&ptr); //500
    printf("pptr = %u\n",pptr); //500 
    printf("&pptr = %u\n",&pptr); //700   
    return 0;
}
/*
    int a = 10; 
    int *ptr = &a; 
    int **pptr = &ptr; 
    int **  *ppptr = &pptr; 

*/