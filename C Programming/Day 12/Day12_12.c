#include<stdio.h> 
int main()
{
    int num = 10; 
    int num2 = 20; 
    int * const ptr = &num; // OK  
    //int * ptr const = &num; // NOT OK 
    //ptr is a constant pointer pointing to non constant integer variable 

    printf("num = %d\n",num); //10 
    printf("*ptr = %d\n",*ptr); //10  
    *ptr = 20; //OK   
    printf("num = %d\n",num); //20 
    printf("*ptr = %d\n",*ptr); //20  
    //ptr = &num2;  // NOT OK ( pointer is constant )
    return 0;
}
