# 2.11
1. C语言的基本模块是什么？
Answer
函数

2. 什么是语法错误？请写出一个英语例子和C语言例子
Answer
```c
Me am Chinese.
int i = 0
```
3. 什么是语义错误？请写出一个英语例子和C语言例子
```c
int i = 2;
int i2 = i * i;
int i3 = i2 * i2;
```
4. Indiana Sloth编写了下面的程序，并征求你的意见。请帮助她评定
```c
include studio.h
int main{void} /* 该程序打印一年有多少周 /*
(
     int s

     s := 56;
     printf(There are s weeks in a year.);
     return 0;
```
第一行：include以`#`开头，studio改为stdio
第二行：{}改为()，最后面的/*改为*/
第三行：(改为{
第四行：s后加一个;
第六行：为变量s赋值，赋值`=`左边多出冒号`:`
第七行：改为`printf("There are %d weeks in a year.\n", s);`
新增第9行，加上一个}
5. 假设下面的4个例子都是完整程序中的一部分，它们都输出什么结果？
```c
a. printf("Baa Baa Black Sheep.");
   printf("Have you any wool?\n");
b. printf("Begone!\nO creature of lard!\n");
c. printf("What?\nNo/nfish?\n");
d. int num;
   num = 2;
   printf("%d + %d = %d", num, num, num + num);
```
Answer
a：Baa Baa Black Sheep.Have you any wool?换行
b：Begone!
   O creature of lard!
c：What?
   No/nfish?
d：2 + 2 = 4
6. 在main、int、func、char、=中，哪些是C语言关键字
int和char
7. 如何以下面的格式输出变量words和lines的值（这里3020和350代表两个变量的值）
```c
There were 3020 words and 350 lines.
```
Answer
```c
printf("There were %d words and %d lines", words, lines);
```
8. 考虑下面程序：
```c
#include <stdio.h>
int main(void)
{
      int a, b;

      a = 5;
      b = 2; /* 第7行 */
      b = a; /* 第8行 */
      a = b; /* 第9行 */
      printf("%d %d\n", b, a);
      return 0;
}
```
请问在执行完第7、第8、第9行后，程序的状态分别是什么？
Answer
执行完第7行：a=5, b=2
执行完第8行：a=5, b=5
执行完第9行：a=5, b=5
9. 考虑下面的程序：
```c
#include <stdio.h>
int main(void)
{
      int x, y;

      x = 10;
      y = 5;        /* 第7行 */
      y = x + y;    /*第8行*/
      x = x*y;      /*第9行*/
      printf("%d %d\n", x, y);
      return 0;
}
```
请问在执行完第7行、第8行、第9行后，程序的状态分别是什么？
Answer
执行完第7行：x=10, y=5
执行完第8行：x=10, y=15
执行完第9行：x=150, y=15