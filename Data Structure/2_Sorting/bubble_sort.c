#include<stdio.h>
#define SIZE 6
#define SWAP(a,b) int temp = a; a = b; b = temp;

void bubble_sort(int arr[SIZE]);
void display(int arr[SIZE]);
void Efficient_bubble_sort(int arr[SIZE]);

int main()
{
  //  int arr[SIZE] = {30,20,60,50,10,40};
  int arr[SIZE] = {11,22,33,44,55,66};
    printf("\n Before Sort :\n");
    display(arr);
    bubble_sort(arr);
    Efficient_bubble_sort(arr);
    printf("\n After Sort :\n");
    display(arr);
    return 0;
}

// Normal Bubble Sort.
void bubble_sort(int arr[SIZE])
{
    int it,pos;
    int iterations = 0, comparisons = 0;
// iterations
    for(it = 0;it < SIZE-1;it++) // it = 0 --> 1 --> 2 --> 3 --> 4
    {
        // comparisons
        iterations++;
        for(pos= 0;pos < SIZE-1-it; pos++) // 4 --> 3 --> 2 --> 1 --> 0
        {
            comparisons++;
            if(arr[pos] > arr[pos+1])
            {
                // swap
                SWAP(arr[pos],arr[pos+1]);
            }
        }

    }
    printf("\n Normal Sort : Iterations = %d Comparisons = %d\n",iterations,comparisons);
}

// Efficient Bubble Sort
void Efficient_bubble_sort(int arr[SIZE])
{
    int it,pos;
    int flag;
    int iterations = 0, comparisons = 0;
// iterations
    for(it = 0;it < SIZE-1;it++) // it = 0 --> 1 --> 2 --> 3 --> 4
    {
        // comparisons
        iterations++;
        flag = 0;
        for(pos= 0;pos < SIZE-1-it; pos++) // 4 --> 3 --> 2 --> 1 --> 0
        {
            comparisons++;
            if(arr[pos] > arr[pos+1])
            {
                // swap
                SWAP(arr[pos],arr[pos+1]);
                flag = 1;
            }
        }
        if(flag == 0)
            break;

    }
    printf("\n Efficient Sort : Iterations = %d Comparisons = %d\n",iterations,comparisons);
}


void display(int arr[SIZE])
{
    for(int i =0; i< SIZE; i++)
    {
        printf("%4d",arr[i]);
    }
}