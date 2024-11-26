#include<stdio.h> 
int main()
{
    //\' => prints single quote 
    //printf("\'Hello world\'"); 
    
    //\"
    //printf("\"Hello world\"");  
    
    // \n => new line 
    //printf("Sunbeam\nPune"); 
    
    //\b => backspace 
    //printf("OM58 batch,\b"); 
    //      OM58 batch,

    //printf("OM58 batch,\b."); 
    //      OM58 batch.
    
    //printf("Hello wo\brld");
    //      Helllo wrld
    
    //\r => carraige return 
    //printf("eello world\rH");
    //      Hello world  
    
    //\t => tab spaces ( 8 spaces )
    //printf("12345678\n"); 
    //printf("\tHelloworld"); 
    
    //printf("\\n is used for new line"); 
    
    // \n , \r , ,\t => char constant => integeral (ASCII)
    //Remember the ascii values 

    //printf("%d ",'\n');//10  // %d => print the ascii value of \n 
    //printf("%d ",'\t');//9 // %d => print the ascii value of \t  

    printf("%d",'\n' - '\t'); //ASCII value subtraction
    //      10  -  9 => 1 
    return 0;
}
