// setw() , setfill() setprecision

#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
    int num1 = 50;

    cout << hex << num1 << endl;
    cout << oct << num1 << endl;
    cout << dec << num1 << endl;
    // printf("%10d");
    cout << setw(10) << "Hello"<<endl; // right justified
    cout << setw(10) <<left << "Hello"<<endl; // left justified
    cout << setw(10) <<setfill('$')<< "Hello"<<endl; // left justified + $
    
    float fnum = 123.456;

    cout << setprecision(4)<<fnum<<endl; // total num of digits
    cout << setprecision(2)<<fixed<<fnum<<endl; // specifies 2 digits after decimal point

    return 0;
}