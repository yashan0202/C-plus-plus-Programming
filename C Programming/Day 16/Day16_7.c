#include<stdio.h> 

#define ADD(a,b) (a+b)
#define MULTIPY(a,b) (a*b)
#define SQR(x) ((x) * (x))

int main( )
{
    printf("%d \n",ADD(3,4)); // 7 
    //printf("%d ",(3+4));

    printf("%d \n",MULTIPY(3,4)); //12    
    //printf("%d \n",(3*4));   

    printf("%d \n",MULTIPY(2+1,3+1)); //6
    //printf("%d \n",(2+1*3+1)); //6

    printf("SQR = %d",SQR(2+3)); //25 
    //printf("SQR = %d",((2+3) * (2+3))); 
    return 0; 
}