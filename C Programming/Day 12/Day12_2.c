#include<stdio.h> 

int main()
{
    int num = 10; 
    int *ptr = &num; 
    int **pptr = &ptr; 

    printf("num = %d\n",num);//10 
    printf("*ptr = %d\n",*ptr); //10 
    //*ptr -> valueat(ptr) ->valueat(100) -> 10 

    printf("**pptr = %d\n",**pptr); //10 
    /*
           **pptr
           valueat(valueat(pptr));
           valueat(valueat(500))
           valueat(100)
           10    
    */
    printf("*pptr = %u\n",*pptr); //100  
    /*
        *pptr
        valueat(pptr)
        valueat(500)
        100
    */
   printf("&num = %u\n",&num); //100  
    return 0;
}
