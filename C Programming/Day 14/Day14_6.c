#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Sunbeam Infotech";
    //             Sunbeam Infotech\0

    char *str2 = "Sunbeam Infotech"; // pointer to string
    //            Sunbeam Infotech\0

    char str3[] = "Sunbeam\0infotech";
    //              "Sunbeam\0infotech\0";

    //printf("%d ",sizeof(str1)); //17 
    //printf("%d ",sizeof(str2)); //pointer size ==> 4 / 8  
    //printf("%d ",sizeof(str3)); //17 

 //strlen() -> function that counts number of chars 
 // until \0 is encountered    

    //printf("%d ",strlen(str1)); //16
    //printf("%d ",strlen(str2)); //16 
    //printf("%d ",strlen(str3)); //7 
    
    printf("%s\n",str1); //Sunbeam Infotech
    printf("%s\n",str2);//Sunbeam Infotech
    printf("%s\n",str3);//Sunbeam
    return 0;
}
