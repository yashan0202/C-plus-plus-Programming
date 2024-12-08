#include<stdio.h> 
int main()
{
    char str1[5] = {'A','B','C','D','E'}; // init list 
    //char array 

    char str2[5] ={'a','b','c','d','\0'}; 
    //5 char array terminated with \0 => string 

    char str3[5] = {'I','N','F','O'}; //partial init 
    // 5 char array terminated with \0 => string 
    // when array is partially init at time of decln 
    // rest ele are 0 
    /*
            I   N   F   O   0 
           [0] [1] [2] [3] [4] 
    */

    char str4[] = {'s','u','n','b','e','a','m'}; 
    //char array 

    int i; 
    // for(i = 0 ; i < 5 ; i++)
    //     putchar(str1[i]);     

    // for(i = 0 ; str2[i]!='\0' ; i++)
    //     putchar(str2[i]);  

    // for(i = 0 ; str3[i]!='\0' ; i++)
    //     putchar(str3[i]);  

    for(i = 0 ; i < 7  ; i++)
        putchar(str4[i]);    

    return 0;
}
