#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
//{
//	//�״�ʹ��do while ѭ��
//	int n=0;
//	do 
//	{
//		printf("%d ", n);
//		n++;
//	} while (n <= 15);//�ص㣺ѭ��������ִ��һ��
//		return 0;
//}



//
//
// 
//{
//	int n=0;
//	int i = 0;
//	scanf("%d", &n);
//	do
//	{
//		i++;
//		n = n / 10;
//
//	} while (n);
//		printf("%d", i);
//	return 0;
//}
////while ѭ�����ں� break �� countin
////break��������ĳһ����������ѭ��
////��coun������������ѭ����c����Ĵ��룬�ٽ������ж� 
//
//
//
////ע�⣺while��for�е�b��c�б�





{
int i=0;

for (int i = 1; i <= 200; i++)
{
	int flag = 1;
	int j = 0;
	for (j = 2;  j <= i - 1; j++)
	{
		if (i % j == 0)
		{
			flag = 0;
			break;
		}
		
	}
	if (flag == 1)
	{
		printf("%d", i);
	}
	
}

return 0;
}







