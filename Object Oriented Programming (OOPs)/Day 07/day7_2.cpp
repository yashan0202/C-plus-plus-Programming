// Operator Overloading : non-member function
#include<iostream>
using namespace std;
class arithmetic
{
private:
    int num1;
    int num2;
public :

    arithmetic()
    {
    }
    arithmetic(int n1,int n2)
    {
        this->num1 = n1;
        this->num2 = n2;
    }

    void display ()
    {
        cout << "Num1 = "<<num1<<endl;
        cout << "Num2 = "<<num2<<endl;
    }
    friend arithmetic operator+(arithmetic a1,arithmetic a2);
};
// non-member function
arithmetic operator+(arithmetic a1,arithmetic a2)
{
    arithmetic temp; // temp is object 
    temp.num1 = a1.num1 + a2.num1; // 10 + 50
    temp.num2 = a1.num2 + a2.num2; // 20 + 60
    return temp;
}

int main()
{
    cout << "object 1 :"<<endl;
    arithmetic A1(10,20);
    A1.display();

    cout << "object 2 :"<<endl;
    arithmetic A2(50,60);
    A2.display();

    cout << "object 3 :"<<endl;
    arithmetic A3 = A1 + A2; 
    A3.display();

    return 0;
}