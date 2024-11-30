#include<stdio.h> 
int sqr(int n); 
int main()
{
    int res;
    ///int sqr(int n );// local  declaration 
    res = sqr(2); // function call  
    printf("%d",res); 
    return 0;
}
int sqr(int n) // function defination 
{
    return n * n; 
}

// int sqr(int n) // function defination 
// {
//     return n * n; 
// }
// int main()
// {
//     //catching value from the function is optional 
//     int res;
//     printf("%d ",sqr(2)); 
//     return 0;
// }
// int sqr(int n) // function defination 
// {
//     return n * n; 
// }
// int main()
// {
//     //catching value from the function is optional 
//     int res;
//     sqr(2); // function call  
//     return 0;
// }
// int sqr(int n) // function defination 
// {
//     return n * n; 
// }
// int main()
// {
//     int res;
//     res = sqr(2); // function call  
//     printf("%d",res); 
//     return 0;
// }

// int sqr(int n ); // global declaration 
// int main()
// {
//     int res;
//     ///int sqr(int n );// local  declaration 
//     res = sqr(2); // function call  
//     printf("%d",res); 
//     return 0;
// }
// int sqr(int n) // function defination 
// {
//     return n * n; 
// }

// int sqr(int); // declaration ( type checking )
// int main()
// {
//     int res; 
//     res = sqr(2); // function call  
//     printf("%d",res); 
//     return 0;
// }
// int sqr(int n) // function defination 
// {
//     return n * n; 
// }

// int sqr(int n); // declaration 
// int main()
// {
//     int res; 
//     res = sqr(2); // function call  
//     printf("%d",res); 
//     return 0;
// }
// int sqr(int n) // function defination 
// {
//     return n * n; 
// }
