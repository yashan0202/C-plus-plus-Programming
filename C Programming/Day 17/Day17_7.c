#include<stdio.h> 
#pragma pack(1) 

// struct A 
// {
//     int a; // 4 byte 
//     char b; // 1 byte 
// }; // 5  

// struct A 
// {
//     int a; // 4 byte 
//     char b; // 1 byte 
//     int c; // 4 byte 
// }; // 9  

struct A 
{
    int a; // 4 byte 
    char b; // 1 byte 
    double d1; // 8 bytes
    int c; // 4 byte 
}; //17 

// 8 16 24 32 


// 4 8 12 16 
int main()
{
    printf("%d ",sizeof(struct A)); 
    return 0;
}
