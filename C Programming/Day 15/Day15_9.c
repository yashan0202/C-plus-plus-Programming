#include<stdio.h> 

int main( )
{
    char names[5][10];
    /*
                  [0]  [1]  [2] ..... [9]
            
            [0]    S    A    M        \0 

            [1]    R    a    h   u  l \0 

    */  
    int i; 
    for( i = 0 ; i < 5 ; i++ )
    {
        printf("Enter the  names[%d] :: ",i); 
        scanf("%s", &names[i]); 
    }
    printf("Names are \n"); 
    for( i = 0 ; i < 5 ; i++)
    {
        printf("%s\n",names[i]); 
    }
    return 0; 
}