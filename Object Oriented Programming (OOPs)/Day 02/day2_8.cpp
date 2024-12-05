#include<iostream>
// Function Overloading
using namespace std;

void add(int num1, int num2) // add_i_i
{
    cout<<"Addition =" << num1 + num2 << endl;
}
// types of parameters are different
void add(float f_num1, float f_num2) // add_f_f
{
    cout<<"Addition =" << f_num1 + f_num2 << endl;
}

// the number of parameters is different
void subtract(int num1,int num2) // sub_i_i
{
    cout << "Subtraction ="<< num1 - num2<<endl;
}

void subtract(int num1,int num2, int num3) // sub_i_i_i
{
    cout << "Subtraction ="<< num1 - num2 - num3<<endl;
}

// sequence of parameters is different

void multiply(int num1,float num2) // mul_i_f
{
    cout << "multiply = "<< num1 * num2 << endl;
}
void multiply (float num1, int num2) // mul_f_i
{
    cout << "multiply = "<< num1 * num2 << endl;
}

int main()
{
    add(10,20);
    add(45.5f,60.5f);

    subtract(60,40); 
    subtract(90,20,10);

    multiply(25.4f,3); 
    multiply(5,10.2f);
    return 0;
}

/*
Function Overloading :

Functions having same name but different parameters is 
function overload.
This is possible in 3 ways
1) Data types of parameters should be different.
2) Number of parameters should be different.
3) Sequence of parameters should be different.

function overloading is possible by name mangling.
Each function is given a unique name by the compiler.
That name is called as the mangled name.

Function Overloading follows compile time polymorphism

*/