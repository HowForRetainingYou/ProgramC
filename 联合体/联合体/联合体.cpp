#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/* 联合体类型的声明 关键词:union

像结构体⼀样，联合体也是由⼀个或者多个成员构成，这些成员可以不同的类型。
但是编译器只为最⼤的成员分配⾜够的内存空间。联合体的特点是所有成员共⽤同⼀块内存空间。所
以联合体也叫：共⽤体。
给联合体其中⼀个成员赋值，其他成员的值也跟着变化。

*/

//联合类型的声明
//union Un
//{
//	char c;
//	int i;
//};
//int main()
//{
//	//联合变量的定义
//	union Un un = { 0 };
//	//计算连个变量的⼤⼩
//	printf("%d\n", sizeof(un));
//	return 0;
//}

//union Un
//{
//	char c;
//	int i;
//};
//int main()
//{
//	//联合变量的定义
//	union Un un = { 0 };
//	// 下⾯输出的结果是⼀样的吗？
//	printf("%p\n", &(un.i));
//	printf("%p\n", &(un.c));
//	printf("%p\n", &un);
//	return 0;
//}

/*联合体大小

联合的⼤⼩⾄少是最⼤成员的⼤⼩。
 
当最⼤成员⼤⼩不是最⼤对⻬数的整数倍的时候，就要对⻬到最⼤对⻬数的整数倍。

*/
#include <stdio.h>
union Un1
{
	char c[5];
	int i;
};
union Un2
{
	short c[7];
	int i;
};
int main()
{
	//	下⾯输出的结果是什么？

		printf("%zd\n", sizeof(union Un1));
	printf("%zd\n", sizeof(union Un2));
	return 0;
}

//union Un
//{
//	char c;
//	int i;
//};
//int main()
//{
//	//联合变量的定义
//	union Un un = { 0 };
//	un.i = 0x11223344;
//	un.c = 0x55;
//	printf("%x\n", un.i);
//	return 0;
//}



//巧用联合体确认系统大小端序
//union A
//{
//	int t2;
//	char t1;
//};
//
//int main()
//{
//	union A a = {0};
//	a.t1 = 1;
//	printf("%d", a.t2);
//}
