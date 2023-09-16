#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//void print(int a)
//{
//	if (a > 9)
//	{
//		print(a / 10);
//	}
//	printf("%d ", a % 10);
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}



//int strlen1(char* arr)
////此处也可以用数组的形式：int strlen1(char arr[])
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		*arr ++;//每个char 1byte
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abc";
//
//	int len = 0;
//	len = strlen1(arr);
//	printf("%d\n", len);
//	return 0;
//}



//利用递归（即不使用临时变量）求长度
//int strlen1(char* arr)
//{
//	if (*arr == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + strlen1(++arr);
//	}
//}
//
//int main() 
//{
//	char arr[] = "abc";
//	int b = strlen1(arr);
//	printf("%d", b);
//	return 0;
//}



//int factorial(int a)
//{
//	int ret = 1;
//	if (a <= 1)
//		return 1;
//	else
//		return a * factorial(a - 1);
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d",factorial(a));
//	return 0;
//}
//用递归求阶乘



//int fib(int n)
//{
//	int a = 1;
//	int ret = 1;
//	int b = 0;
//	int sum = 0;
//	if (n == 1)
//		return 1;
//	else if (n == 2)
//		return 2;
//	for (; n >= 3 ; n--)
//	{
//		b = ret;
//		ret = ret + a;
//		a = b;
//		sum += ret;
//	}
//	return sum + 2;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", fib(n));
//	return 0;
//}
//求前n项斐波那契数列的和，但是函数有点离谱

//1 1 2 3 5 8 13 21 34 55
//int fib(int n)
//{
//	int a = 1;
//	int ret = 1;
//	int b = 0;
//	if (n == 1 || n == 2)
//		return 1;
//	for (; n > 2; n--)
//	{
//		b = ret;
//		ret = ret + a;
//		a = b;
//	}
//	return ret;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", fib(n));
//	return 0;
//}
//输出第n个斐波那契数


//int fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", fib(n));
//	return 0;
//}
//用递归的方式求，效率极低



//int main()
//{
//	int a = 0;
//	int b = 0;
//	while ((scanf("%d %d\n", &a, &a)) != EOF)
//		{
//			printf("%d",a + b);
//		}
//	return 0;
//}



