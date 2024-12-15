//default copy constructor

#include<iostream>
using namespace std;
class demo
{
private:
    int num1;
    int num2;
public :
    demo()
    {
        this->num1 = 0;
        this->num2 = 0;
    }

    demo(int num1,int num2)
    {
        this->num1 = num1;
        this->num2 = num2; 
    }

    void display()
    {
        cout<< "Num1 = "<<num1<<endl;
        cout <<"Address of num1 "<<&num1<<endl;
        cout << "Num2 = "<<num2<<endl;
        cout <<"Address of num2 "<<&num2<<endl;
    }

};

int main()
{
    cout<<"D1 Object !"<<endl;
    demo d1(10,20);// (&d1)
    d1.display();// (&d1)

    demo d2 = d1; // default copy constructor
    cout<<"D2 Object !"<<endl;
    d2.display();
 //   d1.display();
    return 0;
}