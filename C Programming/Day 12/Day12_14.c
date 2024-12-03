#include<stdio.h> 

// int main()
// {
//     const int num = 10; 
//     int *ptr = &num; 

//     printf("num = %d\n",num); //10 
//     //num = 30; // Not OK 
//     *ptr = 20; 
//     printf("num = %d\n",num); //20 
//     return 0;
// }


int main()
{
    int num = 10; 
    const int *ptr = &num; 

    printf("num = %d\n",num); //10 
    num = 30;  // OK 
    //*ptr = 20; // NOT OK 
    printf("num = %d\n",num); //30 
    return 0;
}
