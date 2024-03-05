#define _CRT_SECURE_NO_WARNINGS 1
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




