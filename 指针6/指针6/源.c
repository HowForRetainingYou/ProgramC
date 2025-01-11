#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//结构体指针+1，跳过整个结构体

 //假设环境是环境，程序输出的结果是啥？

//#include <stdio.h>
//int main()
//{
//	int a[5][5];
//	int(*p)[4];//p是数组指针
//	p = a;//类型有差异，在地址阅读上，赋值会让二者首地址位置重合
//
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//此处计算地址加减时，跳跃整形大小
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* ptr1 = (int*)(&aa + 1);//强制转换为int * 类型//取出数组地址+1，跳过整个数组
//	int* ptr2 = (int*)(*(aa + 1));//数组名表示首元素地址，第一行地址，指向一行地址加1，指向第二行；*（aa+1）等价于aa[1]，数组首元素地址，即6，由于6的地址
//	//类型为int * ，所以前面的强制转换类型无意义
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));// 10 ， 5
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char * *pa = a;
//	pa++;
//	printf("%s\n", *pa);//at
//	return 0;
//}

#include <stdio.h>
int main()
{
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char* * cp[] = { c + 3,c + 2,c + 1,c };
	char* ** cpp = cp;
	printf("%s\n", ** ++cpp);//++操作符优先级高于*;**解引用成char*  //POINT
	printf("%s\n", * -- * ++cpp + 3);//第一个*，解引用成char**类型，该地址自减退到（c+3）前一个char大小的地址，第二个*，解引用成char*类型，//打印
	printf("%s\n", *cpp[-2] + 3);//
	printf("%s\n", cpp[-1][-1] + 1);//cpp[-1][-1]可以视为,*(*(cpp-1)-1)
	return 0;
} 
 