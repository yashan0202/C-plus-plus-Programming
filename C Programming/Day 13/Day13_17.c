#include<stdio.h> 

void printArray(int *a); 
int main()
{
    int arr[4] = {10,20,30,40};
    
    printArray(arr); 
    int i; 
    printf("Inside main :: \n"); 
    for(i = 0 ; i < 4 ; i++)
       printf("%d ",arr[i]); 
    return 0;
}

void printArray(int *a){
    
    int index; 
    for(index = 0 ; index < 4 ; index++)
        printf("%d\n",a[index]); //*(a + index)

    for(index = 0 ; index < 4 ; index++)
        a[index]++;  // *(a + index)     
}