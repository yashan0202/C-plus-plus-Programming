#include<stdio.h> 
//int arr[5]; // Global 
int main()
{   
    int n1=1,n2=2,n3=3,n4=4,n5=5; 
    //array 
    int arr[5] = {10,20,30,40,50}; //init-list 
    
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

    //printf("%u " ,arr); //100  
    //printf("arr + 0 = %u\n" ,arr + 0); //100  

    //printf("arr + 1 = %u\n",arr + 1); //104 
    /*
        arr + 1
        100 + 1 
        100 + 1 * 4 
        104  
    */
    //printf("arr + 2 = %u\n",arr + 2);//108  
    /*
         arr + 2
         100 + 2 
         100 + 2 * 4 
         100 + 8 
         108  
    */

    printf("*(arr+0) = %d\n", *(arr + 0) );//10 
    /*
            *(arr + 0)
            *(100 + 0)
            *(100 + 0 * 4)
            *(100 + 0)
            *(100)
            valueat(100)
            10 
    */ 
    printf("*(arr+1) = %d\n", *(arr + 1) );//20
    /*
            *(arr + 1)
            *(100 + 1)
            *(100 + 1 * 4)
            *(100 + 4)
            *(104)
            valueat(104)
            20 
    */ 

   /*
          Array-notation                      Pointer notation 
           arr[i]  =======> Compiler ======>  *(arr + i )  

           arr[1]  =======> Compiler ======>  *(arr + 1) 
           arr[2]  =======> Compiler ======>  *(arr + 2)
   
   
   */
    return 0;
}

