#define _CRT_SECURE_NO_WARNINGS 1

#include <string.h>
#include <stdio.h>
/*
memcpy
memmove
memset:���������ڴ棬���ڴ��е�ֵ���ֽ�Ϊ��λ���ó���Ҫ������
memcmp
*/

//memcpy:���ڴ����п���;�˺�������'\0'����ֹͣ
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[30] = { 0 };
//	memcpy(arr2, arr1, 20);
//		for (int i = 0; i < 20; i++)
//		{
//			printf("%d ", arr2[i]);
//		}
//}

//����memcpy
/*
void *my_version_memcpy(void* destination, void* source, size_t num)
{
	void *ret = destination;
	int i = 0;
	while (num--)
	{
		*(char*)destination = *(char*)source;
		source=(char*)source+1;
		destination = (char*)destination + 1;
	}
	return ret;
}
int main()
{
int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
int arr2[30] = { 0 };
void *ret=my_version_memcpy(arr2, arr1, 20);
for (int i = 0; i < 20; i++)
{
	printf("%d ", arr2[i]);
}
}
*/
