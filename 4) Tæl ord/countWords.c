#include <stdio.h> 
#include <stdlib.h>
#include <string.h>



int main()
{
    //printf("Hello, world!\n"); 

    char string[] = "hej med dig jeg her jf ki";
    //printf(string);
    //char str[][] = {"hej", "med"};
    //char strr = {"hej", "med"};

    char *pString = string;
    //printf("\n%c\n", *pString);
    int numOfWords = 0;
    while (*pString != '\0')
    {
        //printf("\n%c", *pString);
        pString++;
        if(*pString == ' '){
            //printf("mellem rum %c", *pString);
            numOfWords++;
        }
    }

    numOfWords ++;
    printf("antalet af ord er %d", numOfWords);
    
    

    return 0;
}
