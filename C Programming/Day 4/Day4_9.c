#include<stdio.h> 

int main()
{
    char ch; 
    printf("Enter the character :: "); 
    scanf("%*c%c",&ch);
    printf("%c",ch);  
    return 0;
}

/*
int main()
{
    int num1; 
    float fvar; 
    double dvar; 
    printf("Enter int , float , double :: "); 
    scanf("%d%f%lf",&num1,&fvar,&dvar); 
    
    printf("double = %.2lf int = %d float = %.2f",dvar,num1,fvar); 
    return 0;
}
*/

/* 
int main(int argc, char const *argv[])
{
    int num1 , num2; 
    printf("Enter the num1 and num2 :: "); 
    scanf("%d%d",&num1,&num2); //avoid giving spaces in scanf 
    printf("num1 = %d num2 = %d",num1,num2);  
    return 0;
}
*/ 

/* 
int main()
{
    int num1 , num2; 
    printf("Enter the num1 :: "); 
    scanf("%d",&num1);

    printf("Enter the num2 :: ");
    scanf("%d",&num2);

    printf("num1 = %d num2 = %d",num1,num2);    
    return 0;
}
*/ 

/* 
int main()
{
    //scanf(); 
    int num; 
    printf("Enter the integer number :: "); 
    scanf("%d",&num); // 10 // & => addressof operator 

    printf("number = %d",num);  
    return 0;
}
*/ 
