#include <stdio.h>

int main()
{
    int num = 10; 
    enum{ //Annonymous enum 
        RED,BLUE,GREEN
    }c1,c2,c3; 
    //c1 ,c2 , c3 => variables 
    return 0;
}


// int main()
// {
//     int x = 10;
//     enum color
//     {
//            RED,BLUE,GREEN
//         // RED,BLUE,GREEN,violet
//         // RED=1,BLUE,GREEN,VIOLET // OK
//         // RED=1,BLUE=2,GREEN=3,VIOLET=4 // OK
//         // RED=-1,BLUE,GREEN=33,VIOLET // OK
//         // RED=-1,BLUE,GREEN=-1,VIOLET // OK
//         // RED=1.5,BLUE,GREEN=-1,VIOLET //NOT OK
//         // RED='A',BLUE,GREEN=44,VIOLET // OK
//         // RED,BLUE,GREEN=44,RED // NOT OK
//         // RED = x,BLUE,GREEN // NOT OK ( only int constants are allowed)
//     };
//     return 0;
// }

// int main( )
// {
//     // int , float , char , double
//     // enum ( user-defined type)

//     enum color // creating the datatype
//     {
//         RED,BLUE,GREEN
//     };
//     //printf("%d",RED);
//     /*
//             int ==> datatype
//             x => variable-name
//             int x; data-type variablename
//     */
//     enum color c1,c2,c3;
//     //enum color => datatype
//     // c1 => variable-name
//     c1 = RED;
//     printf("%d ",c1); //0
//     c1 = GREEN;
//     printf("%d ",c1); //2
//     c1++;
//     printf("%d ",c1); //3

//     printf("%d %d",sizeof(c1),sizeof(enum color));
//     //                  4              4
//     return 0;
// }

/*
    enum IPL
    {
        CSK , MI , RR
    };
        0     1     2
*/