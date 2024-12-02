#include<stdio.h> 
int main()
{
    int a = 10; // created on stack when main( ) is called 
    //static int b = a; //created in data-section when program is started 
    //(before main( ) is called)
    //static int c = a; //created in data section when program is started ( before main is called)
            //but trying to init with a local var (which is not created yet)
           // COMPILER ERROR  

    //to init static and global variable ,use const values (not local variables )

    return 0;
}
