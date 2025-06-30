#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
/*
整数在内存中存的是二进制补码
在调试监视窗口中观察内存看见的16进制值是为了方便展示
存储的顺序是倒过来的
大端字节序存储:把一个数据的低位字节的内容存至在内存的高位处
小端字节序存储:跟大端相反
*/

//一个代码简单查看机器小端大端排序
//int main()
//{
//	int i = 1;
//	*(char*)&i;
//	
//	if (*(char*)&i == 1)
//	{
//		printf("小端");
//	}
//	else
//	{
//		printf("大端");
//	}
//}

//源码等于补码取反+1

//int main()
//{
//	char a = -1;
//
//	signed char b = -1;
//
//	unsigned char c = -1;
//
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	return 0;
//}



//int main()
//{
//	char a = -128;
//	printf("%u\n", a);
//	return 0;
//}


//int main()
//{
//	char a = 128;
//	printf("%u\n", a);
//	return 0;
//}



//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)	
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}



//int main()
//{
//	unsigned char i = 0;
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}


//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//	}
//	return 0;
//}


//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//} 




/*浮点数在内存中的存储*/
//代码引子
#include <stdio.h>
int main()
{
	int n = 9;
	float* pFloat = (float*)&n;
	printf("n的值为% d\n",n);
	printf("*pFloat的值为：% f\n",*pFloat);	
	* pFloat = 9.0;
	printf("num	的值为：%d\n",n);
	printf("*pFloat的值为：%f\n",*pFloat);
	return 0;
}
