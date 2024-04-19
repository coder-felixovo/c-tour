/* Program List 4.15 */
/* input.c -- 何时使用& */

#include <stdio.h>
int main(void)
{
  int age;
  float assets;
  char pet[30];

  printf("Enter your age, assets, and favorite pet.\n");
  scanf("%d %f", &age, &assets);
  scanf("%s", pet);
  printf("%d %.2f %s\n", age, assets, pet);

  return 0;
}

/*
Enter your age, assets, and favorite pet.
38
92360.88 llama
38 92360.88 llama
*/