#define _CRT_SECURE_NO_WARNINGS 1
/*
* 若一个程序需要用到多个部分去完成
* 可以将主源文件进行拆分并包装，即分发自定义函数到新建的副源文件作引用
* 同时创建副源文件中的自定义函数的对应的头文件（该头文件包含函数声明）
* 
* 
* 实现多文件模块化
*/

#include <stdio.h>

#include "Header of selfdefined function 1.h"//自定义库函数，不能用< >，只能用“ ”，而库函数二者皆可；
//这里的#include接 含所声明了的自定义函数 的头文件 的文件名

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int ret = add(a, b);
	printf("%d", ret);
	return 0;
}

//static 
//extern函数声明外部符号，跨文件用，因为全局变量的作用域是整个工程
//全局变量被static修饰后变成只能被内部链接