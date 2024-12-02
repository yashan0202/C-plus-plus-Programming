#include<stdio.h> 
int main()
{
    int num = 10; 
    int *ptr = &num; // referencing 
    printf("num = %d\n",num); // 10 
    printf("*ptr = %d\n",*ptr); //10 
    /*
            *ptr
            valueat(ptr)
            valueat(100)
            10 
    */
    *ptr = 20; 
    printf("num = %d\n",num); // 20 
    printf("*ptr = %d\n",*ptr); //20 
    /*
            *ptr 
            valueat(100)
            20 
    */ 
    num = 50; 
    printf("num = %d\n",num); // 50 
    printf("*ptr = %d\n",*ptr); //50

    *ptr = 60;  
    printf("num = %d\n",num); // 60 
    printf("*ptr = %d\n",*ptr); //60
    return 0;
}
