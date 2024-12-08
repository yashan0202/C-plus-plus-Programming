#include<stdio.h> 

int main()
{
    char name[50]; 
    printf("Enter the name :: "); 

    //scanf("%s",name); 
    //scanf("%[^\n]",name); // scan set 
    /*
        %s will read upto white spaces 
        (space , tab , newline)
    */
    gets(name); //preferred way of reading whole line  
    printf("%s",name); 
    return 0;
}
