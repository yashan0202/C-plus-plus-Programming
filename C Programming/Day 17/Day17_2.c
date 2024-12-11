#include<stdio.h> 
#include<string.h>

struct emp // blueprint (declaration)
{   
    //structures members 
    int empno; 
    char name[20]; 
    double salary; 
}; 

int main()
{   
    struct student //local structure 
    {
        int roll; 
        char name[20]; 
    }; 
    //  int       x      =  10; 
    //datatype variable-name; 
    struct emp e1 = {1,"Ketan",1000.00}; //init list 
    struct emp e2 = {2,"Amit"}; 
    struct emp e3;
    struct emp e4; 
    //e1,e2,e3,e4 ==> variable / object 

    //printf("%d\n%s\n%.2lf",e1.empno,e1.name,e1.salary);
    /*
            char num = 'A'; 
            char *p = &num; 
    */ 
    
    struct emp *p = &e1; // pointer to structure  

    //printf("%d %s %.2lf",p->empno,p->name,p->salary); 

    /*
            int num1; 
            num1 = 10; // assignment 
    */


   //Assignment 
    e3.empno = 3; 
    strcpy(e3.name,"Aditya"); 
    e3.salary = 3000.00; 
    //printf("%d\n%s\n%.2lf",e3.empno,e3.name,e3.salary);

    
    /*
         int num1; 
         printf("Enter the num1"); 
         scanf("%d",&num1); 
         printf("num = %d",num1); 
    */
    printf("Enter empid , name and salary :: "); 
    scanf("%d%s%lf",&e4.empno,e4.name,&e4.salary); 

    printf("%d\n%s\n%.2lf",e4.empno,e4.name,e4.salary);
    return 0;
}
