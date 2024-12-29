// Diamond Problem

#include<iostream>

using namespace std;
class base
{
    protected :
        int num1;
    public :
        void display()
        {
            cout << "Num1 : "<<num1<<endl;
        }
};

class derived1 : virtual public base
{
    protected:
        int num2;
    public :
        void display()
        {
            cout << "Num1 : "<<num1<<endl;
            cout << "Num2 : "<<num2<<endl;
        }
};

class derived2 :virtual public base
{
    protected :
        int num3;
    public :
        void display()
        {
            cout << "Num1 : "<<num1<<endl;
            cout << "Num3 : "<<num3<<endl;
        }
    
};

class derived3 : public derived1, public derived2
{
    protected :
        int num4;
    void display()
        {
            cout << "Num1 : "<<num1<<endl;
            cout << "Num2 : "<<num2<<endl;
            cout << "Num3 : "<<num3<<endl;
            cout << "Num4 : "<<num4<<endl;
        }

};



int main()
{

    return 0;
}