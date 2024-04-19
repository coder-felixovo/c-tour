/* Program List 4.10 */

#include <stdio.h>
#define BLURB "Authentic imitation!"

int main(void)
{
  printf("[%2s]\n", BLURB);
  printf("[%24s]\n", BLURB);
  printf("[%24.5s]\n", BLURB);
  printf("[%-24.5s]\n", BLURB);

  return 0;
}

/*
[Authentic imitation!]
[    Authentic imitation!]
[                   Authe]
[Authe                   ]
*/