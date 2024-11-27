#include<stdio.h> 

int main()
{
    // int ans; 
    // int a = 0; 
    // int b = 1; 
    // int c = 0; 
    // ans = a++ && b++   || c++; 
    // //    (a++ && b++) || c++; 
    // //    (F++ && XXX) ||
    // //        F        || F++
    // //              F   

    // printf("a = %d b = %d c = %d ans = %d ",a,b,c,ans);
    // //                                      1,1,1,0 

    // int ans; 
    // int a = 1; 
    // int b = 1; 
    // int c = 0; 
    // ans = a++ && b++   || c++; 
    // //    (a++ && b++) || c++; 
    // //    (T++ && T++) ||
    // //        T        || XXX
    // //              T  
    

    // printf("a = %d b = %d c = %d ans = %d ",a,b,c,ans);
    // //                                      2,2,0,1

    // int ans; 
    // int a = 1; 
    // int b = 1; 
    // int c = 0; 
    // ans = a++ || b++  && c++; 
    // //    a++ || (b++  && c++); 
    // //    T++ ||  XXX
    // //        T  

    // printf("a = %d b = %d c = %d ans = %d ",a,b,c,ans);
    // //                                      2,1,0,1


    // int ans; 
    // int a = 1; 
    // int b = 1; 
    // int c = 0; 
    // ans = a++ || b++  ||   c++; 
    // //   ( a++ || b++ ) || c++; 
    // //   ( T++ || XX ) || 
    // //         T       || XXX
    // //             T   

    // printf("a = %d b = %d c = %d ans = %d ",a,b,c,ans);
    // //                                      2,1,0,1


    int ans; 
    int a = 1; 
    int b = 1; 
    int c = 0; 
    ans = a++ && b++  &&  c++; 
    //    (a++ && b++)  &&  c++; 
    //    (T++ && T++)  && 
    //          T       &&  F++ 
    //                  F

    printf("a = %d b = %d c = %d ans = %d ",a,b,c,ans);
    //                                      2,2,1,0


    return 0;
}
