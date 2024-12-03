#include<stdio.h> 

int main()
{
    const int num = 10; 
    const int num2 = 30; 
    
      const int *ptr = &num; 
    //int  const *ptr = &num; 
    //const int const *ptr = &num; 
//ptr is a non-constant pointer pointing to constant integer variable   
    printf("num = %d",num); // 10 
    printf("*ptr = %d",*ptr); // 10  

    //num = 20; // NOT OK 
    //*ptr = 30; // NOT OK  
    ptr = &num2; //OK 
    return 0;
}
