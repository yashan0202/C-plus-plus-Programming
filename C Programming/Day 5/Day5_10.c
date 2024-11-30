#include<stdio.h> 

int main(int argc, char const *argv[])
{
    //incrment / decrement operators ( ++ , --)
    /*
        increment => ++ ( increment the value by 1 )
        decrement => -- ( decrement the value by 1)
    */
    // int ans; 
    // int num = 2; 
    // ans = num; 
    // printf("ans = %d num = %d",ans,num); // 2 2 

     
    // int ans; 
    // int num = 2; 
    // ans = ++num; // pre-increment  
    // //1.first increment the value 
    // //2.Assign the value 
    // printf("ans = %d num = %d",ans,num); // 3 3  

    
    // int ans; 
    // int num = 2; 
    // ans = num++; // post-increment  
    // //1.Assign the value  
    // //2.Increment 
    // printf("ans = %d num = %d",ans,num); // 2 3  

    // int ans; 
    // int num = 2; 
    // ans = --num; // pre-decrement 
    // //1.first decrement the value 
    // //2.Assign the value 
    // printf("ans = %d num = %d",ans,num); // 1 1 

    int ans; 
    int num = 2; 
    ans = num--; // post-decrement 
    //1.Assign the value 
    //2.decrement the value 
    printf("ans = %d num = %d",ans,num); // 2 1 
    return 0;
}
