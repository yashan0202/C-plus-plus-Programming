// template function

#include<iostream>

using namespace std;
template<typename T>
void sum(T num1,T num2)
{
    cout << "Addition = "<<num1 + num2<<endl;
}

template<typename x,typename y>
void sum(x num1, y num2)
{
    cout << "Addition = "<<num1 + num2<<endl;
}
int main()
{
    sum <int>( 10 , 20);
    sum<double>(34.56,78.90);
    sum<float>(45.6f,12.3f);
    sum<int,float>(20,10.30f);
    sum<float,double>(30.56f,20.34);
    return 0;
}