#define _CRT_SECURE_NO_WARNINGS 1
#include < stdio.h>
#include <string.h>

//int main()
//{
//	//size_t Ϊ��������
//	//�ǵ�ַ����С����4/8���ֽ�
//
//	//��������Ҫȷ�ϵ�����Ԫ�صĴ�С����Ԫ�ص�ַ�Ĵ�С
//	char arr[] = { 'a','b','c','d','e' };
//	printf("%d\n",sizeof(arr));
//	printf("%d\n",sizeof(&arr));
//	printf("%d\n", sizeof(*arr));
//	printf("%d\n", sizeof(arr+0));
//	printf("%d\n", sizeof(arr[1]));
//	printf("%d\n", sizeof(&arr+1));
//	printf("%d\n", sizeof(&arr[0]+1));
//	}




//int main()
//{
//	//size_t Ϊ��������
//	//�ǵ�ַ����С����4/8���ֽ�
//
//	//��������Ҫȷ�ϵ�����Ԫ�صĴ�С����Ԫ�ص�ַ�Ĵ�С
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(&arr));
//	printf("%d\n", sizeof(*arr));
//	printf("%d\n", sizeof(arr + 0));
//	printf("%d\n", sizeof(arr[1]));
//	printf("%d\n", sizeof(&arr + 1));
//	printf("%d\n", sizeof(&arr[0] + 1));
//}



//int main()
//{
//	//size_t Ϊ��������
//	//�ǵ�ַ����С����4/8���ֽ�
//
//	//��������Ҫȷ�ϵ�����Ԫ�صĴ�С����Ԫ�ص�ַ�Ĵ�С
//	char arr[] = "abcdef";
//	printf("%d\n", strlen(arr));
//	printf("%d\n", strlen(&arr));
//	printf("%d\n", strlen(*arr));
//	printf("%d\n", strlen(arr + 0));
//	printf("%d\n", strlen(arr[1]));
//	printf("%d\n", strlen(&arr + 1));
//	printf("%d\n", strlen(&arr[0] + 1));
//}



//
//int main()
//{
//	//size_t Ϊ��������
//	//�ǵ�ַ����С����4/8���ֽ�
//
//	//��������Ҫȷ�ϵ�����Ԫ�صĴ�С����Ԫ�ص�ַ�Ĵ�С
//	char*p = "abcdef";
//	printf("%d\n", sizeof(p));//p��ָ�����
//	printf("%d\n", sizeof(p+1));
//	printf("%d\n", sizeof(*p));//p��������const char*��*p����char���ͣ�Ϊ1�ֽ�
//	printf("%d\n", sizeof(p[0]));//  'a'=\  1ijie
//	printf("%d\n", sizeof(&p));//�ǵ�ַ��4/8
//	printf("%d\n", sizeof(&p+1));//&p+1 ������pָ�������ĵ�ַ���ǵ�ַ4/8
//	printf("%d\n", sizeof(&p[0] + 1));//�ǵ�ַ��4/8
//}

//
//
//int main()
//{
//	char* p = "abcdef";// ancdef /0
//	printf("%d\n", strlen(p));
//	printf("%d\n", strlen(p+1));
//	printf("%d\n", strlen(*p));//*p����'a'=97,�ᱨ��
//	printf("%d\n", strlen(p[0]));//p[0]=*(p+0),����
//	printf("%d\n", strlen(&p));//&p��ָ�����p�ĵ�ַ�����ַ���abcdef/0û��ϵ�����ֵ
//	printf("%d\n", strlen(&p+1));//���ֵ   ��
//	printf("%d\n", strlen(&p[0] + 1));//5���ڶ����ַ���ַ��ʼ��
//
//}



int main()
{
	int a[3][4] = { 0 };
	printf("%d", sizeof(a));//�����������Ž�sizeof��Ϊ�����С��Ϊ48�ֽ�
	printf("%d", sizeof(a[0][0]));
	printf("%d", sizeof(a[0]));//���԰Ѷ�ά�������Ϊ�ӵ�һ�п�ʼ����˳���һά�������ڴ���������ţ���ôa[0]��ʱ����һ�������ҵ�������sizeof�ڲ�����16�ֽ�

	//��һά�����˼�������


	printf("%d", sizeof(a[0]+1));//a[0]Ϊ��һ�������������������û�е�������sizeof�ڲ�������a[0]Ϊ��һ��������Ԫ�ص�ַ+1Ϊa[0][1], Ϊ4/8�ֽ�
	printf("%d", sizeof(*(a[0]+1)));//4/8�ֽ�
	printf("%d", sizeof(a+1));//ע�⣬a��ʾ��ά����ĵ�ַ����ʱΪ��һ������ĵ�ַ��+1��Ϊ�ڶ�������ĵ�ַ��Ϊ4/8
	printf("%d", sizeof(*(a+1)));//�ڶ��д�С   
	//�� �� �ȼ���*��a+1��==a��1��
	printf("%d", sizeof(&a[0]+1));//4/8
	printf("%d", sizeof(*(&a[0]+1)));//�ڶ��е�ַ�Ľ����ã�sizeof��a[1]����16�ֽ�
	printf("%d", sizeof(*a));//a��Ϊ������û�е�����sizeof�ڲ���a��ʾ������Ԫ�ص�ַ���Ƕ�ά������Ԫ�صĵ�ַ
	//Ҳ���ǵ�һ�еĵ�ַ��������Ϊ��һ�еĴ�С��Ϊ16�ֽ�
	printf("%d", sizeof(a[3]));//Խ���ˣ���û���ʣ�16���ֽ�

}




//�ṹ��ָ��+1������һ���ṹ��