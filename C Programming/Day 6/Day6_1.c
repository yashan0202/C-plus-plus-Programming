#include<stdio.h> 

int main()
{
    /*
        logical Operators 
        // T => 1 
        // F => 0 

        && => logical AND 
        || => logical OR 
        !  => logical NOT 
     
     //Any non-zero values including (-ve) is considered as true 
     // 0 -> false 
    */    

    //logical NOT ( ! )
    printf("%d ",!10); //0 
    // 10 -> non-zero value => True 
    //!T => False => 0  

    printf("%d " , !-13); // 0 
    // !T => F  

    printf("%d ",!0); // 1 
    // 0 => false =>!false => T 

    printf("%d ",!!0); // 0 
    // !!False => !F => T => !T => F  
    return 0;
}
