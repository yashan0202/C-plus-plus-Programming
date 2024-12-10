#include<stdio.h> 
//Stringizing operator (#)
#define PRINT(x) puts(#x)
#define PRINT_VAR(var) printf(#var  " = %d",var)

//Token pasting operator (##)

#define PRINT_SAL(a,b) printf("sal = %d",a##b)

int main()
{
    int basicsalary = 100; 
    int adventure = 50; 
    //PRINT(HELLO WORLD); 
    //puts("HELLO WORLD")
    
    //PRINT_VAR(adventure); 
    //printf("adventure"  " = %d",adventure)
    
    PRINT_SAL(basic,salary); 
    //printf("sal = %d",basicsalary)
    return 0;
}
