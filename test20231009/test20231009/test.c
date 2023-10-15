#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>
int main()
{
	int input = 0;
	scanf("%d", &input);
	int i = 0;
	long long arr[100] = { 0 };
	int j = 0;
	for (; i < input; i++)
	{
		long long g = 0;
		long long l = 0;
		
		scanf("%lld %lld", &g, &l);
		long long n = g * l;
		long long a = g;
		long long b = n / g;
		long long max = a + b;
		if (g > l)
		{
			long long ex = g;
			g = l;
			l = g;
			a = (long long)sqrt(n) - ((long long)sqrt(n) % g);
		}
		else
		{
			a = (long long)sqrt(n) - ((long long)sqrt(n) % g);
		}
		
		while (1)
		{
			b = n / a;
			if (b % g == 0)
			{
				break;
			}
			a += g;
		}
		long long min = a + b;
		arr[j] = min;
		j++;
		arr[j] = max;
		j++;
	}
	int k = 0;
	for (; k < j; k++)
	{
		printf("%lld", arr[k]);
		if (k % 2 == 0)
		{
			printf(" ");
		}
		if (k % 2 == 1)
		{
			printf("\n");
		}
	}

	return 0;
}