#include<stdio.h> 
// function declaration 
double addition(double num1 , double num2); 
void multiplication( double a  , double b); 
int division(int num , int den); 
void subtract(void); 

//function can return only one value to the calling function 


int main( void )
{
    double num1 = 10.00 , num2 = 2.00 , ans; 
    ans = addition(num1,num2);//function call  
    printf("ans = %.2lf\n",ans);
    multiplication(4.0,2.0);  //function call 
    int num, den , res; 
    printf("Ente the num and den :: "); // 4 2 
    scanf("%d%d",&num,&den); 
    res = division(num,den); //function call 
    printf("Res : %d\n",res); 
    subtract( ); //function call 
    return 0;
}

//function definations 
//user-defined functions 
//subtract is not taking any value from calling function --> void 
//subtract function is not returning any value to calling function ---> void  
void subtract(void)
{
    int p,q,r; 
    printf("Enter the 2 numbers :: "); 
    scanf("%d%d",&p,&q); 
    r = p - q; 
    printf("result = %d",r); 
}

int division(int num , int den)
{   
    /*
        int ans; 
        ans = num/den; 
        return ans; 
    */
    return num/den; 
}

//void -> function is not returning any value to the calling function 
void multiplication( double a  , double b)
{
    double res; 
    res = a * b;
    printf("res = %.2lf\n",res);  
}

double addition(double num1 , double num2) // function defination 
{
    //num1 , num2 , z are local variables  
    double z; 
    z = num1 + num2; 
    return z; 
}
