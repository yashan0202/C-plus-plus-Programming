#include<stdio.h>

int main(int argc, char const *argv[])
{   
    //sizeof( ) => operator => bytes  
    int num = 10;  // 4 bytes 
    char ch = 'A';  // 1 byte 
    double dvar = 11.33; // 8 bytes 
    float fvar = 12.33; // 4 bytes 

    //why %d => because sizeof() prints as integer ( 4 , 1 , 8) 
    printf("%d ",sizeof(num));// 4
    printf("%d ",sizeof(ch));// 1 
    printf("%d ",sizeof(dvar));// 8
    printf("%d ",sizeof(fvar));// 4   
    return 0;
}

/*
    Number system 
    Decimal number system 
    Binary number system 
    octal number 
    hexadecimal number 
    (Conversion)


    1s Compliment 
    2s Compliment 
    Binary addition 

*/