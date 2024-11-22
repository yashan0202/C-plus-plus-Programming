#include<stdio.h>
#define SIZE 9
int binary_search(int arr[SIZE],int key);
int comparisons;
int main()
{
    int arr[SIZE] = {11,22,33,44,55,66,77,88,99};
    int key;
    printf("Enter the key to search :");
    scanf("%d",&key); // 33

    int index = binary_search(arr,key);
    if(index == -1)
    {
        printf("Key not Found !\n");
    }
    else
        printf("Key found at index %d\n",index);

        printf("Comparisons = %d\n",comparisons);

    
    return 0;
}

int binary_search(int arr[SIZE],int key) // 33
{
    int left = 0, right = SIZE-1, mid;

while(left <= right) // 0 <= 8  ---->  0 <= 3 ---> 2 <= 3
{
    mid = (left + right)/2; // 4  ---> 1 ---> 2

    comparisons++;
    if(key == arr[mid]) // 33 == 55 ? no   ----> 33 == 22 ? no  ---> 33 == 33 
        return mid;

    // check if key is smaller or greater to arr[mid]

    if(key < arr[mid]) // consider left sub array // 33 < 55 --> 33 < 22 ? no
    {
        // left sub array is from left to mid-1
        right = mid-1; // right = 3
    }
    else
    {
        // else consider right sub array.
        // RSA is from mid + 1 to right
        left = mid + 1; // left = 2
    }
}
return -1;
}