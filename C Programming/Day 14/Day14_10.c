#include<stdio.h> 

int main()
{
    int i; 
    char *arr[] ={"one","two","three","four"}; 
    for(i = 0 ; i < 4 ; i++)
      puts(arr[i]);  
    return 0;
}
/*
    "one" , "two" ,"three" , "four"

    char *str1 = "one"; 
    char *str2 = "two";
    char *str3 = "three";
    char *str4 = "four"; 

    char *str[ ] = {"one","two","three","four"};  
*/
