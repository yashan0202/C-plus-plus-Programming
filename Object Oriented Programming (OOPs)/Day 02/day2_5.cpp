// cin and cout
/*
cin is the external object of istream class
cout is the external object of the ostream class
These classes are inside the std namespace
this is inside the iostream header file
*/

#include<iostream>

int main()
{
    using namespace std;
    int num1 = 20;
    char ch = 'Z';
  //  printf("Hello !");
    cout << "Hello !"<< endl;
    cout <<"num1 : " << num1 << endl;
    cout << "ch : "<< ch<< endl;

    int num2;
    // scanf("%d",&num2);
    cout << "Enter the value for num2 :";
    cin >> num2;
    cout << "num2 :" << num2<< endl;

    cout << "num1 : "<< num1 << " num2 :" << num2;
    return 0;
}