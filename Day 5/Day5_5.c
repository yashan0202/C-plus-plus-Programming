#include<stdio.h> 

int main()
{
    //sizeof() is a operator 
    //sizeof() is a evaluated at compile time 

    int num  = 4; 
    char ch = 'A'; 
    double d1; 
    //printf("%d ", sizeof(1+2)); // 4 bytes
    //printf("%d ", sizeof(num + ch)); // 4 bytes 
    //                   int + char => int 
    //printf("%d ", sizeof(11.33 + 'A')); // 8 bytes 
    //                   double + char const (int) => double    
    
    int x = 1; 
    printf("%d \n" , sizeof(x = x + 1)); //no operations are performed inside the sizeof
    //                    int => 4 bytes 
    printf("%d ", x); //1 
    return 0;
}
