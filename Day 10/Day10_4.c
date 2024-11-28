#include<stdio.h> 
void sumpro( int a , int b); 
int main()
{
    auto int d; // auto indicates local variable 
    //(in function variable) -> auto -> optional 
    int c; //if not init -> garbage 
    int a = 10 , b = 4; //local variables 
    /*
         a,b,c,d will be created when main is called 
         on main's FAR (stack )
    */ 
    printf("%d\n",c); // Garbage  
    {
        int c = 10; 
        printf("%d \n",c); //10 
        {
            int c = 20; 
            printf("%d \n",c);//20 
            {
                int c = 30; 
                printf("%d \n",c);//30 
            }
            printf("%d \n",c);//20 
        }
        printf("%d \n",c);//10 
    }

    //sumpro(a,b); 
    printf("\n main : %d %d ",a,b); 
    return 0;
}
void sumpro( int a , int b){
    int ps , pp; 
    /*
           a,b,ps,pp will be created when sumpro is called 
           on sumpro's FAR  
    */
    ps = a + b; 
    pp = a * b; 
    printf("\n ps = %d pp = %d",ps,pp); 
    a++; 
    b++; 
    /*
         modifying a,b in sumpro's FAR will not affect main's "a" "b" var 
    
    */
}