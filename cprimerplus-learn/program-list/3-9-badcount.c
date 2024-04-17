/* Program List 3.9 */
/* badcount -- error paramters */

#include <stdio.h>

int main(void)
{
  int n = 4;
  int m = 5;
  float f = 7.0f;
  float g = 8.0f;

  printf("%d\n", n, m); /* too many paramters */
  printf("%d %d %d\n", n); /* too few paramters */
  printf("%d %d\n", f, g); /* the type of the value does not match */

  return 0;
}