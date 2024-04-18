/* Program List 4.3 */
/* praise2.c */

// If %zd don't work, change %u or %lu
#include <stdio.h>
#include <string.h>
#define PRAISE ("You are an extraordinary being.")

int main(void)
{
  char name[40];

  printf("What's your name?");
  scanf("%s", name);
  printf("Hello, %s. %s\n", name, PRAISE);
  printf("Your name of %zd letters occupies %zd memory cells.\n", strlen(name), sizeof name);
  printf("The phrase of praise has %zd letters ", strlen(PRAISE));
  printf("and occupies %zd memory cells.\n", sizeof PRAISE);

  return 0;
}

/*
What's your name?Serendipity Chance
Hello, Serendipity. You are an extraordinary being.
Your name of 11 letters occupies 40 memory cells.
The phrase of praise has 31 letters and occupies 32 memory cells.
*/