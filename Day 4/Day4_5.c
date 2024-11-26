#include<stdio.h> 

int main()
{
    //short , long 

    //short int num; //signed   
    //signed short int num; 
    //printf("%d ",sizeof(num)); // 2 bytes 
    
    //unsigned short int num1; 
    //printf("%d ",sizeof(num1)); // 2 bytes 
    
    //long int num3; //signed   
    //signed long int num3; //signed   
    //printf("%d ",sizeof(num3)); // 4 bytes 

    // long int num4; //signed   
    // unsigned long int num4; //signed   
    // printf("%d ",sizeof(num4)); // 4 bytes 

    //short char x; // NOT OK 
    //long char y; // NOT OK 
    //short long int k; // NOT OK

    short int x = 300; 
    printf("%hd",x);   
    return 0;
}
/*
         78

   int num;  // 4 bytes 
   unsigned int num; // 4 bytes 
   short int num; // 2 bytes 
   unsigned short int num; // 2 bytes 
   long int num; // 4 / 8 bytes 
   unsigned long int num; // 4 / 8 bytes 
   long long int num; // 8 bytes 
   unsigned long long int num;   // 8 bytes     


*/