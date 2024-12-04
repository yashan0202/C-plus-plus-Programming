#include<stdio.h> 
void fun(int *p); 
int main()
{
    int n = 10; 
    printf("Before the call %d\n",n); //10 
    fun(&n); 
    printf("Before the call %d\n",n); //10 
    return 0;
}
void fun(int *p)
{
    *p++; 
}

// void fun(int *p); 
// int main()
// {
//     int n = 10; 
//     printf("Before the call %d\n",n); //10 
//     fun(&n); 
//     printf("Before the call %d\n",n); //11
//     return 0;
// }
// void fun(int *p)
// {
//     ++*p; 
// }
