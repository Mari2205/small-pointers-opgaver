#include <stdio.h>

int main( void) {
  int a[5]= {1, 2, 3, 4, 5};
  int *pta, i;

   pta = a;                 // pta= &a[0];
  *pta = 4;                 // a[0] = 4
   pta++;                   // a[0 + 1]
  *pta = *(pta - 1) * 2;    // a[1] = 4*2
   pta += 3;                // a[1 + 3]
  (*pta)++;                 // a[5] = 6
  printf("index: %d\n", pta - a);

  for(i = 0; i < 5; i++) {
    printf("a[%d]: %d\n",i,a[i]);
  }
  return 0;
}