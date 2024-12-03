#include<stdio.h> 

int main()
{
    //pointer arithmatic 
    int num = 10; 
    int *ptr = &num; 
    printf("&num = %u\n",&num);//100  
    printf("ptr = %u\n",ptr);//100  

    ptr = ptr + 1;
    /*
          ptr + n 
          ptr + n * scale factor of ptr 
          100 + 1 * 4 
          100 + 4 
          104 
    */ 
    printf("ptr + 1 = %u\n",ptr);//104  
    ptr--; //ptr = ptr - 1;   
    /*
        ptr = ptr - 1 
            = 104 - 1 
            = 104 - 1 * 4 
            = 104 - 4 
            = 100 
    */
   printf("ptr - 1 = %u\n",ptr);//100
   printf("*ptr = %u\n",*ptr);//10   
    return 0;
}
/*
    char ch = 'A'; 
    char *cptr = &ch; 

    cptr = cptr + 10; 
           100 + 10 * 1 
           110 

    double dvar = 12.33; 
    double *dptr = &dvar; 

    dptr = dptr + 5
         = 100 + 5 * scale factor of dptr 
         = 100 + 5 * 8 
         = 100 + 40 
         = 140            
*/