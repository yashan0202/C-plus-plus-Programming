#include<stdio.h> 
int main()
{
    char ch = 128; //signed 
    // 127 to -128 
    printf("%d",ch) ; //127 
    return 0;
}

//  -128  -127  -126  -125 -124 ..... 0  1 2 3 4 5 .....127 
// 128 -> -128 
// 129 -> -127 
// 130 -> -126 
// 131 -> -125 