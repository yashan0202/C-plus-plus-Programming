// late binding

#include<iostream>

using namespace std;

class base
{

    public:
        void fun1()
        {
            cout << "Inside fun1()"<<endl;
        }

      virtual void fun2()
        {
            cout << "Inside fun2 of base class()"<<endl;
        }
};

class derived : public base
{
public :
// function overriding
    void fun2()
    {
        cout<< "Insider fun2() of derived Class :"<<endl;
    }

    void fun3()
    {
        cout << "Inside fun3()"<<endl;
    }

};


int main()
{
    
    base *b1;

    derived d1;

    b1 = &d1;

    b1->fun1(); // base
    b1->fun2(); // base
    return 0;
}