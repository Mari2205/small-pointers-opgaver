#include <stdio.h>

void swap(int *y, int *x){
    int temp;
    temp = *x;  // temp = b || temp = 7
    *x = *y;    // b = a    || b = 3
    *y = temp;  // a = temp || a = 7

}

int main(void) {
  int a = 3, b = 7;

  printf("Before: %d %d\n", a, b);  // prints Before: 3 7
  swap(&a, &b);                     // calls swap function
  printf("After:  %d %d\n", a, b);  // prints After: 7 3

  return 0;
}