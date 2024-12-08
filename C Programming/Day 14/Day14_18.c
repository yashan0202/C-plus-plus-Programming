#include<stdio.h> 
int arr[3][3]; // Global 
int main()
{
    //2D array 
    int arr[3][3] = {1,2,3,4,5,6,7,8,9}; //init list 

  
    
    /*
        arr 
                [0]    [1]    [2]
        [0]      1      2      3 
                100    104    108  

        [1]      4      5      6 
                112    116    120     

        [2]      7      8      9 
                124    128    132   

        //Array notation 
        arr[0][1] ==> 2 
        arr[1][2] ==> 6
        arr[2][1] ==> 8  
    
    */
    //printf("%d %d %d",arr[0][1],arr[1][2],arr[2][1]); // 2 6 8 
     int row , col; 

    for(row = 0 ; row < 3 ; row ++){
        for(col = 0 ; col < 3 ; col++){
            printf("%u  ",&arr[row][col]); 
        }
        printf("\n"); 
    }
    printf("\n\n"); 
 //name of array represents the base address / starting address 
    printf("%u ",arr); //base address 
    printf("%u ",&arr[0][0]); //base address
    printf("%u ",&arr); //base address  
    return 0;
}


//char arr[10]; 