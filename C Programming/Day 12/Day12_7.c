#include<stdio.h> 

int main()
{
    int num1 = 10; 
    int num2 = 20; 

    int *ptr1 = &num1; 
    int *ptr2 = &num2;
    int ans; 

    //ans = ptr1 + ptr2;  //NOT OK 
    //ans = ptr1 * ptr2;  //NOT OK 
    //ans = ptr1 / ptr2;  //NOT OK 
    //ans = ptr1 % ptr2;  //NOT OK 
     ans = ptr1 - ptr2;  //OK 
    
    ans = *ptr1 + *ptr2;  
    //      10  + 20 
    //       30 
    //printf("%d",ans); //30 
    
    //ptr1 = ptr1 + 1; // OK 
    // ptr1++; 

    //ptr1 = ptr1 - 1; // OK 
    //ptr--; 
    
    //ptr1 = ptr1 * 1 ; // NOT OK 
    //ptr1 = ptr1 / 1 ; // NOT OK 
    return 0;
}
