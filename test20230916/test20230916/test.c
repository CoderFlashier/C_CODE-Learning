#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int a = 0;
//	int b = 0;
//	
//	while ((scanf("%d %d", &a, &b)) != EOF)
//	{
//		printf("%d\n", a + b);
//	}
//	return 0;
//}



//float fib1(int n)
//{
//	if (n == 1)
//	{
//		return 1.0;
//	}
//	else
//	{
//		float a = 1.0f;
//		float b = 0.0f;
//		float ret = 1.0f;
//
//		for (; n > 1; n--)
//		{
//			b = ret;
//			ret = ret + a;
//			a = b;
//		}
//		return ret;
//	}
//}
//
//
//float fib2(int n)
//{
//	n += 1;
//	if (n == 1)
//	{
//		return 1.0;
//	}
//	else
//	{
//		float a = 1.0f;
//		float b = 0.0f;
//		float ret = 1.0f;
//
//		for (; n > 1; n--)
//		{
//			b = ret;
//			ret = ret + a;
//			a = b;
//		}
//		return ret;
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	float sum = 0.0f;
//	for (; n > 0; n--)
//	{
//		float a = fib1(n);//分母
//		float b = fib2(n);//分子
//
//		float ret = b / a;
//		sum += ret;
//	}
//	printf("%.2f", sum);
//	return 0;
//}



//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 2000; i <= n; i++)
//	{
//		if ((i % 7 == 0) && (i % 5 != 0))
//		{
//			if ( (i - 7)> 2000 &&(i - 7 ) % 5 == 0)
//			{
//				printf(",");
//			}
//			printf("%d", i);
//			if ((i + 7 <= n)&&(( i + 7 ) % 5 != 0))
//			{
//				printf(",");
//			}
//		}
//	}
//	return 0;
//
//}



//long long fac(int n)
//{
//	long long ret = 1;
//	for (; n > 0; n--)
//	{
//		ret *= n;
//	}
//	return ret;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%lld", fac(n));
//	return 0;
//}

#include<string.h>
int main()
{
	char arr[100] = { 0 };
	scanf("%s", arr);
	
	if ((strcmp(arr, "Ya5f8zQc")) == 0)
	{
		printf("验证码输入正确");
	}
	else
	{
		printf("验证码输入错误，请重新输入");
	}
	return 0;
}