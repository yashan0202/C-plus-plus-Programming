#include<stdio.h> 

int main()
{
    char ch = 'A'; 
    char *cptr = &ch; 
    char **cpptr = &cptr; 

    printf("%d\n",sizeof(ch));//1 
    printf("%d\n",sizeof(cptr)); // 4 bytes   
    printf("%d\n",sizeof(*cptr));//1 bytes 
    
    printf("%d\n",sizeof(cpptr)); // 4 bytes 
    printf("%d\n",sizeof(*cpptr));// 4 bytes
    printf("%d\n",sizeof(**cpptr));// 1 bytes 
    return 0;
}
