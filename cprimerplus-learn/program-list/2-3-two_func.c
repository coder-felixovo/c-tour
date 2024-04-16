#include <stdio.h>

/* Program List 2.3 */
/* A file includes two function */
void butler(void); /* ANSI/ISO C function prototype */

int main()
{
  printf("I will summon the butler function.\n");
  butler();
  printf("Yes. Bring me some tea and writeable DVDs.\n");

  return 0;
}

void butler(void)
{
  printf("You rang, sir?\n");
}