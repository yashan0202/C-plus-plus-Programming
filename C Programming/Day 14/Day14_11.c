#include<stdio.h> 
/*
     0 => zero 
     1 => one 
     2 => two
     3 => three 
     4 => four 
*/
int main()
{
    int num; 
    char *numbers[] ={"zero","one","two","three"}; 
    //printf("%d",sizeof(numbers)); // 4 * 4 -> 16 
    printf("Enter the number "); 
    scanf("%d",&num); // 2 => two 
    printf("%s",numbers[num]); //numbers[2]
    return 0;
}