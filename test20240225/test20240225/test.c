#define _CRT_SECURE_NO_WARNINGS


//输出什么？
#include <stdio.h>
int main()
{
	char a = -1;
	//char 在VS下是有符号的

	// -1 是整形，为32位，要存入char，要发生截断
	//原：10000000 00000000 00000000 00000001
	//反：11111111 11111111 11111111 11111110
	//补：11111111 11111111 11111111 11111111
	//发生截断
	// a -- 11111111
	// %d 打印有符号整形，发生整形提升，对于有符号数，高位补1
	// 11111111 11111111 11111111 11111111 -- 补码
	// 10000000 00000000 00000000 00000000 -- 取反
	// 10000000 00000000 00000000 00000001 -- +1 得到原码
	// b的打印同理
	// 截断和大小端无关，相当于是从内存中拿出数据后再发生截断

	signed char b = -1;

	unsigned char c = -1;
	//原：10000000 00000000 00000000 00000000
	//反：11111111 11111111 11111111 11111110
	//补：11111111 11111111 11111111 11111111
	// c -- 11111111
	//无符号数高位补0
	// 00000000 00000000 00000000 11111111 --- 直接就是原码

	printf("a=%d,b=%d,c=%d", a, b, c);
	//VS环境下打印  a=-1,b=-1,c=255
	return 0;
}
