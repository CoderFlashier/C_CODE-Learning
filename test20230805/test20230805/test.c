#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int a = 10;
//	int b = 11;
//
//	int r = a > b ? a : b;
//	
//	printf("%d", r);
//	return 0;
//}
//输出11

//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 0;
//
//	int d = (c = a + b, c -= b, c += a);//c=3;c=1;c=2
//	printf("%d", d);
//	return 0;
//}
//输出2

//static修饰局部变量

//void add()
//{
//	static int b = 0;//有无static的输出天差地别
//	b++;
//	printf("b=%d\n", b);
//}
//
//int main()
//{
//	int a = 0;
//	while (a < 10)
//	{
//		printf("a=%d\n", a);
//		add();
//		a++;
//	}
//	return 0;
//}


