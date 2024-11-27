#include<stdio.h> 

int main(int argc, char const *argv[])
{
    int num1 = 300; 
    int num2 = 200;
    int ans; 
    /*
        if(num1>num2) 
          exp1 
        else 
          exp2   
    */ 
    //ans = num1 > num2 ? num1 : num2; 
    //      condtn    ? exp1 :  exp2 
    //printf("ans = %d",ans); 
    
    num1 > num2 ? printf("num1 is greatest") : printf("num2 is greatest"); 
    return 0;
}
/*
    greatest of 3 numbers 
    num1 , num2 , num3 

    ans = num1 > num2 ? ( num1 > num3 ? num1 : num3 ) : ( num2 > num3 ? num2 : num3);   
           condtn     ?      exp1                     :     exp2 
    

    //greatest of a,b,c 

    a>b && a>c ? printf("max = %d",a) : ( b > c ? printf("max = %d",b) : printf("max = %d",c));

    max = a > b && a > c ? a : ( b > c ? b : c); 
    printf("max = %d",max); 
    
*/