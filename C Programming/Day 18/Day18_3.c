#include<stdio.h> 
#include<stdlib.h>

int main()
{
    char line[256]; 
    FILE *fp; 
    fp = fopen("file1.txt","r"); 
    if(fp == NULL)
    {
        printf("fopen() failed.."); 
        exit(1); 
    }
    while(fgets(line,sizeof(line),fp)!=NULL){
        printf("%s",line); 
    }
    fclose(fp); 
    return 0;
}
