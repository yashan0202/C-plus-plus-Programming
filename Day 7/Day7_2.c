#include<stdio.h> 
int main( ){
    int choice = 1; 
    int x; 

    switch( choice )
   {  
        case 10 && 20:  // case 1:      
        printf("one");
        break;

        case 0 || 0:  //case 0:  
        printf("Two");
        break;
        
       

        //case x:  // NOT OK 
        //printf("x"); 

        default: 
        printf("Invalid"); 
        break; 

    }
    return 0; 
}

// int main( ){
//     int choice = 66; 
//     int x; 

//     switch( choice )
    
//     {  
//         case 65:
//         case 'B':  
//         //case 65 : case 'B' :  
//         //case 65 : 66 : // NOT OK 
//         printf("one");
//         break;

//         case 2:  
//         printf("Two");
//         break;
        
//         case 0:  
//         printf("Three");
//         break;  

//         //case x:  // NOT OK 
//         //printf("x"); 

//         default: 
//         printf("Invalid"); 
//         break; 

//     }
//     return 0; 
// }


// int main( ){
//     int choice = 65; 
//     int x; 

//     switch( 10 )
//     //switch( 2-1 )
//     //switch( 'A' )
//     //switch( 1.5 )
//     {  
//         case 1: 
//         printf("one");
//         break;

//         case 2:  
//         printf("Two");
//         break;
        
//         case 0:  
//         printf("Three");
//         break;  

//         //case x:  // NOT OK 
//         //printf("x"); 

//         default: 
//         printf("Invalid"); 
//         break; 

//     }
//     return 0; 
// }


// int main( ){
//     int choice = 65; 

//     switch( choice )
//     {  
//         //case 1:
//         //case 1 * 2: //case 2: 
//         //case 1.5: // NOT OK (only int) 
//         case 'A': //case 65: 
//         printf("A");
//         break;

//         case 2:  
//         printf("Two");
//         break;
        
//         case 0:  
//         printf("Three");
//         break;  

//         default: 
//         printf("Invalid"); 
//         break; 

        

        
//     }
//     return 0; 
// }


// int main( ){
//     int choice = 4; 

//     switch( choice )
//     {   

       

//         case 3: 
//         printf("One"); 
//         break; 

//         case 1:
//         printf("Two");
//         break;

//         case -4:  
//         printf("Two");
//         break;

//         case 0:  
//         printf("Three");
//         break;  

//         default: 
//         printf("Invalid"); 
//         break; 

//         //case 3:  //ERROR ( duplicate case not allowed )
//         //printf("Three");
//         //break;  

        
//     }
//     return 0; 
// }


// int main( ){
//     int choice = 4; 

//     switch( choice )
//     {   

       

//         case 1: 
//         printf("One"); 
//         break; 

//         case 2:
//         printf("Two");
//         break; 

//         case 3:  
//         printf("Three");
//         break;  

//         default: 
//         printf("Invalid"); 
//         break; 

        
//     }
//     return 0; 
// }




// int main( ){
//     int choice = 2; 

//     switch( choice )
//     {
//         case 1: 
//         printf("One"); 
//         break; 

//         case 2:
//         printf("Two");
//         break; 

//         case 3:  
//         printf("Three");
//         break;  
//     }
//     return 0; 
// }
// int main( ){
//     int choice = 3; 

//     switch( choice )
//     {
//         case 1: 
//         printf("One"); 

//         case 2:
//         printf("Two");

//         case 3:  
//         printf("Three"); 
//     }
//     return 0; 
// }