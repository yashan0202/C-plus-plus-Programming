#include<stdio.h> 
int main()
{
    int a = 10; // stack => main's FAR 
    // a will be destroyed when main's FAR is destroyed 

    //static int num = a; // NOT OK 
   
    return 0;
}
// int main()
// {
//     int a = 10; // stack => main's FAR 
//     // a will be destroyed when main's FAR is destroyed 

//     static int num = 10; // data section --- block scope 
//     //after main's FAR is destroyed 
//     //after completion of main  
//     return 0;
// }
