#include<stdio.h> 
int main(int argc, char const *argv[])
{
    //int a;
    //printf returns the count of number of chars printed on terminal  
    //a = printf("Hello"); 
    //a = printf("Hello world"); 
     // \n , \t , \r => count => 1
    //a = printf("Hello world\t");  
    //printf("%d",a); // 12  
    
    /* 
    int ans = 10; 
    int x; 
    x = printf("ans = %d",ans);
    //          ans = 10 
    printf("\n%d",x); //8 
    */ 
    int a = 20; 
    int ans; 
    a = printf("%10d",a) + ++a;
    //          10               +    21     
    //                  2 0   
    //  - - - - - - - - - - 

    printf("\n%d",a); //31 
    return 0;
}
