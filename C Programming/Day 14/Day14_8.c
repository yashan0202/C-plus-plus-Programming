#include <stdio.h>

int main()
{
    int i, a = 5, b = 10, c = 15;
    int *pa[3]; // array of pointers

    pa[0] = &a;
    pa[1] = &b;
    pa[2] = &c;

    for(i = 0 ; i < 3 ; i++){
        printf("%d ",*pa[i]);     
    }
    return 0;
}
