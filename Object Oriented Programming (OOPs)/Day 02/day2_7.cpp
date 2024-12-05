// inline function

#include<iostream>
using namespace std;

inline void addition (int num1, int num2)
{
    cout << "Addition = "<< num1 + num2 << endl;
}

int main()
{
    addition(40,55);
    //  cout << "Addition = "<< num1 + num2 << endl;
    return 0;
}
// inline is the request made to the compiler to make the execution faster.
// the code is replaced in the place of function call.