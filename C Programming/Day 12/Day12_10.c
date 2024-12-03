#include<stdio.h>
int main(int argc, char const *argv[])
{
    //type qualifiers --- const , volatile 

    const int n = 10;
    printf("n = %d",n); //10 
    //n++; // NOT OK 
    //n = 20;  // NOT OK 
    return 0;
}
