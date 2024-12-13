// reference

#include<iostream>

using namespace std;

int main()
{
    int num1 = 10;
    int &ref = num1;
    int num2 = 25;
   // int &ref1; // error : initializing the reference is mandatory
   
    cout << "num1 = "<<num1<<endl; // 10
    cout << "num2 = "<<num2<<endl; // 25
    cout << "num1 using ref = "<<ref<<endl; // 10
    cout << "Address of num1 = "<<&num1<<endl; // 100
    cout << "Address of num1 using ref = "<<&ref<<endl; // 100
    cout << "Address of num2 = "<<&num2<<endl; // 200

    cout <<endl << "After changes :"<<endl;
    ref = num2;

    cout << "num1 = "<<num1<<endl; // 25
    cout << "num2 = "<<num2<<endl; // 25
    cout << "num1 using ref = "<<ref<<endl; // 25
    cout << "Address of num1 = "<<&num1<<endl; // 100
    cout << "Address of num1 using ref = "<<&ref<<endl; // 100
    cout << "Address of num2 = "<<&num2<<endl; // 200


    
    return 0;
}