#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
/*
�������ڴ��д���Ƕ����Ʋ���
�ڵ��Լ��Ӵ����й۲��ڴ濴����16����ֵ��Ϊ�˷���չʾ
�洢��˳���ǵ�������
����ֽ���洢:��һ�����ݵĵ�λ�ֽڵ����ݴ������ڴ�ĸ�λ��
С���ֽ���洢:������෴
*/

//һ������򵥲鿴����С�˴������
//int main()
//{
//	int i = 1;
//	*(char*)&i;
//	
//	if (*(char*)&i == 1)
//	{
//		printf("С��");
//	}
//	else
//	{
//		printf("���");
//	}
//}

//Դ����ڲ���ȡ��+1

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




/*���������ڴ��еĴ洢*/
//��������
#include <stdio.h>
int main()
{
	int n = 9;
	float* pFloat = (float*)&n;
	printf("n��ֵΪ% d\n",n);
	printf("*pFloat��ֵΪ��% f\n",*pFloat);	
	* pFloat = 9.0;
	printf("num	��ֵΪ��%d\n",n);
	printf("*pFloat��ֵΪ��%f\n",*pFloat);
	return 0;
}
