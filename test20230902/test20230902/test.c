#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d\n", i);
//	}
//	return 0;
//}
//输出1~10


//int main()
//{
//	for (;;)//省略
//	{
//		printf("wdnmd\n");
//	}
//	return 0;
//}
//死循环


//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d\n", i);
//		i++;
//	}
//	while (i <= 10);//不满足时跳出循环
//
//	return 0;
//}
//do循环，输出1~10


//int main()
//{
//	int a = 0;
//	int n = 0;
//	int sum = 1;
//
//	scanf("%d", &n);
//	for (a = 1; a <= n; a++)
//	{
//		sum = sum * a;
//	}
//	printf("%d", sum);
//	return 0;
//}
//求阶乘（从小乘到大）


//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int sum = 1;
//
//	for (; a > 0; a--)
//	{
//		sum = sum * a;
//	}
//	printf("%d", sum);
//	return 0;
//}
//求阶乘（从大乘到小）


//int main()
//{
//	int a = 0;
//	int i = 0;
//	int sum = 1;
//	int b = 0;
//	int ret = 0;
//
//	scanf("%d", &a);
//
//	for (i = a; i > 0; i--)
//	{
//		for (b = i; b > 0; b--)
//		{
//			sum = sum * b;
//		}
//		ret = ret + sum;
//		sum = 1;//记得在每次循环后重置sum
//	}
//
//	printf("%d", ret);
//
//	return 0;
//}
//求n！+（n-1）！+...+1！


//int main()
//{
//	int a = 0;
//	int i = 0;
//	int sum = 1;
//	int b = 0;
//	int ret = 0;
//
//	scanf("%d", &a);
//
//	for (i = 1; i <= a; i++)
//	{
//		sum = sum * i;
//		ret = ret + sum;
//	}
//
//	printf("%d", ret);
//
//	return 0;
//}
//简化代码，利用前一次计算的结果，提高效率


//int main()
//{
//	int a = 1;//初始化
//	while (a <= 10)//判断
//	{
//		printf("%d\n", a);
//		a++;//调整
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	for (a = 1; a <= 10; a++)
//	{
//		if (3 == a)
//			continue;
//		printf("%d\n", a);
//	}
//	return 0;
//}
//输出1~10，3除外


//int main()
//{
//	int a = 1;
//	while (a <= 10)
//	{
//		printf("%d\n", a);
//		
//		if (3 == a)
//			continue;
//		
//		a++;
//	}
//	return 0;
//}
//程序卡死，持续输出3