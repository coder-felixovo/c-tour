#include <stdio.h>

/* Program List 2.2 */
/* Convert 2 fathoms to feet */
int main(void)
{
  int feet, fathoms;

  fathoms = 2;
  feet = 6 * fathoms; /* 1 fathom is equal to 6 feet */
  printf("There are %d feet in %d fathoms!\n", feet, fathoms);
  printf("Yes, I said %d feet!\n", 6 * fathoms);
  
  return 0;
}