#include<stdio.h> 

int main()
{   
    // char str1[20] ="Sunbeam"; //stack 
    // char str2[20] ="Sunbeam"; //stack 
    // if(str1 == str2) //comparing addresses 
    //   printf("Same"); 
    // else 
    //   printf("not same"); 

    
    // //pointer to the string 
    // char *str1 = "Info"; //pointer to string 
    // char *str2 = "Info"; //pointer to string
    // // memory is allocated from RO data-section (read-only) 

    // if(str1 == str2) 
    //    printf("Same"); 
    // else 
    //    printf("not same"); 

    // char name[10] = "ABC"; //stack 
    // printf("%s ",name); // ABC 
    // name[0] = 'K'; 
    // printf("%s ",name);// KBC 

    // char *str3 = "ABC"; //RO-Data section (read-only)
    // printf("%s ",str3);//ABC 
    // //str3[0] = 'K'; // runtime error (trying to modify from RO data section )
    // printf("%s ",str3);
    // printf("Hello"); 

    char str5[20] = "Sunbeam"; 
    printf(str5); //Sunbeam
    printf("\n"); 
    printf(str5 + 1);//unbeam 
    printf("\n"); 
    printf(str5 + 2);
    return 0;
}
