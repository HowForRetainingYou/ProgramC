#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	{ 
		int a, b, c;
		a = 5;
		c = ++a;//c=6=a
		b = ++c, c++, ++a, a++;//ֻ��ֵ++c��b�������c++ ��++a a++����ֵ��b;   b=7,c=8,a=8;
		b += a++ + c;//b=b+(a++ + c);
		printf("a = %d b = %d c = %d\n:", a, b, c);
		return 0; 
	}
}//a+=x��Ч��a=a+x


	/*int a,b;

	scanf("%d %d", &a, &b);
	printf("%d,%d", a, b);
	return 0;*/




//
//	int i;//��ѭ��
//	for (i = 0; i <= 10; ++i)
//		if(i=5)
//		printf("%d", i);
//	return 0;
//}//ͬʱ����Ctrl+C����ֹ���� 




	//{
	//	int ret = strcmp("abc", "cba");
	//	printf("%d\n", ret);
	//	return 0;
	//	//�ȽϹ���һ��һ��ȥ�Ƚϣ������״γ��ֵĲ�һ�����ַ����бȽϣ�����ASCIIֵ��
	//	//������С��������һ���ַ���С�ڵڶ������������������ڣ���������������
	//}