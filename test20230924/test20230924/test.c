#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	long long int  a = 0;
	long long int sum = 0;
	
	scanf("%lld", &a);
	if(a<=9)
	{
		sum = a + (a * 10 + a) + (a * 100 + a * 10 + a) + (a * 1000 + a * 100 + a * 10 + a);
	}
	else if ((a >= 10) && (a <= 99))
	{
		sum = a + (a * 100 + a) + (a * 10000 + a * 100 + a) + (a * 1000000 + a * 10000 + a * 100 + a);
	}
	else if ((a >= 100) && (a <= 999))
	{
		sum = a + (a * 1000 + a) + (a * 1000000 + a * 1000 + a) + (a * 1000000000 + a * 1000000 + a * 1000 + a);
	}
	else
	{
		sum = a + (a * 10000 + a) + (a * 100000000 + a * 10000 + a) + (a * 1000000000000 + a * 100000000 + a * 10000 + a);
	}
	printf("%lld", sum);
	return 0;
}