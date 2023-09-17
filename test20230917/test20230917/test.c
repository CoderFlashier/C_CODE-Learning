#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int a = 0;
//	int b = 0;
//	while ((scanf("%d %d", &a, &b))!=EOF)
//	{
//		printf("%d\n", a + b);
//	}
//	return 0;
//}



//#include<string.h>
//
//int my_toupper(int x)
//{
//	if (x > 90 && x < 123)
//		return x - 32;
//	else
//		return x;
//}
//
//int main()
//{
//	char arr[9] = { 0 };
//		scanf("%s", arr);
//		int sz = sizeof(arr) / sizeof(arr[0]);
//		int i = 0;
//
//		for (; i < sz; i++)
//		{
//			arr[i] = my_toupper(arr[i]);
//		}
//
//		if ((strcmp(arr, "YA5F8ZQC")) == 0)//Ya5f8zQc
//		{
//			printf("验证码正确");
//		}
//		else
//		{
//			printf("验证码错误，请重新输入");
//		}
//	return 0;
//}



//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int x = 0;
//	
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		x = a;
//		a = b;
//		b = x;
//	}
//	if (a < c)
//	{
//		x = c;
//		a = c;
//		x = c;
//	}
//	if (b < c)
//	{
//		x = b;
//		b = c;
//		c = x;
//	}
//	printf("%d %d %d", a, b, c);
//	
//	return 0;
//}



//int main()
//{
//	int n = 1;
//	for (; n <= 100; n++)
//	{
//		if (n % 3 == 0)
//		{
//			printf("%d\n", n);
//		}
//	}
//	return 0;
//}



//int main()
//{
//	int a = 0;
//	int b = 0;
//	int n = 0;
//	int ret = 0;
//	scanf("%d %d", &a, &b);
//	//if (a > b)
//	//{
//	//	int x = 0;
//	//	x = a;
//	//	a = b;
//	//	b = x;
//	//}
//	int min = (a < b) ? a : b;
//	for (n = 1; n <= min; n++)
//	{
//		if ((a % n == 0) && (b % n == 0))
//		{
//			ret = n;
//		}
//	}
//	printf("%d", ret);
//	return 0;
//}
//暴力求解最大公约数，效率低下



//辗转相除法求最大公约数
//void Swap1(int* x, int* y)
//{
//	if (*x < *y)
//	{
//		int z = 0;
//		z = *x;
//		*x = *y;
//		*y = z;
//	}
//}
//
//void Swap2(int* x, int* y)
//{
//	int z = 0;
//	z = *x;
//	*x = *y;
//	*y = z;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d", &a, &b); 
//	
//	Swap1(&a, &b);//让a成为较大的数，这一步可以不用，就是Swap2那里可能多跑一遍
//	
//	while ((c = a % b) != 0)//此处！=0可以不加
//	{
//		Swap2(&a, &b);//将b的值赋给a
//		b = c;
//	}//当a%b=0时说明出现最大公约数，即为此时的b
//	
//	printf("%d", b);
//	return 0;
//}
//效率提高



//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}



//int main()
//{
//	int i = 1;
//	float ret = 0.0f;
//	float sum = 0.0f;
//	for (; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//		{
//			ret = 1.0 / i;
//		}
//		else
//		{
//			ret = -(1.0 / i);
//		}
//		sum += ret;
//	}
//	printf("%.2f", sum);
//	return 0;
//}



//int main()
//{
//	int i = 1;
//	float ret = 0.0f;
//	float sum = 0.0f;
//	int flag = 1;
//	for (; i <= 100; i++)
//	{
//		sum = sum + flag * (1.0 / i);
//		flag = -flag;
//	}
//	printf("%.2f", sum);
//	return 0;
//}
//去掉循环中的判断，提高效率



int main()
{
	int arr[10] = { 11,22,33,44,88,100,55,88,66,11 };
	int max = arr[0];
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (max <= arr[i - 1])
		{
			max = arr[i - 1];
		}
	}
	printf("%d", max);
	return 0;
}