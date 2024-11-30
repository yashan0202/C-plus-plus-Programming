#include<stdio.h> 
//register int z = 100; // NOT ALLOWED 
int main(int argc, char const *argv[])
{
    //storage --> cpu register ( fast accessible)
    register int i; //cpu register ( fast accessible)
    printf("%d",i); // Garbage 
    {
        register int i = 10; 
        printf("%d ",i); // 10 
    }
    int x;//local var ==> stack --> process -> RAM 
    printf("%d",&x); // address =>  OK
   // printf("%d",&i); //NOT OK 
   //register static int x; // NOT OK 
   
    //int u = 10; 
    //register int *ptr = &u; //OK 
    
    register int p = 10; 
    //int *k = &p; //NOT OK 
    return 0;
}
