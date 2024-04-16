/*
许多研究表明，微笑益处多多。
编写一个程序，生成以下格式输出：

Smile!Smile!Smile!
Smile!Smile!
Smile!

该程序要定义一个函数，该函数被调用一次打印一次“Smile!”，根据程序的需要使用该函数。
*/

#include <stdio.h>

void printfSmile(void);

int main()
{
  printfSmile();
  printfSmile();
  printfSmile();
  printf("\n");
  printfSmile();
  printfSmile();
  printf("\n");
  printfSmile();

  return 0;
}

void printfSmile(void)
{
  printf("Smile!");
}