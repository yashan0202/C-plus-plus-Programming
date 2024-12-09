#include<stdio.h> 
void readArray( int arr[3][3]); 
void printArray( int arr[3][3]); 
int main()
{
    int arr[3][3]; 
    printf("Enter the array elements "); 
    readArray(arr); 
    printf("Array elements are :: "); 
    printf("\n"); 
    printArray(arr); // Base address 
    return 0;
}

void printArray( int arr[3][3])
{
    int i , j; 
    for( i = 0 ; i < 3 ; i++)
    {
        for( j = 0 ; j < 3 ; j++)
        {
            printf("%4d",arr[i][j]); 
        }
        printf("\n"); 
    }

}

void readArray( int arr[3][3])
{
    int i , j; 
    for( i = 0 ; i < 3 ; i++)
    {
        for( j = 0 ; j < 3 ; j++)
        {
            scanf("%d",&arr[i][j]); 
        }
    }

}
