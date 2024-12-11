#include <stdio.h>
#include <string.h>

struct emp // blueprint (declaration)
{
    // structures members
    int empno;     // 4
    char name[20]; // 20
    double salary; // 8
};
void accept_emp(struct emp arr[]);
void print_emp(struct emp arr[]); 
int main()
{
    // int arr[3] = {1,2,3};

    // Array of structures
    struct emp arr[3];

    accept_emp(arr); // base address
    print_emp(arr);  // base address

    return 0;
}
void print_emp(struct emp arr[])
{
    int i;
    for (i = 0; i < 3; i++)
        printf("%d %s %.2lf\n", arr[i].empno, arr[i].name, arr[i].salary);
}
void accept_emp(struct emp arr[])
{
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("Enter empid , name , salary :: ");
        scanf("%d%s%lf", &arr[i].empno, arr[i].name, &arr[i].salary);
    }
}