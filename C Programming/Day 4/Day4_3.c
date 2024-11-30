#include<stdio.h> 

int main( ){
    /*
        NOTE : Remember the ASCII values 
            A - Z => 65  to 90 
            a - z => 97  to 122  
    */
    //character => ASCII value (integer value)
    //char ch = 'A';  // 65 => 65 ka binary 
    char ch = 65; //OK 
    //char are internally integral constants (ASCII)

    //printf("%c\n",ch); //CHAR => A 
    //printf("%d",ch); //ASCII A => 65 
    printf("%d",'A' - 65); //Char subtraction => ASCII value sub 
    //      65 - 65 => 0 
    return 0; 
}
