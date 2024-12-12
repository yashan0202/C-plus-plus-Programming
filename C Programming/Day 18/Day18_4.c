#include<stdio.h> 
#include<stdlib.h>

int main()
{
    char ch[256]; 
    FILE *fp; 
    char *p; 
    fp = fopen("file1.txt","r"); 

    if(fp == NULL){
        printf("fopen() failed"); 
        exit(1); 
    }
    //p = fgets(ch,sizeof(ch),fp);
    p = fgets(ch,4,fp); // reads n-1 chars 
    printf("%s",p);  
    return 0;
}
