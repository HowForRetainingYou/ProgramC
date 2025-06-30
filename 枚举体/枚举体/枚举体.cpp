#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//可以一一列举的数据
//关键字enum
//enum Sex{//值拥有枚举常量，可以给初始值，默认从0开始，第二个值开始往后+1
//	man,
//	femal
//};
//enum week {
//	Monday
//};
//int main()
//{
//	printf("%d\n", man);
//	printf("%d\n", femal);
//	return 0;
//}

/*
为什么
使⽤枚举？
我们可以使⽤
#define
定义常量，为什么⾮要使⽤枚举？
枚举的优点：
1. 增加代码的可读性和可维护性
2. 和#define定义的标识符相⽐较枚举有类型检查，更加严谨。
3. 便于调试，预处理阶段会删除
#define
定义的符号
4. 使⽤⽅便，⼀次可以定义多个常量
5. 枚举常量是遵循作⽤域规则的，枚举声明在函数内，只能在函数内使⽤
*/

//枚举体的易用
enum option {
	zz,//0
	wq,//1
	hwx,//2
	ow,//3
	tc,//4
	xj//5
};

int main() {
	int input = 0;
	scanf("%d", &input);
	switch (input)//这个选择开关相比于 case:数字 更加易读更加容易联想所设计的各个开关的值
	{
	case zz:
		break;
	case wq:
		break;
	case hwx:
		break;
	case ow:
		break;
	case tc:
		break;
	case xj:
		break;
	default:
		break;
	}
	return 0;
}