#include<stdio.h> 
int main()
{
    int num = 10; 
    int num2 = 20; 
    int *ptr = &num; //referencing 

    printf("num = %d\n",num); //10 
    printf("*ptr = %d\n",*ptr); //10 
    printf("*ptr = %d\n",ptr); //100
    printf("&num = %u\n",&num); //100   

    ptr = &num2;
    printf("&num2 = %u\n",&num2); //200 
    printf("ptr = %d\n",ptr); //200
    printf("*ptr = %d\n",*ptr); //20
    /*
        *ptr 
        valueat(200)
        20 
    */ 
    *ptr = 30; 
    printf("num2 = %d\n",num2); //30 
    printf("*ptr = %d\n",*ptr); //30
    return 0;
}
