#include<stdio.h> 
int main(int argc, char const *argv[])
{
    /*
        type modifier 
        signed 
        unsigned 
        short 
        long 
    
    */
    //int num = -10; // by default it is signed  
    signed int num = 2147483647; //same as above 
    /*
            int => 4 bytes ( 32 bits )
            (  2 to the power 32 - 1) - 1
            (  2 to the power 31) - 1 
            2147483648 - 1 
            2147483647 => max range 
            -2147483648 => min range 
    */
    printf("%d ",num); 
    return 0;
}
