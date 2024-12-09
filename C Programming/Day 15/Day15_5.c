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
    
    printf("\n"); 
    int *ptr[3] = {arr , arr + 1 , arr + 2 };
    //             100    112      124 

    //array notation 
    // printf("%u ",ptr[0]); //100
    // printf("%u ",ptr[1]); //112
    // printf("%u ",ptr[2]); //124

    // pointer notation 
    // printf("%u ",*(ptr + 0) ); //100 
    // printf("%u ",*(ptr + 1) ); //112
    // printf("%u ",*(ptr + 2) ); //124 

    // printf("%u ",*(*(ptr + 0) )  ); //1
    // printf("%u ",*(*(ptr + 1) ) ); //4
    // printf("%u ",*(*(ptr + 2) )  ); //7

    //printf("%u ",*(ptr + 0) + 1  ); //104 
    // pointer notation 
    //printf("%u ",*(*(ptr + 0) + 1 )  ); //*104 => 2  

    //array notation 
    //printf("%u ",ptr[0][1] ); //2 

    printf("%u ",*(ptr + 2) + 1  ); //128
    printf("%u ",*(*(ptr + 2) + 1)  ); //*128 => 8 
    printf("%u ",ptr[2][1]); // 8 array notation  
    return 0; 
}