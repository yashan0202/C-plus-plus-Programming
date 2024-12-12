#include<stdio.h>
#include<stdlib.h> 
// I/p a char from user and write them into file 
int main()
{
    char ch; 
    FILE *fp; 
    //open a file 
    fp = fopen("file1.txt","w");
    if(fp == NULL){
        printf("fopen() failed.."); 
        exit(1); 
    } 
    while(1)
    {
        //input a char from user 
        ch = getchar( );
        if(ch == EOF) // input is completed ( end of input)
          break; 
        fputc(ch,fp);     
    }
    fclose(fp);
    return 0;
}
/*
    File pointer(stream pointer) is a pointer to structure of type FILE 
    File pointer points to this structure ( identifies the file )
*/

/*
        Hello world

        press ctrl + z to finish 
*/