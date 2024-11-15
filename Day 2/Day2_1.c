/*
        This is a multiline/block comment
        Comments are ignored by compiler 
        They are used for sake of documentation 
        or explaination of the program          

*/
// This is a single line comment 

#include<stdio.h>// this is a header file inclusion  
//stdio.h header file contains standard function declaration 
// we will learn function in detail in function topic 

//main( ) is a entry point function in C 
//main( ) is a user-defined function 
// program must have main( ) function at least 
// int => integer 
int main(  )
{
    
    // printf( ) is used to print some data / string on terminal  
    //"Sunbeam", "Pune", "A", "123456" => string 
    // 'A' , 'B' ,'C' => character 
    // \n => escape sequence 
    printf("HelloWorld\n");
    return 0; 
    // return 0 indicates successfull execution of program 
    // any non-zero value indicates failure  
}

// program execution starts from main( ).

//Implementation => defination 
//declaration => short-information 

/*
    int main( )
    {
        printf("Hello world"); 
        return 0; 
    }

    //void => nothing 
    void main( )
    {
        printf("Hello world"); 
    }

*/