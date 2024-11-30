#include<stdio.h>

struct student
{
    int roll_no;
    char name[20];
    float marks;
};

void accept_data(struct student *ptr)
{
    printf("Enter the roll no, name and marks :");
    scanf("%d%s%f",&ptr->roll_no,&ptr->name,&ptr->marks);
}

void print_data(struct student s1)
{
    printf("Roll no = %d\n Name = %s\nMarks = %.2f\n",s1.roll_no,s1.name,s1.marks);
}

int main()
{
    struct student s1;
    accept_data(&s1);
   // print_data(s1);
    s1.marks = 50;
    print_data(s1);
    return 0;
}