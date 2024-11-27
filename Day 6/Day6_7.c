#include<stdio.h> 

int main(int argc, char const *argv[])
{   
    //Bitwise opr 
    //left shift and right shift 
    // ( << , >> )
    int ans = 10 << 2; 
    /*
            0000  1010 
               <<2 (left shift by 2 )
            0010  1000 ( 40 ) 

            left shift 
            multiply by 2 to the power n 
                10  * 2 to the power 2 
                10 * 4 
                40 
    */
    int ans1 = 10 >> 2; 
    /*
         >> ( right shift operator)
         
         0000  1010 
            >>2 
         0000  0010 //decimal => 2    

         right shift 
        divide by 2 to the power n 
            10  / 2 to the power 2 
            10 / 4 
            2  
    */
    printf("%d ",ans1); 
    return 0;
}
