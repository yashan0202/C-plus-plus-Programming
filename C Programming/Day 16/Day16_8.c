#include<stdio.h> 
#define SWAP(a,b,type) { type t = a; a = b; b = t; }

int main( )
{
    float a,b; 
    a = 1.1f; 
    b = 2.1f; 
    SWAP(a,b,float);
    printf("%.1f %.1f",a,b);   
    return 0; 
}

// { 
//     float t = a; 
//     a = b; 
//     b = t; 
// }