#include<stdio.h> 
int main()
{
    // int ans; 
    // int num1 = 11; 
    // int num2 = 33;
    // ans = num1 && ++num2;  
    // //      T  &&  ++T => T 
    // //          T
    // printf("ans = %d num1 = %d num2 = %d",ans,num1,num2);
    // //                                      1   11  34 

    // int ans; 
    // int num1 = 0; 
    // int num2 = 0;
    // ans = num1 && ++num2;  
    // //      F  &&  XXX
    // //         F  

    // printf("ans = %d num1 = %d num2 = %d",ans,num1,num2);
    // //                                      0   0  0 

//     int ans; 
//     int num1 = 0; 
//     int num2 = 0;
//     ans = ++num1 && ++num2;  
//    //    ++F=>T  && ++F=>T 
//    //           T
//     printf("ans = %d num1 = %d num2 = %d",ans,num1,num2);
//     //                                      1   1  1 

    // int ans; 
    // int num1 = 0; 
    // int num2 = 0;
    // ans = num1++ && ++num2;  
    // //      F++ &&   XXX
    // //          F

    // printf("ans = %d num1 = %d num2 = %d",ans,num1,num2);
    // //                                      0   1  0 

    int ans; 
    int num1 = 0; 
    int num2 = 0;
    ans = num1++ || ++num2;  
    //      F++  || ++F=>T
    //          T

    printf("ans = %d num1 = %d num2 = %d",ans,num1,num2);
    //                                      1   1  1 
    return 0;
}
