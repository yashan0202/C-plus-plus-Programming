#include<stdio.h>
#include<stdlib.h> 
// I/p a char from user and write them into file 
int main()
{
    char ch; 
    FILE *fp; 
    //open a file 
    fp = fopen("file1.txt","r");
    if(fp == NULL){
        printf("fopen() failed.."); 
        exit(1); 
    } 
    while(1)
    {
        
        ch = fgetc(fp);
        //returns next char , otherwise returns -1 if file ends  
        if(ch == EOF) // input is completed ( end of input)
          break; 
        putchar(ch);      
    }
    //close the file 
    fclose(fp); 
    return 0;
}
/*
        Hello world

        press ctrl + z to finish 
*/