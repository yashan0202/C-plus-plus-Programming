#include<stdio.h> 
int main()
{
    char *arr[ ] = {"one", "two", "three", "four"}; 
    
    // array notation 
    // printf("%u ",arr[0]); //4214784
    // printf("%u ",arr[1]); //4214788
    // printf("%u ",arr[2]); //4214792
    // printf("%u ",arr[3]); //4214798

    // printf("%u ",*(arr + 0) + 0  ); //4214784   
    // printf("%u ",*(arr + 0) + 1  ); //4214785 
    // printf("%u ",*(arr + 0) + 2  ); //4214786  
    // printf("%u ",*(arr + 0) + 3  ); //4214787   
    
    // pointer notation 
    // printf("%c ",*(*(arr + 0) + 0 )); //o 
    // printf("%c ",*(*(arr + 0) + 1)  ); //n
    // printf("%c ",*(*(arr + 0) + 2 ) ); //e 
    // printf("%d ",*(*(arr + 0) + 3)); //0 

    // array notation 
    printf("%c ",arr[0][0]); // *(*(arr + 0) + 0) => o   
    printf("%c ",arr[0][1]); // *(*(arr + 0) + 1) => n 
    printf("%c ",arr[0][2]); // *(*(arr + 0) + 2) => e      
    
    return 0;
}
