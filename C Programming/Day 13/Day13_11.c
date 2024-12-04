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

    int *ptr1 = &arr[4]; //116 
    int *ptr2 = &arr[0]; //100 
    int ans; 
    ans = ptr1 - ptr2; 
    /*
        ptr1 – ptr2 =>
              (ptr1 – ptr2) / scale factor of ptr1 
              (116 - 100) / 4 
                16 / 4
                  4 
    */
    printf("ans = %d",ans); // 4 
    return 0;
}

