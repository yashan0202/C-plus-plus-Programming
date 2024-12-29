// Composition 

#include<iostream>

using namespace std;

class date
{
private :
    int dd;
    int mm;
    int yy;
};

class engine
{
private :
    int cc;
    int fuel_capacity;
public :

    void accept_engine_details()
    {
        cout << "Enter the cc :";
        cin>>this->cc;
        cout << "Enter the Fuel Capacity :";
        cin>>this->fuel_capacity;
    }

    void print_engine_details()
    {
        cout << "CC :"<<this->cc<<endl;
        cout << "fuel Capacity :"<<this->fuel_capacity<<endl;
    }

};

class car // dependant class
{
private :
    int average;
    double price;
    char colour[20];
    engine e;
public :
    void accept_car_details()
    {
        e.accept_engine_details();
        cout << " Enter the average :";
        cin>>this->average;
        cout << " Enter the Price :";
        cin>>this->price;
        cout << " Enter the colour :";
        cin>>this->colour;
    }

    void print_Car_Details()
    {
        e.print_engine_details();
        cout << "Average :"<< this->average<<endl;
        cout << "Price :"<< this->price<<endl;
        cout << "colour :"<< this->colour<<endl;
    }
};

int main()
{
    car c1; // object of dependant class
    c1.accept_car_details();
    c1.print_Car_Details();


    return 0;
}