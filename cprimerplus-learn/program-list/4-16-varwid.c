/* Program List 4.16 */
/* varwid.c -- 使用变宽输出字段 */

#include <stdio.h>

int main(void)
{
  unsigned width, precision;
  int number = 256;
  double weight = 242.5;

  printf("Enter a field width:\n");
  scanf("%d", &width);
  printf("The number is :%*d:\n", width, number);
  printf("Now enter a width and a precission:\n");
  scanf("%d %d", &width, &precision);
  printf("Weight = %*.*f\n", width, precision, weight);
  printf("Done!\n");

  return 0;
}

/*
Enter a field width:
6
The number is :   256:
Now enter a width and a precission:
8 3
Weight =  242.500
Done!
*/