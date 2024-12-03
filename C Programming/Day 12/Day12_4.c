#include<stdio.h> 
int main( )
{
    int num = 10; 
    int *ptr = &num; 

    char ch = 'A'; 
    char *cptr = &ch; 

    float fvar = 11.3f; 
    float *fptr = &fvar; 

    double dvar = 10.3; 
    double *dptr = &dvar; 

    //printf("%d %c %.2f %.2lf",*ptr,*cptr,*fptr,*dptr); 

    printf("%d " ,sizeof(*ptr));//4 bytes 
    printf("%d " ,sizeof(*cptr));//1 bytes  
    printf("%d " ,sizeof(*fptr));// 4 bytes 
    printf("%d " ,sizeof(*dptr));// 8 bytes 
}
/*
    printf("%d " ,sizeof(*cptr));//1 bytes --------> scale factor 

    printf("%d " ,sizeof(cptr));//1 bytes --------> size of pointer
    //   4 / 8 bytes 
*/