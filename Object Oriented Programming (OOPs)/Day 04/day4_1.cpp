// constructor : (overloading)
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

    return 0;
}
