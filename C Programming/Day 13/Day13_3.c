#include<stdio.h> 
//int arr[5]; // Global 
int main()
{   
    int n1=1,n2=2,n3=3,n4=4,n5=5; 
    //array 
     int arr[5] = {11,22,33,44,55}; //init-list 
    //int arr[5] = {11}; //partial init (rest ele are init to 0)
    //int arr[5]; //uninit --local array (garbage)
    //int arr[5] = {11,22,33,44,55,66,77,88}; //NOT OK
    //int arr[] = {11,22,33,44,55}; //init-list  
      //int arr[]; // NOT OK 
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
    //printf("%d %d %d",arr[0],arr[2],arr[4]); // 11 33 55 

    int index; 
    for(index = 0 ; index < 5 ; index++)
        printf("%d ",arr[index]); 
    return 0;
}
