#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 2000; i <= n; i++)
//	{
//		if ((i % 7 == 0) && (i % 5 != 0))
//		{
//			if ((i - 7) > 2000 && (i - 7) % 5 == 0)
//			{
//				printf(",");
//			}
//			printf("%d", i);
//			if ((i + 7 <= n) && ((i + 7) % 5 != 0))
//			{
//				printf(",");
//			}
//		}
//	}
//	return 0;
//
//}


int judge(int x)
{
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	num1 = x % 10;//个位数
	num2 = x / 10 % 10;//十位数
	num3 = x / 100;//百位数
	if (x == (num1 * num1 * num1) + (num2 * num2 * num2) + (num3 * num3 * num3))
	{
		return 1;
	}

}

int main()
{
	int i = 0;

	for (i = 101; i < 1000; i++)
	{
		int a = judge(i);
		if ((i > 153) && (a == 1))
		{
			printf(",");
		}
		if (a == 1)
		{
			printf("%d",i);
		}
	}
	return 0;
}