#include <stdio.h>

int main(void) {
  int a[3];

  /* Menigsløst resultat */
  printf("%d\n", a[3]);


  /* FARLIGT! */
  /*  a[3]= 17; */

  return 0;
}