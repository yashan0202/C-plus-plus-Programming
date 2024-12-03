#include<stdio.h> 

int main()
{
    int num = 10; 
    int *ptr = &num; 
    int **pptr = &ptr; 

    printf("num = %d\n",num);//10 
    printf("*ptr = %d\n",*ptr);//10

    printf("**pptr = %d\n",**pptr);//10 

     **pptr = 30; 
    printf("num = %d\n",num);//30 
    printf("*ptr = %d\n",*ptr);//30

    printf("**pptr = %d\n",**pptr);//30 
    /*
        **pptr 
        valueat(valueat(pptr))
        valueat(valueat(500))
        valueat(100)
        30 
    */
    return 0;
}
