#include<stdio.h> 
int main()
{
    int a = 10; 
    int *p = &a; 
    int *q; 
    q = p; 
    printf("%d",*p); 

    printf("%d",*q); 
    return 0;
}
