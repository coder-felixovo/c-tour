/* Program List 4.13 */
/* prntval.c -- printf()返回值 */

#include <stdio.h>
int main(void)
{
  int bph2o = 212;
  int rv;

  rv = printf("%d F is water's boiling point.\n", bph2o);
  printf("The printf() function printed %d characters.\n", rv);

  return 0;
}

/*
212 F is water's boiling point.
The printf() function printed 32 characters.
*/