// Namespace
// Nested Namepsace

#include<stdio.h>

int num1 = 10;
namespace NS1
{
    int num1 = 20;
    int num3 = 45;
    int num4 = 55;
    int num5 = 60;
    struct demo
    {
        int num2;
    };
    namespace NS1_1
    {
        int num1 = 30;
    }
}
int main()
{ 
    printf("num1 = %d\n",num1); // 10
    printf("num1 = %d\n",::num1); // global namespace -> 10

    using namespace NS1;
    printf("num1 = %d\n",NS1:: num1);// 20
    printf("num1 = %d\n",NS1_1::num1); // 30
    printf("num3 = %d\n", num3);
    printf("num4 = %d\n", num4);
    printf("num5 = %d\n", num5);


    return 0;
}