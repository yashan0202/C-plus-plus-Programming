// Mutators and Inspectors
#include<iostream>
using namespace std;

class BankAccount
{
private :
    int acc_no;
    int phone_no;
    double balance;

public :
    BankAccount() // (* const this)
    {
        acc_no = 0;
        phone_no = 0;
        balance = 0;
    }
               // 1001      1234567      10000
    BankAccount(int acc_no,int phone_no,int balance)
    {
        this->acc_no = acc_no;
        this->phone_no = phone_no;
        this->balance = balance;
    }

    BankAccount(int acc_no,int balance)
    {
        this->acc_no = acc_no;
        this->phone_no = 0000;
        this->balance = balance;
    }
// Mutators / Setter functions
    void set_phone_no(int phone_no) // *this
    {
        this->phone_no = phone_no;
    }

    void set_balance_for_deposit(double amount)
    {
        this->balance = this->balance + amount;
    }

    void set_balance_for_withdrawal(double amount)
    {
        this->balance = this->balance - amount;
    }

// Inspectors / getter functions
double get_balance()
{
    return this->balance;
}
int get_Acc_no()
{
    return this->acc_no;
}

int get_phone_no()
{
    return this->phone_no;
}

// Facilitator
    void print_data()
    {
        cout << "acc no :"<<acc_no<<endl;
        cout<< "Phone no :"<<phone_no<<endl;
        cout<< "Balance :" << balance<<endl;
    }
};

int main()
{
    BankAccount b1;
    b1.print_data(); // print_data(&b1)
    BankAccount b2(1001,12345678,10000);
    b2.print_data();
    BankAccount b3(2002,12000);
    b3.print_data();
    b3.set_phone_no(56789); // set_phone_no(&b3,56789)
    b3.print_data();
    b2.set_balance_for_deposit(5000);
    b2.print_data();

    cout << "Balance of b2 = "<< b2.get_balance()<<endl;
    cout <<"balance of b3 = " << b3.get_balance()<<endl;
    return 0;
}

/*
Member Functions of a class
1) constructors
2) Mutators/ setters
3) Inspectors / getters
4) Facilitators
5) Destructors


*/
