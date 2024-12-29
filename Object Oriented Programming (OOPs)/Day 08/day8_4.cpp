// early binding

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
    // early binding
    base b1;
    b1.fun1();
    b1.fun2();

    derived d1;
    d1.fun1();
    d1.fun2();
    d1.fun3();
    return 0;
}