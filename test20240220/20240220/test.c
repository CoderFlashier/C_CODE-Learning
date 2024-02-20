#define _CRT_SECURE_NO_WARNINGS


//求输出
//#include <stdio.h>
//
//int cnt = 0;
//int fib(int n)
//{
//	cnt++;
//	if (n == 0)
//		return 1;
//	else if (n == 1)
//		return 2;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//
//
//void main()
//{
//	fib(8);
//	printf("%d", cnt);
//}



//求a，b的最小公倍数
#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	if (a < b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	//辗转相除法求最大公因数
	int temp_a = a;
	int temp_b = b;
	int max_com = 0;
	int rem = temp_a % temp_b;
	if (rem == 0)
		max_com = temp_b;
	else
	{
		while (rem)
		{
			int temp = temp_b;
			temp_b = rem;
			rem = temp % rem;
		}
		max_com = temp_b;
	}
	//printf("%d", max_com);
	
	//求最小公倍数
	int ret = (a * b) / max_com;
	printf("%d", ret);
	return 0;
}