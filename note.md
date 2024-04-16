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

