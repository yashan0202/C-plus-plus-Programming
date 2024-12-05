// Access Specifiers
// Structure in CPP

// structure in C
#include<stdio.h>
struct student
{
private:
    int roll_no;
    char name[20];
    float marks;

public :
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
   //  s1.marks = 50; // Error 
    s1.print_data();

    struct student s2;
    s2.accept_data();
    s2.print_data();

    return 0;
}

/*
By default all the members of the structure are public.
There are 2 access specifiers for structure.
1) private
2) public


*/