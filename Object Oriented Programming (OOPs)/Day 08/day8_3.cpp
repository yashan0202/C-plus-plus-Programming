// upcasting 
// object slicing

#include<iostream>

using namespace std;

class base
{

    public:
        void fun1()
        {
            cout << "Inside fun1()"<<endl;
        }

        void fun2()
        {
            cout << "Inside fun2()"<<endl;
        }
};

class derived : public base
{
public :
    void fun3()
    {
        cout << "Inside fun3()"<<endl;
    }

};

int main()
{
    cout << "Base :"<<endl;
    base b1;
    b1.fun1();
    b1.fun2();
    cout << "Derived  :"<<endl;
    derived d1;
    d1.fun1();
    d1.fun2();
    d1.fun3();

    cout << "BAse class pointer and deriveer class object :"<<endl;
    base *b_ptr;
    b_ptr = &d1; // upcasting
    b_ptr->fun1();
    b_ptr->fun2();
  //  b_ptr->fun3();

  // this process is called object slicing
  // only base class members are accessible through
  // base class pointer.


    // upcasting : storing the object of derived class inside the base class pointer

    return 0;
}