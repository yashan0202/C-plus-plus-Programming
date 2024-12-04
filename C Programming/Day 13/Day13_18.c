#include<stdio.h> 

void printArray(int arr[]); 
int main()
{
    int arr[4] = {1,2,3,4};
    //arr++; // NOT OK  
    printArray(arr); 
    return 0;
}

void printArray(int arr[])
{
    printf("%d ",*arr);  //1 
    arr++;   // 100 ==> 104  ( pointer ==> pointer arithmatic)
    printf("%d ",arr[-1]); // 1 
    /*
        arr[-1]
        *(arr + -1)
        *(arr - 1)
        *(104 - 1)
        *(104 - 1  * 4 )
        *(104 - 4)
        *(100)
        valuat(100)
        1
    */
}