#include <stdio.h> 
#include <stdlib.h>

void backwards(int length, char arr[]){
    for (int i = (length-1); i > 0; i--)
    {
        int index = i -1;
        printf("%c", arr[index]);
    }
    return;
}

int main(){
    char str[] = "rambuk";

    int length = sizeof(str);
    for (int i = 0; i < (length-1); i++)
    {
        printf("%c", str[i]);
    }
    printf("\n");

    backwards(length, str);

    return 0;
}