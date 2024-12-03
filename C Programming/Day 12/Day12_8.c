#include<stdio.h> 
void sumpro(int *a , int *b , int *ps , int *pp) 
{ 
    *ps = *a + *b; // 12 + 4 ==> valueat(ps) ==> address of s 
    *pp = *a * *b; // 12 * 4 => valueat(pp) ==> address of p 
} 

int main() { 
int x = 12, y = 4, s, p; 
sumpro(&x, &y, &s, &p); 
printf("%d %d", s, p); 
return 0; 
} 