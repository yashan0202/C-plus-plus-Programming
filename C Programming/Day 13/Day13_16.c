#include<stdio.h> 
void readArray(int *ptr); 
void printArray(int arr[]); 
int main()
{
    int arr[5];
    //printf("%d ", sizeof(arr)); // 20 bytes 
    printf("Enter the array elements :: "); 
    readArray(arr); // base address   
    printf("Array elements are :: "); 
    printArray(arr); 
    return 0;
}
//pointer notation               
void readArray(int *ptr)
{
    //printf("%d ", sizeof(ptr)); // 4 ( pointer )
    int index; 
    for(index = 0 ; index < 5 ; index++)
        scanf("%d",&ptr[index]); 
}
void printArray(int arr[]){
    //printf("%d ", sizeof(arr)); // 4 ( pointer )
    int index; 
    for(index = 0 ; index < 5 ; index++)
        printf("%d\n",arr[index]); //*(arr + index)  
}