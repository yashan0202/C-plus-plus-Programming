// static member functions

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
    }

   static void display_count()
    {
          cout << "counter = "<<counter<<endl;
    }
};
int BankAccount :: counter = 0;
int main()
{
    BankAccount b1(10000); // customer 1
    b1.display();
    BankAccount b2(20000); // customer 2
    b2.display();
    BankAccount b3(30000); // customer 3
    b3.display();
    BankAccount b4(40000); // customers 4
    b4.display();
    
    BankAccount :: display_count();
    return 0;
}

