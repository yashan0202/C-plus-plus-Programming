#include<stdio.h> 
#include<stdlib.h> 

struct emp{
    int empno; 
    char name[20]; 
    double sal;   
}; 
int main()
{
    struct emp arr[3] = {
        1 , "Ketan" , 3000.00,
        2 , "Rahul" , 4000.00,
        3 , "Aditya" ,5000.00 
    }; 
    FILE *fp; 
    int i; 
    fp = fopen("file1.txt","w"); 
    if(fp == NULL){
        printf("fopen() failed"); 
        exit(1); 
    }
    for( i = 0 ; i < 3 ; i++){
        //write on terminal 
        //printf("%5d %-20s %10.2lf\n",arr[i].empno,arr[i].name,arr[i].sal); 

        //write in file 
        fprintf(fp,"%5d %-20s %10.2lf\n",arr[i].empno,arr[i].name,arr[i].sal);
    }
    fclose(fp); 
    return 0;
}
