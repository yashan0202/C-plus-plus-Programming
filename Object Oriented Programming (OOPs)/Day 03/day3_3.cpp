// this pointer
#include<iostream>
using namespace std;

class employee
{
private :
    int emp_id;
    char name[20];
    float salary;

public :
    void accept_data() // void accept_data(employee *const this)
    {
        cout << "Enter the empid :";
        cin>>this->emp_id; // ptr->emp_id
        cout << "Enter the name :";
        cin>>this->name;  // ptr->name
        cout<< "Enter the salary :";
        cin>> this->salary; // ptr->salary
    }

    void print_data() // void print_data(employee *const this)
    {
       
        cout <<"Empid = "<<this->emp_id<<endl;
        cout <<"Name = "<<this->name<<endl;
        cout <<"Salary = "<<this->salary<<endl;
        

    }
};

int main()
{
     employee e1; // object
     e1.accept_data(); // accept_data(&e1);
     employee e2;
     e2.accept_data();
     employee e3;
     e3.accept_data();
 
    e2.print_data(); // print_data(&e2);
     e1.print_data(); // print_data(&e1);
     e3.print_data(); // print_data(&e3);
     

   
   
    return 0;
}
