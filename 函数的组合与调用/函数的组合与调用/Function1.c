﻿#define _CRT_SECURE_NO_WARNINGS 1
//此源文件用作函数的声明

//此源文件用作主原文件的部分结构，供主源文件使用（在此情况下，前提是必须得在主源文件中引用该自定义函数对应的头文件）
// ；当然也可以直接写在主源文件中而并不直接单独作副源文件；


int add(a, b)
{
	int x = a + b;
	return x;
}