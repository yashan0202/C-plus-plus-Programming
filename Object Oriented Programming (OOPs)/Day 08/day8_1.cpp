// Inheritance : Modes

#include<iostream>
using namespace std;

class base
{
    private :
        int num1;
    public :
        int num2;
    protected :
        int num3;

        void print()
        {
            cout << "num1 :"<< num1<<endl;
            cout << "num2 :"<< num2<<endl;
            cout << "num3 :"<< num3<<endl;
        }
        friend void demo();

   };

// derived is the child class of the parent "BAse class"
class derived :public base // private : mode of inheritance
{
    void print()
    {
      //  cout << "num1 :"<< num1<<endl; // private : not accessible
        cout << "num2 :"<< num2<<endl; // public
        cout << "num3 :"<< num3<<endl; // protected
    }
};

// indirect class is indirectly derived from base class
class indirect : derived // by default : private mode of inheritance
{

    void print()
    {
    //    cout << "num1 :"<< num1<<endl; // private : not accessible
        cout << "num2 :"<< num2<<endl; // public :
        cout << "num3 :"<< num3<<endl; // protected
    }
};

// friend function
void demo()
{
    base b1;
        cout << "num1 :"<< b1.num1<<endl; 
        cout << "num2 :"<< b1.num2<<endl; 
        cout << "num3 :"<< b1.num3<<endl; 
}
// non member function
void demo2()
{
    base b1;
    derived d1;
    cout << b1.num2;
    cout << d1.num2;
}

int main()
{
    base b1;

  //  b1.num1; // not accessible : private
    b1.num2;
  //  b1.num3; // not accessible : protected
}

/*
In private mode of inheritance all the inherited members (protected/public)
become private and the cannot be further accessed in the below inheritance

*/