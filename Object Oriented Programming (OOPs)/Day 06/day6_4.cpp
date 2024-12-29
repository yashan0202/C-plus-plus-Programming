// template class

#include<iostream>
using namespace std;

template<class x,class y>
class arithmatic
{
private :
    x num1;
    y num2;
public :
    arithmatic(x num1,y num2)
    {
        this->num1 = num1;
        this->num2 = num2;
    }

    void add()
    {
        cout << "Addition = "<<num1 + num2<<endl;
    }
    void sub()
    {
        cout << "Subtraction = "<<num1 - num2<<endl;
    }
    void mul()
    {
        cout << "Multiplication = "<<num1 * num2<<endl;
    }
    void div()
    {
        cout << "Division = "<<num1 / num2<<endl;
    }
};

int main()
{
 arithmatic<int,int> a1(10,30);
 a1.add();
 a1.sub();
 a1.mul();
 a1.div();
cout << endl<< "Obj 2"<<endl;
 arithmatic <float,int>a2(12.34f,10);
 a2.add();
 a2.sub();
 a2.mul();
 a2.div();
    
    return 0;
}

/*
Function Overloading :
When the names of functions are same, but parameters are different
and depending on the parameters the business logic of the function changes
then we use function overloading.
eg : Accept_details(......changing parameters)
    {
        business logic changes for each function
    }

Default parameters:
name of function and business logic inside the function is same.
only the number of parameters while function call may differ.

Template :
name is same, business logic is same. number of parameters is same.
Only the type of parameters may differ. In that case use a template.
eg: you want to perform addition on 2 int numbers or 2 float numbers
or int and float , in this the number of parameters is same.
use template to define the type of parameters at runtime.


*/