#include<stdio.h> 
void sumpro( int a , int b); 
int main()
{
    int a = 10 , b = 4; 
    sumpro(a,b); 
    //printf("\n ps = %d pp = %d",ps,pp); // NOT OK 
    //ps and pp belong to sumpro function 
    //ps and pp are visible inside sumpro only 
    return 0;
}
void sumpro( int a , int b){
    int ps , pp; 
    ps = a + b; 
    pp = a * b; 
    //printf("\n ps = %d pp = %d",ps,pp); 
    
}