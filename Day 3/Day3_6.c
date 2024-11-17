#include<stdio.h> 
int main()
{
    int num = 10; 
    //printf("          %d",num);    
    //width specifier 
    //printf("%10d",num); // right justified 
    //                 1 0 
    // - - - - - - - - - -  

    //printf("%-10d",num); // left justified 
    // 1 0 
    // - - - - - - - - - - 

    //printf("%010d",num); // right justified
    //  0 0 0 0 0 0 0 0 1 0  
    //  - - - - - - - - - - 

    float fvar = 12.33; 
    //%f=>float 
    //printf("%f",fvar); 

    //printf("%10.2f",fvar); // right justified 
    //           1 2 . 3 3  
    // - - - - - - - - - - 

    //printf("%-10.2f",fvar); // left justified
    //  1 2 . 3 3 
    //  - - - - - - - - - -  

    printf("%.f",fvar); //Roundoff => 12.33 => 12 
    return 0;
}
/*
    Discussion should be done on zoom channel 
    MCQ , POLL , ASSIGNMENT 

*/