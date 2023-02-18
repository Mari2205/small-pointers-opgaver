#include <stdio.h> 
#include <stdlib.h>



int main()
{
    printf("Hello, world!\n"); 

    int tun = 17;
    int *pTun = &tun;

    printf("*ptun p = %p \n", *pTun); 
    printf("ptun p = %p \n", pTun); 
    printf("*ptun d = %d \n", *pTun); 
    printf("ptun d = %d \n", pTun); 

    return 0;
}
