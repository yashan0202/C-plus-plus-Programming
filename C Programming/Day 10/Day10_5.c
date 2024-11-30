#include<stdio.h> 

int main()
{
    int c = 10;
    {
        {
            {
                {
                    printf("%d",c); 
                }
            }
        }
    }
    return 0;
}

// int main()
// {
//     {
//        {
//         {
//             {
//                 int c = 10; 
//             }
//         }
//        }
//     }
//     printf("%d",c); //NOT OK 
//     return 0;
// }

// int main()
// {
//     {
//         int c = 10; 
//         printf("%d ",c); 
//         {
//             int c = 20; 
//             c+=1; 
//             printf("%d ",c);
//         }
//         printf("%d ",c);
//     }
//     return 0;
// }

// int main()
// {
//     {
//         int c = 10; 
//         printf("%d ",c); 
//         {
//             c+=1; 
//             printf("%d ",c);
//         }
//         printf("%d ",c);
//     }
//     return 0;
// }
