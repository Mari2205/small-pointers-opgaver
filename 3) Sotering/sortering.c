#include <stdio.h> 
#include <stdlib.h>

void swap(int *y, int *x){
    int temp;
    temp = *x; 
    *x = *y;    
    *y = temp;  

}

void IfBiggerSwap(int *a, int *b){
    if (*a > *b)
    {
        swap(a, b);
    }
}

int main()
{
    int nums[] = {1,30,2,5,3,9};
    int length = sizeof(nums)/sizeof(nums[0]);
 
    for (int i = 0; i < length; i++)
    {
        for (int i = 0; i < (length -1); i++)
        {
            IfBiggerSwap(&nums[i], &nums[i + 1]);
        }
    }

    for (int i = 0; i < length; i++)
    {
        printf("numbers: %d\n", nums[i]);
    }

    return 0;
}