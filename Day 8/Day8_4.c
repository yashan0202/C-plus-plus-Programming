#include<stdio.h> 

int main()
{
    //alias => nickname 
    //datatype => nickname 

    //typedef datatype alias(nickname)
    int x = 10; 
    typedef int INTEGER; 
    int y = 20; 
    INTEGER z = 30; 
    size_t y; 

    enum color{
        RED,BLUE,GREEN
    }; 
    //enum color c1,c2,c3; 
    typedef enum color e_c;
    e_c c4;   
    return 0;
}
