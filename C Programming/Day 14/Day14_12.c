#include<stdio.h> 

int main(int argc, char *argv[])
{
     
    // a.exe one two three  
    //argc => argument count
    //argv => argument vector 
    //printf("%d ",argc); 
    
    // printf("%s ",argv[0]); //a.exe
    // printf("%s ",argv[1]); //one
    // printf("%s ",argv[2]); //two

    //a.exe one two three 

    int i; 
    for(i = 0 ; i < 4 ; i++)
        puts(argv[i]); 
    
    return 0;
}
//atoi()
