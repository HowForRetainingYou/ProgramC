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
////ѧ����ָ���������
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
//		printf("%d ",*(p+j));//p[j],*(nmsl+j),nmsl[j]Ҳ���ԣ�����ָ�������j[nmsl]<-���Ƽ�ʹ��,*(i+nmsl)
//	}
//}


//���鴫�ε�ʵ���ǽ�������Ԫ�صĵ�ַ����ȥ��������ʽ�������ʵ�������ʵ�ε�������ͬһ������
//�βε����鲻���������ڴ�ռ䣬�����βε�������Ժ��������С��


//ð������
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












//����ָ�� int * * name

//ָ�����飺���ָ�������