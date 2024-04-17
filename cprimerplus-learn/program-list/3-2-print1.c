/* Program List 3.2 */
/* print1.c -- demonstrate some features of printf() */

#include <stdio.h>

int main(void)
{
  int ten = 10;
  int two = 2;

  printf("Doing it right: ");
  printf("%d minus %d is %d\n", ten, two, ten - two);
  printf("Doing it wrong: ");
  printf("%d minus %d is %d\n", ten); /* Missing two paramters */

  return 0;
}

/*
Doing it right: 10 minus 2 is 8
Doing it wrong: 10 minus -1076799168 is 725606160 
*/