#include <stdio.h>

/* Program List 2.5 */
/* Fixed syntax error in the program */
int main()
{
  int n, n2, n3;

  /* A semantic error */
  n = 5;
  n2 = n * n;
  n3 = n2 * n2;
  printf("n = %d, n squared = %d, n cubed = %d", n, n2, n3);

  return 0;
}