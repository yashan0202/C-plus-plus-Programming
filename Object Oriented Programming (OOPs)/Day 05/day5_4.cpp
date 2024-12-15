// shallow copy 
#include<iostream>

using namespace std;

class demo
{
private :
    int *ptr1;
    int *ptr2;
public :
        demo(int n1,int n2)
        {
            ptr1 = new int;
            *ptr1 = n1;
            ptr2 = new int;
            *ptr2 = n2;
        }

        void display()
        {
            cout <<"Address of DMA using ptr1 :"<<ptr1<<endl;// 500
            cout <<"Value at ptr1 :"<<*ptr1<<endl; // 11
            cout<<"Address of ptr1 :"<<&ptr1<<endl; // 700
            cout <<"Address of DMA using ptr2 :"<<ptr2<<endl; // 600
            cout <<"Value at ptr2 :"<<*ptr2<<endl; // 22
            cout<<"Address of ptr2 :"<<&ptr2<<endl; // 704
        }

};

int main()
{
    cout <<"D1 Object :"<<endl;
    demo d1(11,22);
    d1.display();
    cout <<"D2 Object :"<<endl;
    demo d2 = d1; // default copy constructor
    d2.display();

    // copy ctor provided by compiler does the shallow copy


    return 0;   
}