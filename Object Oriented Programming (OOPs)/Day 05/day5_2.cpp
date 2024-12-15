// dynamic memory allocation

#include<iostream>

using namespace std;

int main()
{
   // int *ptr =(int*) malloc(sizeof(int*3));

   int *ptr = new int; // new operator allocates memory 
   // for 1 int value
   // heap section
   *ptr = 20;

   cout << "*ptr = "<< *ptr <<endl;
   delete ptr;
   ptr = NULL;

   int *ptr1 = new int[3];
   // allocating memory for 3 int values
   ptr1[0] = 10;
   ptr1[1] = 11;
   ptr1[2] = 12;

   for(int i =0; i<3; i++)
   {
    cout << ptr1[i]<<endl;
   }
   delete[] ptr1;
   ptr1 = NULL;
    return 0;
}