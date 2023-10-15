#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	long long input = 0;
//	scanf("%lld", &input);
//	long long i = 0;
//	long long arr[1000] = { 0 };
//	long long j = 0;
//	for (; i < input; i++)
//	{
//		long long g = 0;
//		long long l = 0;
//		scanf("%lld %lld", &g, &l);
//		long long n = g * l;
//		long long a = n - g;
//		long long b = 1;
//		long long min = 0;
//		long long max = 0;
//		while (1)
//		{
//			if (a % g == 0 && n % a == 0)
//			{
//				b = n / a;
//				if (b % g == 0)
//				{
//					b = n / a;
//					max = a + b;
//					break;
//				}
//			}
//			a -= g;
//		}
//		a = sqrt(n);
//		/*while (a >= sqrt(n))
//		{
//			a = a - g;
//		}*/
//		while (1)
//		{
//			if (a % g == 0 && n % a == 0)
//			{
//				b = n / a;
//				if (b % g == 0)
//				{
//					min = a + b;
//					break;
//				}
//			}
//			a --;
//		}
//		
//		
//		arr[j] = min;
//		j++;
//		arr[j] = max;
//		j++;
//	}
//	
//	int x = 0;
//	for (; x < j; x++)
//	{
//		printf("%lld", arr[x]);
//		if (x % 2 == 0)
//		{
//			printf(" ");
//		}
//		if (x % 2 == 1 && x + 1 < j)
//		{
//			printf("\n");
//		}
//	}
//	
//	return 0;
//}