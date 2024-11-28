#include<stdio.h> 
static int num1 = 100; // (File scope)  ( data-section )
int x; //(program scope) ( data-section )
void fun( ); 
int main()
{
    static int num2 = 30; // Block scope ( data-section )
    return 0;
}
void fun( ){
    //printf("%d ",num2); //NOT OK 
    printf("%d ",num1); // YES 
}

/*

    static int num1 = 100 (file scope)
    int x; (program scope)
    main.c                                  f1.c                         f2.c 

    gcc main.c f1.c f2.c 
*/