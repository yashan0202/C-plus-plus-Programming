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

    int index; 
    for(index = 0 ; index < 5 ; index++)
         printf("%d ",&arr[index]); 
    
    printf("\n\n"); 

    printf("arr=%u\n",arr); //100 
    //printf("arr+1=%u\n",arr + 1); //104
    printf("&arr + 1 = %u",&arr + 1); //120  
    return 0;
}

