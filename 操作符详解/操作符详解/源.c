#include <stdio.h>
int main()
{
	int a = -10;
	//a为整型变量，为4个字节，32bit
	//原码1（1表示负数，0表示正数）00000000000000000000000000001010
	//反码11111111111111111111111111110101
	//补码11111111111111111111111111110110  补码为反码+1
	//负整数原码反码补码一致，原码反码补码的存在只体现在负整数

}






/*
&按位与：存在于二进制，   用补码进行动作，对比位有零则为零，全一就是一
|按位或：存在于二进制，对比位有一则为一，有零则为零
^按位异或：相同为零，相异为1  
~按位取反：全部取反包括符号位
以上四个操作符只能作用于整数 

*/



//000000000000000000000000000000101^   000000000000000000000000000000011
//000000000000000000000000000000011
// |
//000000000000000000000000000000110
//000000000000000000000000000000011
//000000000000000000000000000000101=5  
//2^2 2^1 2^0


//100000000000000000000000000 00001
//11111111111111111111111111111111






//结构体创建
struct name//struct 加结构体名称
{
	int nm;
};

//通过 . 来对结构体的访问





//整型提升
//算数转换 