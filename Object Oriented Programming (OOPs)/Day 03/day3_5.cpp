// constructor

#include<iostream>

using namespace std;

class BankAccount
{
private:
    int acc_no;
    int phone_no;
    double balance;
public:
    BankAccount()
    {
        cout << "Inside Constructor !"<<endl;
        acc_no = 0;
        phone_no = 0;
        balance = 0.0;
    }

                // 1003,     1234567,       10000)
    BankAccount(int acc_no,int phone_no,double balance)
    {
        this->acc_no = acc_no;
        this->phone_no = phone_no;
        this->balance = balance;
    }
    BankAccount(int acc_no,int balance)
    {
        this->acc_no = acc_no;
        this->phone_no = 0;
        this->balance = balance;
    }
/*
    void accept_data() // (bankaccount *this)
    {
        cout << "Enter the acc_no :";
        cin >> acc_no;
        cout << "Enter the Mobile No :";
        cin >> phone_no;
        cout << "Enter the balance :";
        cin >> balance;
    }
*/

    void print_data()
    {
        cout << "Account No :"<< acc_no <<endl;
        cout << "Phone No :"<< phone_no <<endl;
        cout << "Balance  :"<< balance <<endl;
    }
};

int main()
{
    BankAccount b1; // c'tor is called
    b1.print_data();

    BankAccount b2; // c'tor is called
    b2.print_data();

    BankAccount b3(1003,1234567,10000);
    b3.print_data();

    BankAccount b4(2004,20000);
    b4.print_data();

    return 0;
}

/*
1) constructor is the special member function of the class.
2) The name of the constructor is same as that of the class.
3) It is called automatically when the object is created.
4) It is called once per object. Once in the lifetime of that object.
5) It does not have any return type. Not even VOID.
6) It is used to initialize the data members of the class

Types of c'tors
1) default / parameterless constructor
2) Parameterized Constructor
3) Copy constructor

*/