/*
编写一个程序，把你的年龄转换为天数，并显示这两个值。这里不用考虑闰年。
*/

#include <stdio.h>

int main()
{
  int age = 23;
  int days = age * 365;
  printf("My age is %d and days are %d\n", age, days);

  return 0;
}