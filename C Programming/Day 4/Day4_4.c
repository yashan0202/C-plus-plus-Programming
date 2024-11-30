#include<stdio.h> 
int main()
{
    //char ch = 'A'; // signed  
    signed char ch = 127; // signed 
    /*
            char => 1 bytes 
            1 bytes = 8 bits 
            (2 to the power 8 - 1 ) - 1 
            (2 to the power 7 ) - 1
            128 - 1 
            127 => max range  
            -128 => min range 
    */ 
   //printf("%d ",ch); 
    
    unsigned char ch1 = 255; 
    /*
         unsigned char => 1 bytes 
         1 byte => 8 bits 
         (2 to the power 8) - 1 
         256 - 1 
         255 => max range 
         0 => min range    
    
    */
    printf("%u " ,ch1); //unsigned 
    return 0;
}
