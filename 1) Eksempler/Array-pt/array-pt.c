#include <stdio.h>

int main (void) {
  int a[3], i;

  *a = 5;                   // a[0] = 5
  *(a + 1) = 4;             // a[1] = 4
  *(a + 2) = *a + *(a + 1); //a[2] = a[0] + a[1] || a[2] = 5 + 4

  for (i = 0; i < 3; i++) {         // normal for loop
    printf( "%d: %d\n", i, a[i]);   // prints i a[i]  
  }                                 // output prediction:
                                    // 0: 5 
  return 0;                         // 1: 4  
}                                   // 2: 9