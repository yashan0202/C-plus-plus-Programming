#include<stdio.h> 

int main()
{
    //int *ptr;  // wild pointer (local pointer --- Garbage)
   // int *ptr = NULL;//OK  

   int num = 10; 
   float fvar = 12.3f; 
   double dvar = 10.3; 
   char ch = 'A'; 
   
   void *ptr = NULL; // generic pointer 

   ptr = &num;  
   printf("%d " ,*(int*)ptr); //10 

   ptr = &fvar;  
   printf("%.2f " ,*(float*)ptr); //12.3

   ptr = &ch; 
   printf("%c " ,*(char*)ptr); //'A' 

   ptr = &dvar; 
   printf("%.2lf" ,*(double*)ptr); //10.3 
   return 0;
}
