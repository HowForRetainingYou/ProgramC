#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//ָ�����飺�����飬�Ǵ��ָ�������
//����ָ�룺ָ�������ָ��
//int * p1[10]	 ָ������
//int(*p2)[10]  ָ�����


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


//��ά�����������Ҳ����Ԫ�صĵ�ַ������Ԫ���ǵ�һ�еĵ�ַ������������ָ��

//��ά���鴫�Σ�
/*
void print(int(*brr)[5], int  r, int c)//����Ԫ�صĵ�ַ������Ϊ��ά���飬�������ϳ�����ָ�룬�Դ��������еĵ�ַ�� �����һά���飬һ��Ԫ����Ϊһ��һά�����һ��Ԫ��
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
//ָ�뺯�������巽��������ָ������
int add(int x, int y)
{
	return x + y;
}

int main()
{

	int(*p)(int ,int) = &add;//��()����Ŵ��ε����ͣ���()��ź���ָ�룻pΪ����ָ�����  addҲ����ֱ������ַ

	int a = add(1, 2);
	printf("%d\n", a);

	int b = (*p)(5, 6);//����
	printf("%d\n", b);

	int c = p(7, 8);
	printf("%d", c);

	int d = 0;

}
*/

////tpyedef ���   ���ô�����������������ʹ��
//
//int main()
//{
//	typedef int* ix;
//	int* p;
//	ix p1;
//
//
//	//���������
//	int (*c)[5];//int (*)[5]Ϊ���ͣ������������������ַŽ�������
//	typedef int (*nm$l)[5];
//	nm$l d;
//}//#define ��typedef �������Ǻܴ�ģ�ͬ�������#define���ܶ����ò�������
//
//


//����ָ������

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
////�ص�����:����һ��ͨ��ָ����õĺ���>��һ�������ĵ�ַ���ݸ���һ������ʱ������ָ��ָ����һ����ʱ����һ�������ǻص�����
////��Ƽ�̼�������--->
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
//			printf("�����������������\n");
//			break;
//		}
//
//
//	} while (input);
//}











//qsort����:������stdlib.hͷ�ļ�
/*
void qsort (void* base, size_t num, size_t size,
			int (*compar)(const void*,const void*));

			�����ڽ����������ͷֱ�Ϊ����ַ����������С��ָ�뺯��

*/

//int sorting(const void*p1,const void*p2)
//{
//	return ( *(int *) p2 -*(int *) p1 );//�˴��ģ�int*��Ϊǿ��ת������Ϊvoid*���ܽ����õ�����
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
// qsort����Ҳ�����ڱȽϽṹ��
//�ȽϽṹ����Ҫ�� strcmp������������string.hͷ�ļ�


//�ṹ����ַ����������ִ�С
struct student
{
	char name[20];
	int age;
}

int structer_compear_name(const void* p1, const void* p2)//��������
{
	return strcmp(((struct student*)p1)->name, ((struct student*)p2)->name);
	//  .��->���ǽṹ���Ա���ʲ�����  //  ���ֲ�ͬ��ʽ���ṹ����� . ��Ա��/ �ṹ��ָ�� -> ��Ա��

}
//�Ƚ�����ʱ������strcmp

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

//qsort������ϸ��ʵ��
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
			//���ڴ˺����ܱȽϵ����ͺܶ࣬��֪���Ƚ�Ԫ�ص�����ʱ����ֱ�ӱȣ��ʲ�����ð�����������򵥵�ǰһ����һ��Ԫ�ر�
			//arr[k] �� arr[k+1]  ���������
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

	
	