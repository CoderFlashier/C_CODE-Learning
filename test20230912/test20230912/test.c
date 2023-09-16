#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//int main()
//{
//	int a = 0;
//	int num = 0;
//	
//	for (a = 100; a <= 200; a++)
//	{
//		//判断是否为素数，拿2~a-1之间的数去试除a
//		int b = 0;
//		int flag = 1;
//		for (b = 2; b <= a - 1; b++)//一个个试，繁琐
//		{
//			if (a % b == 0)
//			{
//				flag = 0;//当a不为素数时，flag为0
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d\n", a);//输出素数
//			num++;
//		}
//	}
//
//	printf("%d", num);//输出总数
//	return 0;
//}
//输出100~200之间的素数


//利用素数的性质； a = b * c，b、c中一点有一个数<=sqrt(a)  [sqrt:开平方]
//偶数不可能是素数
//简化代码
//#include<math.h>
//
//int main()
//{
//	int a = 0;
//	int num = 0;
//
//	for (a = 101; a <= 200; a+=2)//排除偶数
//	{
//		//判断是否为素数，拿2~a-1之间的数去试除a
//		int b = 0;
//		int flag = 1;
//		for (b = 2; b <= sqrt(a); b++)//利用素数的性质，简化运算过程，sqrt为数学库函数
//		{
//			if (a % b == 0)
//			{
//				flag = 0;//当a不为素数时，flag为0
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d\n", a);//输出素数
//			num++;
//		}
//	}
//
//	printf("%d", num);//输出总数
//	return 0;
//}


//调用函数的写法
//#include<math.h>
//
//int test(int x)//判断是否为素数的函数
//{
//	int b = 0;
//	int flag = 1;
//
//	for (b = 2; b <= sqrt(x); b++)
//	{
//		if (x % b == 0)
//		{
//			flag = 0;
//			return 0;//执行return时，函数立即结束
//		}
//	}
//	return flag;//返回flag的值给c，用于计数
//}
//
//int main()
//{
//	int a = 0;
//	int num = 0;
//	int c = 0;
//
//	for (a = 101; a <= 200; a += 2)
//	{
//		c += test(a);//调用函数
//		if (test(a))
//		{
//			printf("%d\n", a);
//		}
//	}
//
//	printf("%d", c);
//	return 0;
//}


//判断闰年的规则：能被4整除，不能被100整除,或者能被400整除
int main()
{
	int year = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (year % 4 == 0)
		{
			if (year % 100 != 0)
			{
				printf("%d\n", year);
			}
		}
		if (year % 400 == 0)//此处不能加else，因为此处两个if都要判断，而用else if的话只会判断一个
		{
			printf("%d\n", year);
		}
	}
	return 0;
}