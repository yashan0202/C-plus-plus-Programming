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
     //Pointer is holding the starting address of array 
    //int *ptr = &arr[0]; //pointer to array 

   //printf("%u " ,arr); //100 
    //printf("ptr + 0 = %u\n",ptr + 0); //100 
    /*
            ptr + 0 
            ptr + n 
            ptr + n * scale factor of ptr 
            100 + 0 * 4 
            100 + 0 
            100 
    */

    //printf("ptr + 1 = %u\n",ptr+1); //104 
    /*
            ptr + 1 
            100 + 1 
            100 + 1 * 4 
            100 + 4 
            104 
    */ 

    printf("*(ptr + 0) = %d\n",*(ptr + 0)); //10 
    /*
            *(ptr + 0)
            *(100 + 0)
            *(100 + 0 * 4)
            *(100 + 0)
            *(100)
            valueat(100)
            10 
    */
     printf("*(ptr + 1) = %d\n",*(ptr + 1));//20 
     /*
            *(ptr + 1)
            *(100 + 1 * scale factor of ptr)
            *(100 + 1 * 4)
            *(100 + 4)
            *(104)
             20 
     */
    return 0;
}

