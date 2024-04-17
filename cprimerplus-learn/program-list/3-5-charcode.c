/* Program List 3.5 */
/* charcode.c -- display the code number of the character */

#include <stdio.h>

int main(void)
{
  char ch;

  printf("Please enter a character.\n");
  scanf("%c", &ch);
  printf("The code for %c is %d.\n", ch, ch);
  
  return 0;
}