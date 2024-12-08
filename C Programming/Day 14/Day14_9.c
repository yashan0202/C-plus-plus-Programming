#include<stdio.h> 

int main()
{
    int i; 
    int arr[4] = {5,10,15,20}; 
    int *pa[4]; //array of pointers 

    for( i = 0 ; i < 4 ; i++) 
        pa[i] = &arr[i]; 

    for(i = 0 ; i < 4 ; i++)
       printf("%d ",*pa[i]);     

    return 0;
}
