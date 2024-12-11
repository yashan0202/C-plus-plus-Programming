#include<stdio.h> 
#include<string.h>

struct emp // blueprint (declaration)
{   
    //structures members 
    int empno; //4
    char name[20];//20 
    double salary; //8 
    
};
int main()
{
    // int arr[3] = {1,2,3}; 

    //Array of structures 
    struct emp arr[3] = {
        {1,"Ketan",1000.00}, 
        {2,"Aditya",2000.00},
        {3,"Rahul",3000.00},  
    }; 
    int i; 
    for( i = 0 ; i < 3; i ++)
      printf("%d %s %.2lf\n",arr[i].empno,arr[i].name,arr[i].salary); 
    return 0;
}
