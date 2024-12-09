#include<stdio.h> 
//int arr[3][3]; 
int main( )
{
    //2D array 
     int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    
    /*
        arr 
                [0]    [1]    [2]

        [0]      1      2      3  
        100     100    104    108  

        [1]      4      5      6 
        112     112    116    120    
 
        [2]      7      8      9 
        124     124    128    132  

     
    */ 
    
    
    int row , col;

    for(row = 0 ; row < 3 ; row++)
    {
        for(col = 0 ; col < 3 ; col++)
        {
            printf("%u ",&arr[row][col]); 
        }
        printf("\n"); 
    } 
    printf("\n"); 
    // name of array represents the base address 
    //printf("%u ",arr + 0); //100 

    // outer address 
    //printf("%u ",arr + 1 ); //112  
    /*
            arr + 1 
            100 + 1 * 12 
            112 
    */   
   //printf("%u ",arr + 2 ); //112 
   /*
            arr + 2 
            100 + 2 * 12 
            124  
    */ 
    //inner addresses 
    //printf("%u ",*(arr + 0) ); //110 
    printf("%u ",arr[0] ); //110 

    //printf("%u ",*(arr + 1) ); //112
      printf("%u ",arr[1]); //110   

    //printf("%u ",*(arr + 2)); //124 
    printf("%u ",arr[2]); //110   
    return 0; 
}