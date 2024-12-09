#include <stdio.h>
int main()
{
    int arr[3][4] = {{1, 2, 3, 4}, {10, 20, 30, 40}, {11, 22, 33, 44}};
    int(*ptr)[4] = arr; // pointer to 2D array
    // scale factor => number of coln * size of datatype
    //                     4          *     4
    //                          16 bytes
    // outer address

    int row, col;
    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 4; col++)
        {
            printf("%u ", &arr[row][col]);
        }
        printf("\n");
    }
    printf("\n");
    // printf("%u ",ptr); //400

    // printf("%u ",ptr+1); //416
    /*
            400 + 1
            400 + 1 * 16
            416

    */
    // printf("%u ",ptr+2); // 432

    // inner address
    // printf("%u ",*(ptr + 0) ); //400
    // printf("%u ",*(ptr + 1) ); //416
    // printf("%u ",*(ptr + 2) ); //432

    // printf("%u ",*(*(ptr + 0) )  ); //*400 => 1
    // printf("%u ",*(*(ptr + 1)) ); //*416  => 10
    // printf("%u ",*(*(ptr + 2)) ); //*432 => 11

    // printf("%u ",*(ptr + 0) + 1 ); // 404
    // printf("%u ",*(*(ptr + 0) + 1)); // *404 => 2  ( pointer notation )
    // printf("%u ",ptr[0][1]); //2 (array notation )

    // printf("%u ",ptr + 2); // outer address
    // printf("%u ",*(ptr + 2)); // inner address
    // printf("%u ",*(ptr + 2) + 1 ); // inner address(436)
    // printf("%u ",*(*(ptr + 2) + 1 ) ); // *436 => 22
    // printf("%u ",ptr[2][1]); //22
    printf("%u ", ptr[2][-3]); // 20
    /*
                ptr[2][-3]
                *(ptr + 2) + -3
                *(ptr + 2) - 3
                  *(432 - 3)
                  *(432 - 3 * 4)
                  *(432 - 12)
                  *(420)
                  20

    */
    return 0;
}
