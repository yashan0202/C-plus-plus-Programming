// constant data members
// constructor : (overloading)
#include<iostream>
using namespace std;

class BankAccount
{
private :
   const int acc_no;
    int phone_no;
    double balance;

public :// constructor member initializer list
    BankAccount(int acc_no,int phone_no,double balance) : acc_no(acc_no),phone_no(phone_no),balance(balance)
    {
       // this->phone_no = phone_no;
        // this->balance = balance;
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
   BankAccount b1(1001,123456,10000);
   b1.print_data();
  
   
    return 0;
}

/*
The constant as well as non constant data members can be initialized
in the constructor memeber initializer list
But, ONLY NON CONSTANT DATA MEMBERS can be initialized inside
the body of the constructor


*/