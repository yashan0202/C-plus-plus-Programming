#include<stdio.h> 
/*
    cal peri of rectangle 
    peri = 2 * (len + breadth) 
*/
int main()
{
    //variable declaration 
    int length , breadth , peri; 

    //1.Input 
    printf("Enter the length  and breadth :: "); 
    scanf("%d%d",&length,&breadth); 

    //2.Processing 
    //peri = 2 * (len + breadth) 
     peri = 2 * (length + breadth);

    //3.Output
    printf("Peri = %d",peri);   
    return 0;
}
