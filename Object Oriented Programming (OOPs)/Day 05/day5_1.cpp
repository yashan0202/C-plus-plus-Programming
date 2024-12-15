// swapping using reference

#include<iostream>

using namespace std;

void swap_using_pointer(int *ptr1,int*ptr2)
{
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

void swap_by_ref(int &ref1,int &ref2)
{
    int temp = ref1;
    ref1 = ref2;
    ref2 = temp;
}

int main()
{
    int num1 = 10, num2 = 20;
    cout << "Before swap :"<<endl;
    cout << "num1 = "<<num1<<" num2 = "<<num2<<endl;
   // swap_using_pointer(&num1,&num2);
    swap_by_ref(num1,num2);

    cout << "After swap :"<<endl;
    cout << "num1 = "<<num1<<" num2 = "<<num2<<endl;
    return 0;
}