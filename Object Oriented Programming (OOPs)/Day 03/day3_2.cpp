// class and object
/*
class is similar to a structure
It is a logical entity.
Class is a blueprint/ design of an object.

Object : Object is similar to a variable of a structure.
It is a physical entity of the class.

*/
#include<iostream>
using namespace std;

class employee
{
private :
    int emp_id;
    char name[20];
    float salary;

public :
    void accept_data()
    {
        cout << "Enter the empid :";
        cin>>emp_id;
        cout << "Enter the name :";
        cin>>name;
        cout<< "Enter the salary :";
        cin>> salary;
    }

    void print_data()
    {
        cout <<"Empid = "<<emp_id<<endl;
        cout <<"Name = "<<name<<endl;
        cout <<"Salary = "<<salary<<endl;

    }
};

int main()
{
     employee e1; // object
     e1.accept_data();
     e1.print_data();
   //   e1.salary = 0;
    return 0;
}

/*
By default all the members of the structure are public
By default all the members of the class are private.
To change their access, we have to use the Access specifiers.

Structure has 2 access specifiers :
1) private
2) public

class has 3 access specifiers :
1) private
2) public
3) protected (inheritance)



*/