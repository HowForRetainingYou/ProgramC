#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//指针数组：是数组，是存放指针的数组
//数组指针：指向数组的指针
//int * p1[10]	 指针数组
//int(*p2)[10]  指针变量


/*
* int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr1[10] = { 2,3,4,5,6,7,8,9,10,11 };
	int* p = arr;
	int (*p1)[10] = &arr1;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *p);
		p++;
	}
	printf("\n");
	int j = 0;
	for (j = 0; j < 10; j++)
	{
		printf("%d ", (*p1)[j]);
	}
}
*/


//二维数组的数组名也是首元素的地址，但首元素是第一行的地址，类型是数组指针

//二维数组传参；
/*
void print(int(*brr)[5], int  r, int c)//传首元素的地址，但因为二维数组，必须整合成数组指针，以代数组首行的地址； 想象成一维数组，一行元素作为一个一维数组的一个元素
{
	int i = 0;
	int j =	0;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("%d ", *((*brr + i) + j));
		}
		printf("\n");
	}
}

int main()
{
	int brr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };

	int r = 3;
	int c = 5;
	print(brr, r, c);

}
*/


/*
//指针函数：定义方法类似于指针数组
int add(int x, int y)
{
	return x + y;
}

int main()
{

	int(*p)(int ,int) = &add;//右()里面放传参的类型，左()里放函数指针；p为函数指针变量  add也可以直接作地址

	int a = add(1, 2);
	printf("%d\n", a);

	int b = (*p)(5, 6);//调用
	printf("%d\n", b);

	int c = p(7, 8);
	printf("%d", c);

	int d = 0;

}
*/

////tpyedef 语句   作用大概是重新起名，便捷使用
//
//int main()
//{
//	typedef int* ix;
//	int* p;
//	ix p1;
//
//
//	//辨别清类型
//	int (*c)[5];//int (*)[5]为类型，这个重命名必须把名字放进类型里
//	typedef int (*nm$l)[5];
//	nm$l d;
//}//#define 与typedef 的区别还是很大的，同等情况下#define可能动作得不够彻底
//
//


//函数指针数组

/*
int add(int x ,int y)
{
	return x + y;
}
int bdd(int x,int y)
{
	return 2*(x+y);
}


int main()
{
	int(*jia)(int ,int) = add;
	int(*erjia)(int ,int) = bdd;

	int (*arr[])(int, int) = {jia,erjia};

	for (int i = 0; i < 2; i++)
	{
		printf("%d\n", arr[i](1,2));
	}

}
*/


//
////回调函数:就是一个通过指针调用的函数>当一个函数的地址传递给另一个函数时，当该指针指向另一函数时，另一函数就是回调函数
////设计简短计算器：--->
//
//int jia(int x,int y)
//{
//	return x + y;
//}
//int jian(int x,int y)
//{
//	return x - y;
//}
//int cheng(int x,int y)
//{
//	return x * y;
//}
//int chu(int x,int y)
//{
//	return x / y;
//}
//
//
//void caculating(int(*pf)(int,int))
//{
//	int x = 0; int y = 0;
//	scanf("%d %d", &x, &y);
//	int ret = pf(x,y);
//	printf("%d\n", ret);
//}
//
//
//int main()
//{
//	int input = 0;
//	
//	do
//	{
//		printf("****************************\n");
//		printf("***1.jia  *******2.jian*****\n");
//		printf("***3.cheng*******4.chu *****\n");
//		printf("***********0.exit***********\n");
//		printf("****************************\n");
//
//		scanf("%d", &input);
//		switch(input)
//		{
//		case 1:
//			caculating(jia);
//			break;
//		case 2:
//			caculating(jian);
//			break;
//		case 3:
//			caculating(cheng);
//			break;
//
//		case 4:
//			caculating(chu);
//			break;
//
//		case 0:
//			printf("Exit\n");
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
//			break;
//		}
//
//
//	} while (input);
//}











//qsort函数:隶属于stdlib.h头文件
/*
void qsort (void* base, size_t num, size_t size,
			int (*compar)(const void*,const void*));

			括号内接受数据类型分别为：地址，个数，大小，指针函数

*/

//int sorting(const void*p1,const void*p2)
//{
//	return ( *(int *) p2 -*(int *) p1 );//此处的（int*）为强制转换，因为void*不能接引用的特质
//}
//int main2(int arr[], int sz)
//{
//	qsort(arr,sz,sizeof(arr[0]),sorting);
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(int);
//	main2(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}



/*
// qsort函数也可用于比较结构体
//比较结构体需要用 strcmp函数，隶属于string.h头文件


//结构体比字符串或者数字大小
struct student
{
	char name[20];
	int age;
}

int structer_compear_name(const void* p1, const void* p2)//按名排序
{
	return strcmp(((struct student*)p1)->name, ((struct student*)p2)->name);
	//  .与->都是结构体成员访问操作符  //  两种不同形式：结构体变量 . 成员体/ 结构体指针 -> 成员体

}
//比较年龄时则不能用strcmp

int main()
{
	struct student arr[3] = { {"zhangsan",20},{"lisi",21},{"wangwu",22} };
	int se = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, se, sizeof(arr[0]), structer_compear_name);
	for (int i = 0; i < se; i++)
	{
		printf("%s\n", arr[i]);
	}
}

*/


void swap(char* buf1, char* buf2, size_t width)
{
	for (int i = 0; i < width; i++)
	{
		char tmp = (*buf1);
		(*buf1) = (*buf2);
		(*buf2) = tmp;
		buf1++;
		buf2++;
	}
}

//qsort函数的细致实现
int cmp_int(const void *p1,const void *p2)
{
	return *(int*)p1 - *(int*)p2;
}

int save()
{
	int arr[] = { 3,4,8,6,9,1,5,7,2 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Qsort(arr, sz, sizeof(arr[0]),cmp_int);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
int Qsort(void* base, size_t sz, size_t width, int(*cmp)(const void* p1, const void* p2))
{
	
	int j = 0;
	int k = 0;
	
	for (j = 0; j < sz - 1; j++)
	{
		for (k = 0; k < sz - 1 - j; k++)
		{  
			//由于此函数能比较的类型很多，不知道比较元素的类型时不能直接比，故不能像冒泡排序那样简单地前一个后一个元素比
			//arr[k] 和 arr[k+1]  的延申理解
			if(cmp ((char*) base+k*width,(char*)base+(k+1)*width) <0)
			{

				swap((char*)base + k * width, (char*)base + (k + 1) * width, width);

			}
		}
		
	}
}


int main()
{
	save();

	
}

//void sort(int arr[], int sz) 
//{
//	int* p = arr;
//	int i = 0;
//	printf("Before:");
	//for (i = 0; i < sz; i++)
	//{
	//	printf("%d ", *(p + i));
	//}
	//printf("\n");
	//printf("After:");
	
	/*int k = 0;
	;*/

	
	