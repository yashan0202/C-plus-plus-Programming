#include<stdio.h> 
//int arr[5]; // Global 
int main()
{   
    int n1=1,n2=2,n3=3,n4=4,n5=5; 
    //array 
    int arr[5] = {11,22,33,44,55}; //init-list 
    
    /*
          array index starts from 0 to n-1   

        arr

            11  22   33   44    55
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
        printf("%u ",&arr[index]); 
    printf("\n\n");

    printf("%u ",arr);  //name of array  base address--> 100     
    printf("%u ",&arr[0]); // 100 
    printf("%u ",&arr); //100 
    return 0;
}

/*

    int arr[10] = {1}; // 10 * 4 =40 bytes 
    40 bytes => 4 bytes 
    36 bytes --> waste of memory  
*/