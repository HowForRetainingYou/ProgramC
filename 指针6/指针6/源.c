#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//�ṹ��ָ��+1�����������ṹ��

 //���軷���ǻ�������������Ľ����ɶ��

//#include <stdio.h>
//int main()
//{
//	int a[5][5];
//	int(*p)[4];//p������ָ��
//	p = a;//�����в��죬�ڵ�ַ�Ķ��ϣ���ֵ���ö����׵�ַλ���غ�
//
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//�˴������ַ�Ӽ�ʱ����Ծ���δ�С
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* ptr1 = (int*)(&aa + 1);//ǿ��ת��Ϊint * ����//ȡ�������ַ+1��������������
//	int* ptr2 = (int*)(*(aa + 1));//��������ʾ��Ԫ�ص�ַ����һ�е�ַ��ָ��һ�е�ַ��1��ָ��ڶ��У�*��aa+1���ȼ���aa[1]��������Ԫ�ص�ַ����6������6�ĵ�ַ
//	//����Ϊint * ������ǰ���ǿ��ת������������
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));// 10 �� 5
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
	printf("%s\n", ** ++cpp);//++���������ȼ�����*;**�����ó�char*  //POINT
	printf("%s\n", * -- * ++cpp + 3);//��һ��*�������ó�char**���ͣ��õ�ַ�Լ��˵���c+3��ǰһ��char��С�ĵ�ַ���ڶ���*�������ó�char*���ͣ�//��ӡ
	printf("%s\n", *cpp[-2] + 3);//
	printf("%s\n", cpp[-1][-1] + 1);//cpp[-1][-1]������Ϊ,*(*(cpp-1)-1)
	return 0;
} 
 