#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

void swap(char **y, char **x){
    char *temp;
    temp = *x; 
    *x = *y;    
    *y = temp;  

}

void ComesBeforeSort(char *input[], int arrCount){
    for (int i = 0; i < (arrCount - 1); i++)
    {
        if (strcmp(input[i], input[(i + 1)]) > 0)
        {
            swap(&input[i], &input[(i + 1)]);
        }
    }
}


int main()
{
    char *pInput[3] = {"banana", "abe", "citron"};
    int arrCount = sizeof(pInput) / sizeof(pInput[0]);

    printf("input arr: %s %s %s\n",pInput[0], pInput[1], pInput[2]);
    ComesBeforeSort(pInput, arrCount);
    printf("output arr: %s %s %s\n",pInput[0], pInput[1], pInput[2]);

    return 0;
}