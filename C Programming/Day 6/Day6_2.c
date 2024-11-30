#include<stdio.h> 

int main(int argc, char const *argv[])
{
    //Logical AND => && 
    // 1 => T 
    // 0 => F

    /*
        opr1    opr2  result 
         1       1      1
         1       0      0 
         0       1      0 
         0       0      0 
    */
    // printf("%d ", 10 && 13); //1 
    // //            T &&  T ==> T  
    
    // printf("%d ", 10 && 0); //0  
    // //             T && F // F  

    // printf("%d ", 0 && 44); //0      
    // //            F && T // F
    
    // printf("%d ", 0 && 0); //0
    // //            F && F => F   

    //Logical OR => || 
    // 1 => T 
    // 0 => F

    /*
        opr1    opr2  result 
         1       1      1
         1       0      1 
         0       1      1 
         0       0      0 
    */
     printf("%d ", 10 || 13); //1 
    // //            T ||  T ==> T  
    
    printf("%d ", 10 || 0); //1  
    // //             T || F // T  

    printf("%d ", 0 || 44); //1      
    // //            F || T // T
    
    printf("%d ", 0 || 0); //0
    // //            F || F => F  
    return 0;
}
