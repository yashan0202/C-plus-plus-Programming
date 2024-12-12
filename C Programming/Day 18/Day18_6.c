#include<stdio.h> 
#include<stdlib.h> 

struct emp{
    int empno; 
    char name[20]; 
    double sal;   
}; 
int main()
{
    struct emp e; 
    FILE *fp; 
    int i; 
    fp = fopen("file1.txt","r"); 
    if(fp == NULL){
        printf("fopen() failed"); 
        exit(1); 
    }
    while(fscanf(fp,"%d%s%lf",&e.empno,e.name,&e.sal)!=EOF)
    {
         printf("%d %s %.2lf\n",e.empno,e.name,e.sal); 
    }
    fclose(fp); 
    return 0;
}
