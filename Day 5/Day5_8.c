#include<stdio.h> 
int main()
{
    //short hand assignment
    int a = 1; 
    int b = 2; 
    int c = 3; 

    //a+=b+=c+=1;
    /*
        c = c + 1 => 3 + 1 => 4 
        b = b + c => 2 + 4 => 6 
        a = a + b => 1 + 6 => 7 
    */
   a = b = c = -3;  
   printf("%d %d %d",a,b,c); 
    
    return 0;
}


// int main()
// {
//     //short-hand assignment operator 
//     int num1 = 4; 
//     //num1 = num1 + 3; 
//     //num1+=3; // num1 = num1 + 3   => 4 + 3 
//     //num1-=1; // num1 = num1 - 1   => 4 - 1   
//     //num1*=2; // num1 = num1 * 2   => 4 * 2  
//     //num1%=4; // num1 = num1 / 4   => 4 % 4 => 0 
//       num1/=2; // num1 = num1 / 2   => 4 / 2 => 2 
//     printf("num1 : %d",num1); 
//     return 0;
// }


// int main()
// {
//    //Assignment operator 
//    // ( = )
//    /*
//    int num1; 
//    num1 = 2; //assignment    
//     10 = 2;//lvalue error  
//    printf("num1 = %d",num1); 
//    */ 
//    /* 
//    int a = 1; 
//    //a + 1; 
//    a = a + 1; 
//    printf("a = %d",a); 
//    */ 
//    int x = 1; 
//    int y = 2; 
//    printf("%d ",x); 
//    printf("%d ",x=y);
//    printf("%d ",x);   
//    return 0;
// }
