// Structure in CPP

// structure in C
#include<stdio.h>
struct student
{
    int roll_no;
    char name[20];
    float marks;


void accept_data()
{
    printf("Enter the Roll no, name and marks :");
    scanf("%d%s%f",&roll_no,&name,&marks);
}


void print_data()
{
    printf("Roll No : %d\n Name = %s\n Marks = %.2f\n",roll_no,name,marks);
}

};



int main()
{
    struct student s1;
    s1.accept_data(); // accept_Data(&s1)
    s1.marks = 50;
    s1.print_data();

    struct student s2;
    s2.accept_data();
    s2.print_data();

    return 0;
}