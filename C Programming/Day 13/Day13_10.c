#include<stdio.h> 
int main()
{   
    
    int arr[5] = {10,20,30,40,50}; //init-list 
    
    /*
          array index starts from 0 to n-1   

        arr

           10   20   30   40   50 
           [0]  [1]  [2]  [3]  [4]
           100  104  108  112  116 

           arr[0] => 11 
           arr[2] => 33 
           arr[4] => 55 
    
    */
//The array name is treated as address of 0th element in any runtime expression   
//Name of array represents the base address ( starting address )

    int *ptr = arr; //pointer to array 

    //pointer notation 
    //printf("%d ", ptr + 0); //100 

    //Pointer notation 
    // printf("%d ", *(ptr + 0) ); //10 
    // printf("%d ", *(0 + ptr) ); //10
    // printf("%d ", *(ptr + 1 - 1) ); //10  

    //Array notation 
    //printf("%d ",ptr[0]);//10
    //printf("%d ",0[ptr]);//10 
    //printf("%d ",ptr[1-1]); //10 

    //printf("%d ", *ptr + 10); 
    //             10  + 10 => 20  
    
    
    printf("%d " ,ptr[-1]); 
    /*
            *(ptr + -1)
            *(ptr - 1)
            *(100 - 1 )
            *(100 - 1 * 4)
            *(100 - 4)
            *(96)
            valueat(96)
            Garbage
    */
    return 0;
}

