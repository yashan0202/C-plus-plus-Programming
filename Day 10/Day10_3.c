#include <stdio.h>
int fun(void);
int main()
{
    int res = fun();
    printf("%d", res);
}
int fun(void)
{
    int r;
    r = (1, 2, 3, 4);
    return r;
    // int r;
    // r = 1,2,3;
    // return r;
    // return (10,20,30);
    // return 10,20;
    // return 20;
    // return 10;
}