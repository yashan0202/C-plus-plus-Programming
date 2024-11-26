#include<stdio.h> 
int main()
{
    //11.33 => double , 11.33f => float 
    //printf("%d " ,sizeof(10.33)); //double => 8 bytes 
    //printf("%d " ,sizeof(10.33f)); // float => 4 bytes 
    //printf("%d " ,sizeof(10.33F)); // float => 4 bytes 
    
    char ch; 
    printf("%d ",sizeof(ch)); //1 byte
    //ch => variable => type => char => 1 byte 

    printf("%d ",sizeof('A')); // 4 bytes 
    //           sizeof(65) => 4 bytes 
    //'A' => constant => char constant => int  
    return 0;
}
