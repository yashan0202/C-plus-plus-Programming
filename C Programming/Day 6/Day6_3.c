#include<stdio.h> 

int main()
{
    // int ans; 
    // int num1 = 1; 
    // int num2 = 2;
    // ans = num1 && num2; 
    // //     T   &&  T
    // //        T
    // //        1  
    // printf("ans = %d num1 = %d num2 = %d",ans,num1,num2); 
    // //                                      1   1    2   

    // int ans; 
    // int num1 = 1; 
    // int num2 = 0;
    // ans = num1 && num2; 
    // //     T   &&  F
    // //         F  
    // printf("ans = %d num1 = %d num2 = %d",ans,num1,num2); 
    // //                                      0   1    2  

    // int ans; 
    // int num1 = 0; 
    // int num2 = 1;
    // ans = num1 && num2; 
    // //     0   &&  XXX
    // //       0 
    // printf("ans = %d num1 = %d num2 = %d",ans,num1,num2); 
    // //                                      0   1    2   

    int ans; 
    int num1 = 0; 
    int num2 = 1;
    ans = num1 || num2; 
    //     F   ||  T 
    //         T 
    printf("ans = %d num1 = %d num2 = %d",ans,num1,num2);
    //                                     1   0    1  
    return 0;
}
