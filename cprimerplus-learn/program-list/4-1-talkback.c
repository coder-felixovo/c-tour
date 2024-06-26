/* Program List 4.1 */
/* talkback.c -- demonstrate user interaction */

#include <stdio.h>
#include <string.h> // provice strlen() function prototype
#define DENSITY 62.4 // human body density(units: pounds per cubic foot)

int main()
{
  float weight, volume;
  int size, letters;
  char name[40]; // variable `name` is an array that can hold 40 characters

  printf("Hi! What's your first name?\n");
  scanf("%s", name);
  printf("%s, what's your weight in pounds?\n", name);
  scanf("%f", &weight);
  size = sizeof(name);
  letters = strlen(name);
  volume = weight / DENSITY;
  printf("Well, %s, your volume is %2.2f cubic feet.\n", name, volume);
  printf("Also, your first name has %d letters, \n", letters);
  printf("and we have %d bytes to store it.\n", size);

  return 0;
}

/*
Hi! What's your first name?
Christine
Christine, what's your weight in pounds?
154
Well, Christine, your volume is 2.47 cubic feet.        
Also, your first name has 9 letters, 
and we have 40 bytes to store it.
*/