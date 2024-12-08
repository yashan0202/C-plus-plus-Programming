#include<stdio.h> 
int arr[3][3]; // Global 
int main()
{
    //2D array 
    int arr[3][3] = {1,2,3,4,5,6,7,8,9}; //init list 

    //printf("%d ",sizeof(arr)); // 9 * 4 => 36 
    //printf("%d ",sizeof(arr[0][0])); // 4 * 1 => 4 
    printf("%d ",sizeof(arr[0])); // 4 * 3 => 12 
    
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

    
    return 0;
}
