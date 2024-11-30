#include<stdio.h> 

int main()
{
    int number; //variable declaration 
    int roll = 300; //variable declaration + init 
    /*
           double basic_salary = 3000.00; //variable declaration + init 
           double total_salary = 4000.00; //variable declaration + init   
    */
   // mutiple declarations are allowed on same line if types are same 
    double basic_salary = 3000.00 , total_salary = 4000.00;  
    number = 30;//assignment  
    printf("Variables and datatypes...\n"); 
    number = 50; //assignment
    printf("number = %d\n",number); 
    //      number = 50  
    char ch = 'B'; //variable declaration + init 
    printf("%.2lf,%.2lf\n",basic_salary,total_salary); 
    printf("%d %d %.2lf %.2lf\n",number,roll,basic_salary,total_salary); 
    printf("char = %c",ch); 
    return 0;
}

