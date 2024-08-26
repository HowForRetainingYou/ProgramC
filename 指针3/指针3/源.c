#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int nmsl[10] = { 0 };
//	printf("nmsl              =%p\n", nmsl);
//	printf("nmsl    +1        =%p\n", nmsl+1);
//
//	printf("&nmsl[0]          =%p\n", &nmsl[0]);
//	printf("&nmsl[0]+1        =%p\n", &nmsl[0]+1);
//	
//	printf("&nmsl             =%p\n", &nmsl);
//	printf("&nmsl   +1        =%p\n", &nmsl+1);
//}


//
////学会用指针访问数组
//int main()
//{
//	int nmsl[6] = { 0 };
//	int* p = nmsl;
//	int i = 0;
//	int sz = sizeof(nmsl) / sizeof(int);
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", nmsl + i);
//	}
//	int j = 0;
//	for (j = 0; j < sz; j++)
//	{
//		printf("%d ",*(p+j));//p[j],*(nmsl+j),nmsl[j]也可以，都是指针的性质j[nmsl]<-不推荐使用,*(i+nmsl)
//	}
//}


//数组传参的实质是将数组首元素的地址传过去，所以形式参数访问的数组与实参的数组是同一个数组
//形参的数组不单独开辟内存空间，所以形参的数组可以忽略数组大小的


//冒泡排序
//   3 2 1
//1 2 3
void sort(int arr[], int sz)
{
	int* p = arr;
	int i = 0;
	printf("Before:");
	for (i = 0; i < sz; i++)
	{
		printf("%d ",*(p+i));
	}
	printf("\n");
	printf("After:"); 
	int j = 1;
	int k = 0;
	int flag = 1;
	for (j = 0; j < sz-1; j++)
	{
		for (k = 0; k < sz - 1-j; k++)
		{
			if (arr[k] < arr[k + 1])
			{
				int tmp = 0;
				tmp = arr[k];
				arr[k] = arr[k + 1];
				arr[k + 1] = tmp;
				flag = 0;
			}

		}
		if (flag == 1)
		{
			break;
		}
		



	}
	for (int l = 0; l < sz; l++)
	{
		printf("%d ", *(p + l));
	}

}



int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };

	int sz = sizeof(arr) / sizeof(int);
	sort(arr,sz);
}












//二级指针 int * * name

//指针数组：存放指针的数组