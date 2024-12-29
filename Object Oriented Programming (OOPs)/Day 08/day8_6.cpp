#include<iostream>
using namespace std;

// abstract class
class Shape{
protected:
    float area;

public:
    Shape( void ){
        this->area = 0;
    }
    virtual void acceptRecord( void ) = 0;  //Pure Virtual Function

    virtual void calculateArea( void ) = 0;  //Pure Virtual Function

    void printRecord( void ){
        cout<<"Area :   "<<this->area<<endl;
    }
};

class Rectangle : public Shape{
private:
    float length;
    float breadth;
public:
    Rectangle( void ){
        this->length = 0;
        this->breadth = 0;
    }
    void acceptRecord( void ) // overridden function of base class
    {
        cout<<"Length   :   ";
        cin>>this->length;
        cout<<"Breadth  :   ";
        cin>>this->breadth;
    } 
    void calculateArea( void ){
        this->area = this->length * this->breadth;
    }
};

class Circle : public Shape{
private:
    float radius;
public:
    void acceptRecord( void )  // override from base
    {
        cout<<"Radius   :   ";
        cin>>this->radius;
    }
    void calculateArea( void ){ // override
        this->area = 3.142f * this->radius * this->radius;
    }
};



int main( void )
{
    
    Rectangle r1;
    r1.acceptRecord();
    r1.calculateArea();
    r1.printRecord();
    return 0;
}




/*

A class which has atleast one pure virtual function
that class is called as the abstract class.

If the class has all the pure virtual functions
that class is called as pure abstract class.

We cannot instantiate / create the object of abstract class.

overriding the pure virtual fuction in the derived class is compulsory
otherwise the derived class will also become abstract.
*/