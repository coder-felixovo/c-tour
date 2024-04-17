# 待归纳
C语言中的6种语句：标号语句、复合语句、表达式语句、选择语句、迭代语句、跳转语句

C编译器在编译前会对源代码做一些准备工作，即预处理（processing）。`#include`是一条C预处理指令。#符号表明C预处理在编译器之前接手处理该条指令。

所有C编译器都提供stdio.h文件，其含义为：标准输入/输出头文件，它提供了供编译器使用的输入输出函数。

通常，在C程序顶部的信息集合被称为头文件（header）。

C程序一定是从main()函数开始执行（目前不用考虑例外情况）

C函数规定使用花括号{}标记函数体的开始和结束。

int是C语言的一个关键字，表示一种基本的C语言数据类型。关键字不能作为函数名或变量名。

在C语言中，所有变量都必须先声明后使用。

C99和C11允许使用更长的标识符名，但编译器只识别前63个字符。对于外部标识符，只允许使用31个字符。更早的C90只允许6个字符。

可以使用小写字母、大写字母、数字和下划线命名，但名称的第一个字符必须是字母或下划线，不能是数字。

C语言名称区分大小写，即将一个字母的大小写视为不同字符。

在C99之前的标准，要求把声明的变量置于块的顶部。C99及之后的标准，允许在需要时才声明变量。

换行符是一个转义序列（escape sequence），转义序列代表难以表示或无法输入的字符，每个转义序列都以反斜杠`\`开始。
`\t`代表Tab键，`\b`代表Backspace（退格键），`\n`代表换行

关键字
auto、break、case、char、const、continue、default、do、double、else、enum、
extern、float、for、goto、if、inline、int、long、register、restrict、return、
short、signed、sizeof、static、struct、switch、typedef、union、unsigned、void、volatile、
while、_Alignas、_Alignof、_Atomic、_Bool、_Complex、_Generic、_Imaginary、_Noreturn、_Static_assert、_Thread_local

# 2024-04-17
C语言的数据类型关键字
最初K&R给出的关键字：int、long、short、unsigned、char、float、double
C90标准新增：signed、void
C99标准新增：_Bool、_Complex、_Imaginary

int类型是有符号整型，即int类型值必须是正整数、负整数或0。
早期的16位IBM PC兼容机使用16位来存储一个int值，其取值范围-32768~32767。目前个人计算机一般是32位（越来越多64位），因此用32位存储一个int值。

在C语言中，用特定的前缀表示使用哪种进制
* 0x或0X前缀表示十六进制
* 0前缀表示八进制

显示不同进制数字
* %d 十进制
* %o 八进制  %#o 显示前缀
* %x 十六进制 %#x 或 %#X 显示前缀

C语言提供了三个附属关键字修饰基本整数类型：short、long和unsigned
* `short int`类型（或简写为short）占用的存储空间比int类型少，常用于数值较小场合以节省空间。与int类似，short是有符号整型。
* `long int`或`long`占用的存储空间可能比int多，适用于较大数值的场合。与int类似，long是有符号整型。
* `long long int`或`long long`（C99标准加入）占用的存储空间比long多，适用于更大数值场合，该类型至少占64位。与int类似，long long是有符号整型
* `unsigned int`或`unsigned`只用于非负值的场合，这种类型与有符号类型表示的范围不同。
在C90标准中，添加了`unsigned long int`或`unsigned long`和`unsigned short int`或`unsigned short`类型
C99标准又添加了`unsigned long long int`或`unsigned long long`

建议在有符号类型前面添加关键字signed，表达有符号类型的意图。
例如：`short`、`short int`、`signed short`、`signed short int`都表示同一种类型

C语言只规定了`short`占用的存储空间不能多于`int`，`long`占用的存储空间不能少于`int`。

C标准对基本数据类型只规定了允许的最小大小。
16位机：
`short`和`int`的最小取值范围是[-32768, 32767]
32位机
`long`最小取值范围[-2147483648, 2147483647]
`unsigned short`和`unsigned int`最小取值范围[0, 65535]
`unsigned long`最小取值范围[0, 4294967295]

%u -- unsigned int
%ld -- long
%lx -- 以十六进制格式打印long类型整数
%lo -- 以八进制格式打印long类型整数
%hd -- 以十进制显示short类型的整数
%ho -- 以八进制显示short类型的整数

|转义序列|含义                               |
|-------|-----------------------------------|
|\a     |警报                               |
|\b     |退格                               |
|\f     |换页                               |
|\n     |换行                               |
|\r     |回车                               |
|\t     |水平制表符                         |
|\v     |垂直制表符                         |
|\\     |反斜杠                             |
|\'     |单引号                             |
|\''    |双引号                             |
|\?     |问号                               |
|\Ooo   |八进制数值（oo必须是有效的八进制数）  |
|\xhh   |十六进制值（xx必须是有效的十六进制数）|

%c -- 待打印字符

根据C90标准，C语言允许在关键字char前使用signed或unsigned，这在char类型处理小整数时很有用

## 3.9小结
基本数据类型分为两大类：整数类型和浮点数类型。通过为类型分配存储量以及有无符号，区分不同类型。
整型：char、short、int、long、long long
_Bool类型是无符号类型，可存储0或1，分别代表false和true
浮点类型：float、double、long double
0前缀表示八进制数，0x或0X表示十六进制数
l或L后缀表明该值为long类型，ll或LL后缀表明该值为long long类型
使用''直接将一个字符括起来表示字符常量

浮点数书写形式
* 3.1415926
* 0.314E10
* C99和C11提供了第3种指数表示法，用十六进制数和2的幂来表示，如0xa.1fp10