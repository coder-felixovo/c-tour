/* Program List 4.4 */
/* pizza.c -- use constant */

#include <stdio.h>
#define PI 3.14159

int main(void)
{
  float area, circum, radius;

  printf("What is the radius of your pizza?\n");
  scanf("%f", &radius);
  area = PI * radius * radius;
  circum = 2.0 * PI * radius;
  printf("Your basic pizza parameters are as follows:\n");
  printf("circumference = %1.2f, area = %1.2f\n", circum, area);

  return 0;
}

/*
What is the radius of your pizza?
6.0
Your basic pizza parameters are as follows:
circumference = 37.70, area = 113.10
*/