#include<stdio.h> 
int arr[3][3]; // Global 
int main()
{
    //2D array 
    int arr[3][3] = {1,2,3,4,5,6,7,8,9}; //init list 

    //int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}}; //OK 
    //int arr[3][3] = {{1,2},{4},{7,8}}; // partial init --> rest ele are 0 
    //int arr[3][3] = {1}; // partial init --> rest ele are 0 
    //int arr[3][3]; //local array --- un-init-array -> garbage 
      
    //int arr[][3] = {1,2,3,4,5,6,7,8,9}; // OK 
    //int arr[3][] = {1,2,3,4,5,6,7,8,9}; // NOT OK

    //int arr[][3]; //NOT OK 
    //int arr[][] = {1,2,3,4,5,6,7,8,9}; //NOT OK 
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
            printf("%4d",arr[row][col]); 
        }
        printf("\n"); 
    }
    return 0;
}
