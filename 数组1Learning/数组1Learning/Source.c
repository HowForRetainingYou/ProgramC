#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main1()
{
	int arr[10] = {0};//此为未完全初始化的数组,只给出了数组中的第一个数
	int arr1[10] = { 1,2,3,4,5,555,7,8,9,10 };//此为完全初始化的数组，给出数组的全部数
	//数组格式为：数组元素的类型_数组名[];
	printf("%d\n", sizeof(arr1));
	printf("%d\n", sizeof(int [10]));
	printf("%d\n", sizeof(arr1[0]));
	//数组下标，从第一个元素自左向右，数组下表从0到n自左向右；
	printf("%d\n",arr1[5]);//访问数组下标，此意为输出下标为5对应的数组元素
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");

	//数组的手动输入
	int x;
	scanf("%d", &x);
	int arr3[10] = { 0 };
	for (int b = 0; b < 10; b++)
	{
		scanf("%d", &arr3[b]);//此输入[]中的数为数组中的元素；

	}
	for (int b = 0; b < 10; b++)//output
	{
		printf("%d ", arr3[b]);//输出下标为b的数组元素
	}
	printf("\n");
	printf("数组元素数为%d",sizeof(arr1)/sizeof(int));//利用总字节数除以元素类型可以得出元素数量
	return 0;
}





int main2()
{
	//%p专门用来输出地址；
	int arr4[10] = { 1,2,3,4,5,6,7,8,9,0 };
	int c = 0;
	int sz = sizeof(arr4) / sizeof(int);
	for (c = 0; c < 10; c++)

	{
		printf("&arr[%d] = %p\n", c, &arr4[c]);//%p用十六进制输出

	}



	return 0;

}