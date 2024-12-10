#include<stdio.h> 
int* fun( ); 
int main()
{
    int *p; 
    p = fun( ); 
    printf("%d ",*p); 
    return 0;
}
int* fun( )
{
    static int n = 10;//local variable  
    return &n; 
}

// int* fun( ); 
// int main()
// {
//     int *p; 
//     p = fun( ); 
//     printf("%d ",*p); 
//     return 0;
// }
// int* fun( )
// {
//     int n = 10;//local variable  
//     return &n; 
// }
