#include<stdio.h> 

int main(int argc, char const *argv[])
{
    //string literal 
    char str4[5] = "Tech"; 
    //"Tech" is a string constant
    // short hand decln --> 'T' 'e' 'c' 'h' '\0' 

    char str[ ] ="Aditya"; //string constant 

    char str6[4] = "pune"; //char array 

    //printf("%s",str);  

    int i; 
    // for(i = 0 ; str4[i]!='\0' ; i++)
    //     putchar(str4[i]); 

    // for(i = 0 ; str[i]!='\0' ; i++)
    //     putchar(str[i]); 

    for(i = 0 ; i < 4  ; i++)
         putchar(str6[i]); 
    return 0;
}
