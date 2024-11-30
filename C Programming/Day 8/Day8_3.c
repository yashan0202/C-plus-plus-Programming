#include <stdio.h>
int main()
{   
    enum operations{
        ADD=1,SUBTRACT,MULTIPLY,DIVIDE
    }; 
    int num1, num2, ans, op;
    
    enum operations choice;
 
   do
   {
        printf("1.Addition\n");
        printf("2.Subtraction\n");
        printf("3.Multiplication\n");
        printf("4.Division\n");

        printf("Enter the num1 and num2 :: ");
        scanf("%d%d", &num1, &num2);

        printf("Enter the choice :: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case ADD:
            ans = num1 + num2;
            break;
        case SUBTRACT:
            ans = num1 - num2;
            break;

        case MULTIPLY:
            ans = num1 * num2;
            break;

        case DIVIDE:
            ans = num1 / num2;
            break;

        default:
            printf("Invalid choice"); 
            break;
        }
        printf("ans = %d\n",ans);
        printf("0 to exit and any non-zero value to continue :: "); 
        scanf("%d",&choice); 
   }while(choice!=0);  
    return 0;
}

// int main()
// {   
//     enum operations{
//         ADD=1,SUBTRACT,MULTIPLY,DIVIDE
//     }; 
//     int num1, num2, ans, op;
    
//     enum operations choice;

//     printf("1.Addition\n");
//     printf("2.Subtraction\n");
//     printf("3.Multiplication\n");
//     printf("4.Division\n");

//     printf("Enter the num1 and num2 :: ");
//     scanf("%d%d", &num1, &num2);

//     printf("Enter the choice :: ");
//     scanf("%d", &choice);

//     switch (choice)
//     {
//     case ADD:
//         ans = num1 + num2;
//         break;
//     case SUBTRACT:
//         ans = num1 - num2;
//         break;

//     case MULTIPLY:
//         ans = num1 * num2;
//         break;

//     case DIVIDE:
//         ans = num1 / num2;
//         break;

//     default:
//         printf("Invalid choice"); 
//         break;
//     }
//     printf("ans = %d",ans); 
//     return 0;
// }


// int main()
// {
//     int num1, num2, ans, op;
//     int ADD = 1, SUBTRACT = 2, MULTIPLY = 3, DIVIDE = 4;
//     int choice;

//     printf("1.Addition\n");
//     printf("2.Subtraction\n");
//     printf("3.Multiplication\n");
//     printf("4.Division\n");

//     printf("Enter the num1 and num2 :: ");
//     scanf("%d%d", &num1, &num2);

//     printf("Enter the choice :: ");
//     scanf("%d", &choice);

//     switch (choice)
//     {
//     case ADD:
//         ans = num1 + num2;
//         break;
//     case SUBTRACT:
//         ans = num1 - num2;
//         break;

//     case MULTIPLY:
//         ans = num1 * num2;
//         break;

//     case DIVIDE:
//         ans = num1 / num2;
//         break;

//     default:
//         printf("Invalid choice"); 
//         break;
//     }
//     printf("ans = %d",ans); 
//     return 0;
// }
