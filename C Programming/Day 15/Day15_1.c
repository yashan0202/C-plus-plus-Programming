#include<stdio.h> 
#include<string.h> 
char* mystrcpy(char *dest, const char *src);
int main()
{
    char *p; 
    char src[50] = "hello"; 
    char dest[50]; 
    //strcpy(dest,src); 
    p = mystrcpy(dest,src);
    puts(p);  
    return 0;
}
// src => H e l l o \0 

// dest=> H e l l o \0       

char* mystrcpy(char *dest, const char *src)
{
        int i = 0; 
        while(src[i]!='\0')
        {
              dest[i] = src[i]; 
              i++;  
        }
        dest[i] = '\0'; 
        return dest; 

}


// int mystrlen(const char *s);
// int main()
// {
//     int res; 
//     char name[50] = "Readers"; 
//     //printf("%d ",strlen(name));  
//     res = mystrlen(name); 
//     printf("%d ",res); 
//     return 0;
// }
// // R e a d e r s \0 
// int mystrlen(const char *s) 
// {
//     int i = 0; 
//     while(*(s+i)!='\0')
//     {
//         i++;  
//     }
//     return i; 
// }
