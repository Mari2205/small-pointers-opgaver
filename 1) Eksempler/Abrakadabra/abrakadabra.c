#include <stdio.h>

int main( void) {
  char s[]= "abrakadabra"; 
  char *p;

  printf("%s\n", s);    // printer stringen "abrakadabra"
  p = s;                // p = &s[0];
  while (*p != '\0') {  // while(s.length) || '\0' betyder tilsidst 
    if (*p == 'a') {    // s[x] == 'a'
      *p= 'i';          // s[x] = 'i' || den replacer 'a' med 'i'
    }
    p++;                //index++; ||s[x+1]
  }

  printf("%s\n", s);  //printer den nye string "ibrikidibri"
  return 0;           // default && 0 = false 
}