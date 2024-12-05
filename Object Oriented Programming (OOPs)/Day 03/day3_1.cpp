// Default Function Arguments
#include<iostream>

using namespace std;

void addition(int num1=0,int num2=0,int num3=0,int num4=0)
{
    cout << "Addition : "<< num1 + num2 + num3 + num4<< endl;
}

int main()
{
    addition(11,22,33,44);
    addition(10,20,30);
    addition(10,20);
    addition(10);
    addition();

    return 0;
}

/*

void accept(int )


*/