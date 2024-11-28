#include<stdio.h> 
void sumpro( int a , int b); 
int ps , pp;  //global variable 
/*
    ps and pp will be allocated in data-section 
    scope -> program 
    life -> program 
    by default --> 0 
*/
int main()
{
    int a = 10 , b = 4; 
    sumpro(a,b); 
    printf("\n ps = %d pp = %d",ps,pp); 
    
    return 0;
}
void sumpro( int a , int b){
   
    ps = a + b; 
    pp = a * b; 
    //printf("\n ps = %d pp = %d",ps,pp); 
    
}