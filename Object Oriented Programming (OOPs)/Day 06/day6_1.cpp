// static data members

#include<iostream>
using namespace std;

class BankAccount
{
private :
    int accno;
    double balance;
     static int counter;
public:

    BankAccount(double balance)
    {
        this->accno =  counter++;
        this->balance = balance;
    }

    void display()
    {
        cout << "Acc no = "<<this->accno<<endl;
        cout << "Balance = "<<this->balance<<endl;
        cout << "counter = "<<counter<<endl;
    }
};
int BankAccount :: counter = 0;
int main()
{
    BankAccount b1(10000);
    b1.display();
    BankAccount b2(20000);
    b2.display();
    BankAccount b3(30000);
    b3.display();
    return 0;
}
// only non static data members are initialized on the object.
// static data member should be compulsorily initialized outside the class.
// It is initialized only once.
// It is shared among all the data members.
// the value is retained among all the objects.
// It is created on the data section.