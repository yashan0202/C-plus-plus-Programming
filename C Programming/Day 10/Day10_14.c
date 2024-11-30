#include<stdio.h> 
int x = 1000; 
int main()
{
    int x = 100; 
    {
        int x = 10; 
        printf("%d",x); 
    }
    return 0;
}
