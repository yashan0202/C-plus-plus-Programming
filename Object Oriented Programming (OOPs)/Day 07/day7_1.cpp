// Exception Handling
#include<iostream>
using namespace std;

class arithmetic
{
private:
    int num1;
    int num2;
public :
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

    void div()
    {
        if(num2 == 0){
            throw 1; // int value
        }
        else
        {
            cout << "division = "<<num1 / num2<<endl;
        }
    }

    void mul()
    {
        if(num1 == 0 || num2 == 0)
            throw 1.2; // double value
        else
            cout << "Multiplication = "<< num1 * num2<<endl;

    }
};

int main()
{
    arithmetic a1(10,0);
    try
    {
        a1.div(); 
       
    }
    catch(int error) // error is just an identifier to hold the int value thrown
    {
        cout << "Denominator cannot be 0 !"<<endl;
    }
    try
    {
         a1.mul(); 
    }
    catch(double error) // error is just an identifier to hold the int value thrown
    {
        cout << "Oprands cannot be 0 in multiplication !"<<endl;
    }
    catch(...)
    {
        cout << "Something Went Wrong !"<<endl;   
    }
    return 0;
}

/*
try

throw

catch
____________________

debit
payment gateway
credit

*/