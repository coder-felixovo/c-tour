/*
编写一个程序，创建一个整型变量toes，并将toes设置为10。
程序中还要计算toes的两倍和toes的平方。该程序应打印3个值，并分别描述以示区分。
*/

#include <stdio.h>

int main()
{
  int toes = 10;
  int doubleToes = toes * 2;
  int squareToes = toes * toes;
  printf("Double the toes: %d\n", doubleToes);
  printf("Square of toes: %d\n", squareToes);

  return 0;
}