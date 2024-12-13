// constant object

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

    void accept_data()
    {
        cout<< "Enter the acc no :";
        cin>> this->acc_no;
        cout << "Enter the phone no :";
        cin>> this->phone_no;
        cout<< "Enter the balance :";
        cin>> this->balance;
    }
};

int main()
{
   BankAccount b1; // parameterless
   BankAccount b2(1001,123456789,10000);
   b2.print_data();
   const BankAccount b3;
   b3.print_data();
 
  

  /*
  As accept data () is not const, we cannot call it on b3 object.
  constant object can call only constant member functions
  */
  

    return 0;
}
