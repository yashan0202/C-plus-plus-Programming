#include<stdio.h> 

/*
    student info 
    std 1 to 4 => Grade ('A','B','C) 
    std 5 to 10 => marks (30, 40, 50)
*/

struct student{
    int roll; //4  
    char name[20];//20  
    int std; //4
    union{ // 4 bytes 
        char grade; 
        int marks; 
    }result; 
}; 

int main()
{
    struct student s1; 
    printf("Enter roll name and std"); // 1 Aditya 5 
    scanf("%d%s%d%*c",&s1.roll,s1.name,&s1.std);
    if(s1.std <=4){
        printf("Enter the grade "); 
        s1.result.grade = getchar( );  
    } 
    else{
        printf("Enter the marks :: "); 
        scanf("%d",&s1.result.marks); // 70
    }
    printf("roll = %d name = %s std = %d",s1.roll,s1.name,s1.std); //1 Aditya 5 70 
    if(s1.std<=4){
        printf(" Grade = %c",s1.result.grade); 
    }
    else{
        printf(" Marks = %d",s1.result.marks); 
    }
    return 0;
}
