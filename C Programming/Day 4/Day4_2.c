#include<stdio.h> 

int main()
{
    //unsigned => only positive 
    unsigned int num = 4294967295;
    /*
        unsigned int num => 4 bytes => 32 bits 
        (2 to the power 32)  - 1 
         max range => 4294967295
    */ 
   //unsigned => %u (format specifier)
   printf("%u ",num); 
    return 0;
}
