/* Program List 3.1 */
/* platinum.c -- your weight in platinum */

#include <stdio.h>

int main(void)
{
  float weight; /* your weight */
  float value; /* Equal weight of white gold value */

  printf("Are you worth your weight in platinum?\n");
  printf("Let's check it out. \n");
  printf("Please enter your weight in pounds: ");

  /* user input */
  scanf("%f", &weight);

  /* presume the price of platinum is $1700 per ounce */
  /* 14.5833 used to convert pound sterling ounces to pound gold ounces */
  value = 1700.0 * weight * 14.5833;
  printf("Your weight in platinum is worth $%.2f.\n", value);
  printf("You are easily worth that! If platinum prices drop, \n");
  printf("eat more to maintain your value.\n");

  return 0;
}