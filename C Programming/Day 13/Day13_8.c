#include<stdio.h> 
//int arr[5]; // Global 
int main()
{   
    //int n1=1,n2=2,n3=3,n4=4,n5=5; 
    //array 
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

    
    //printf("%u ",*arr);//valueat(100) => 10 

    //printf("%u ",*arr + 10);//20 
    //            10  + 10 ==> 20 
    
    printf("%d",arr[-1]); 
    /*
            arr[-1]

            *(arr + -1)
            *(arr - 1 )
            *(100 - 1)
            *(100 - 1 * 4)
            *(100 - 4)
            *(96)
            valueat(96)
            Garbage 
    */
    return 0;
}

