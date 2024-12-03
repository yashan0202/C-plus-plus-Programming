#include<stdio.h> 
void fun(int **p); 
int main()
{
    int n = 10; 
    int *ptr = &n; 
    printf("Before the function call %d\n",n); //10 
    fun(&ptr); 
    printf("After the function call %d\n",n); //20 
    return 0;
}
void fun(int **p)
{
    **p = **p + 10; 
}

// void fun(int *p); 
// int main()
// {
//     int n = 10; 
//     printf("Before the function call %d\n",n); //10 
//     fun(&n); 
//     printf("After the function call %d\n",n); //20 
//     return 0;
// }
// void fun(int *p)
// {
//     *p = *p + 10; 
// }
