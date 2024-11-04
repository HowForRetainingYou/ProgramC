#define _CRT_SECURE_NO_WARNINGS 1
#include < stdio.h>
#include <string.h>

//int main()
//{
//	//size_t 为返回类型
//	//是地址，大小就是4/8个字节
//
//	//此类问题要确认的是是元素的大小还是元素地址的大小
//	char arr[] = { 'a','b','c','d','e' };
//	printf("%d\n",sizeof(arr));
//	printf("%d\n",sizeof(&arr));
//	printf("%d\n", sizeof(*arr));
//	printf("%d\n", sizeof(arr+0));
//	printf("%d\n", sizeof(arr[1]));
//	printf("%d\n", sizeof(&arr+1));
//	printf("%d\n", sizeof(&arr[0]+1));
//	}




//int main()
//{
//	//size_t 为返回类型
//	//是地址，大小就是4/8个字节
//
//	//此类问题要确认的是是元素的大小还是元素地址的大小
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(&arr));
//	printf("%d\n", sizeof(*arr));
//	printf("%d\n", sizeof(arr + 0));
//	printf("%d\n", sizeof(arr[1]));
//	printf("%d\n", sizeof(&arr + 1));
//	printf("%d\n", sizeof(&arr[0] + 1));
//}



//int main()
//{
//	//size_t 为返回类型
//	//是地址，大小就是4/8个字节
//
//	//此类问题要确认的是是元素的大小还是元素地址的大小
//	char arr[] = "abcdef";
//	printf("%d\n", strlen(arr));
//	printf("%d\n", strlen(&arr));
//	printf("%d\n", strlen(*arr));
//	printf("%d\n", strlen(arr + 0));
//	printf("%d\n", strlen(arr[1]));
//	printf("%d\n", strlen(&arr + 1));
//	printf("%d\n", strlen(&arr[0] + 1));
//}



//
//int main()
//{
//	//size_t 为返回类型
//	//是地址，大小就是4/8个字节
//
//	//此类问题要确认的是是元素的大小还是元素地址的大小
//	char*p = "abcdef";
//	printf("%d\n", sizeof(p));//p是指针变量
//	printf("%d\n", sizeof(p+1));
//	printf("%d\n", sizeof(*p));//p的类型是const char*，*p则是char类型，为1字节
//	printf("%d\n", sizeof(p[0]));//  'a'=\  1ijie
//	printf("%d\n", sizeof(&p));//是地址，4/8
//	printf("%d\n", sizeof(&p+1));//&p+1 是跳过p指针变量后的地址，是地址4/8
//	printf("%d\n", sizeof(&p[0] + 1));//是地址，4/8
//}

//
//
//int main()
//{
//	char* p = "abcdef";// ancdef /0
//	printf("%d\n", strlen(p));
//	printf("%d\n", strlen(p+1));
//	printf("%d\n", strlen(*p));//*p就是'a'=97,会报错；
//	printf("%d\n", strlen(p[0]));//p[0]=*(p+0),报错
//	printf("%d\n", strlen(&p));//&p是指针变量p的地址，跟字符串abcdef/0没关系，随机值
//	printf("%d\n", strlen(&p+1));//随机值   ？
//	printf("%d\n", strlen(&p[0] + 1));//5，第二个字符地址开始数
//
//}



int main()
{
	int a[3][4] = { 0 };
	printf("%d", sizeof(a));//数字名单独放进sizeof，为数组大小，为48字节
	printf("%d", sizeof(a[0][0]));
	printf("%d", sizeof(a[0]));//可以把二维数组理解为从第一行开始的有顺序的一维数组在内存中连续存放，那么a[0]此时当作一个数组且单独放在sizeof内部，即16字节

	//以一维数组的思想来解读


	printf("%d", sizeof(a[0]+1));//a[0]为第一个数组的数组名，但其没有单独放在sizeof内部，所以a[0]为第一个数组首元素地址+1为a[0][1], 为4/8字节
	printf("%d", sizeof(*(a[0]+1)));//4/8字节
	printf("%d", sizeof(a+1));//注意，a表示二维数组的地址，此时为第一个数组的地址，+1即为第二个数组的地址，为4/8
	printf("%d", sizeof(*(a+1)));//第二行大小   
	//二 ： 等价于*（a+1）==a（1）
	printf("%d", sizeof(&a[0]+1));//4/8
	printf("%d", sizeof(*(&a[0]+1)));//第二行地址的解引用，sizeof（a[1]），16字节
	printf("%d", sizeof(*a));//a作为数组名没有单独在sizeof内部，a表示数组首元素地址，是二维数组首元素的地址
	//也就是第一行的地址，解引用为第一行的大小，为16字节
	printf("%d", sizeof(a[3]));//越界了，但没访问，16个字节

}




//结构体指针+1，跳过一个结构体