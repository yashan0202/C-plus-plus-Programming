// constant member functions

#include<iostream>
using namespace std;

class BankAccount
{
private :
    int acc_no;
    int phone_no;
    double balance;
public :
    BankAccount() 
    {
        acc_no = 0;
        phone_no = 0;
        balance = 0;
    } 
    BankAccount(int acc_no,int phone_no,int balance)
    {
        this->acc_no = acc_no;
        this->phone_no = phone_no;
        this->balance = balance;
    }

    void print_data() const
    {
      //   this->balance = 0;
        cout << "acc no :"<<acc_no<<endl;
        cout<< "Phone no :"<<phone_no<<endl;
        cout<< "Balance :" << balance<<endl;
    }
};

int main()
{
   BankAccount b1; // parameterless
   BankAccount b2(1001,123456789,10000);
   b2.print_data();
   
  
  

    return 0;
}
