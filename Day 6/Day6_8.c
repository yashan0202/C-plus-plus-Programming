#include<stdio.h> 

/*
    I/p a ammount 
    if amm is greater than or equal to 5000.00  
    give 10% discount  
*/
int main()
{
    double ammount , discount; 
    //Input: 
    printf("Enter the ammount : "); 
    scanf("%lf",&ammount); 

    //Processing 
    if(ammount >= 5000.00)
        ammount = ammount * 0.90; 
    printf("Ammount = %.2lf",ammount); 
    return 0;
}
// int main()
// {
//     double ammount , discount; 
//     //Input: 
//     printf("Enter the ammount : "); 
//     scanf("%lf",&ammount); 

//     //Processing 
//     if(ammount >= 5000.00){
//         discount = ammount * 0.10; 
//         ammount = ammount - discount; 
//     }
//     printf("Ammount = %.2lf",ammount); 
//     return 0;
// }
