﻿#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	char acX[] = "abcdefg";//abcdefg /0
	char acY[] = { 'a','b','c','d','e','f','g' };//abcdefg
	/*
	acX和acY都是字符数组，但是初始化表达式不同，acX和acY的区别如下：

	acX：数组中总共有8个元素，分别是：'a','b','c','d','e','f','g','\0'

	acY：数组中总共有7个元素，分别是：'a','b','c','d','e','f','g'

	sizeof这里求的是数组大小，数组大小等于有效元素个数*每个元素的大小。sizeof(acX) = 8,sizeof(acY) = 7

	strlen求的是字符串长度，从首元素开始计算，遇见‘\0’停止，由于acY数组没有'\0‘，所以strlen(acY)的结果是个随机值
	*/
}



int main2()
{
	int arr[] = { 1,2,(3,4),5 };
	printf("%d\n", sizeof(arr));
	return 0;
	/*
	* 此处小括号内的为逗号表达式，取后者，所以本数组实际上只有四个元素，分别是1，2，4，5；
	* 而sizeof(arr)求的是整个数组所占空间的大小，即：4*sizeof(int)=4*4=16
	* 
	* 
	*/
}




/*
  题目：
A.变长数组的大小在编译时确定，不能改变。
B.变长数组的大小可能在运行时确定，比如使用变量来指定数组大小，一旦确定大小后，它的大小是固定的，无法改变。
C.一旦确定大小后，它的大小是固定的，无法改变
D.变长数组只能用于存储字符类型的数据。


解释：
变长数组（	variable-length	 array)，C语言术语，也简称VLA。是指用	整型变量或表达式声明或定义的数组	，而不是说数组的长度会随时变化，变长数组在其生存期内的长度同样是固定的	。

代码示例：

int n;
scanf ("%d", &n);
int array[n];


注意上述语法在C99之前是不支持的。



A选项错误：编译时无法确定，编译时候编译器不知道n是什么值，n的值要等到程序运行起来后，用户输入之后n的值确定了，才能确定数组的大小

B选项：说法不严谨，一定是在运行时确定大小的，而不是可能

C选项正确

D选项错误：存储什么类型数据，看定义时候给数组名前放什么类型，比如int  a[n]就是存放int类型    short a[n]就是存在short类型


*/