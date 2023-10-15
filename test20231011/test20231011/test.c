#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int count = 0;

	long long arr[100] = { 0 };
	for (; i < n; i++)
	{
		scanf("%lld", &arr[i]);//将输入的整数存入数组
		long long tem = arr[i];
		while (tem > 0)
		{
			tem /= 10;
			count++;
		}
	}
	long long tem2 = 0;
	long long tem3 = 0;
	long long sum = 0;
	int mark = 0;
	int mark_count = 0;
	while (count > 0)
	{
		int count_2 = 0;
		for (i = 0; i < n; i++)
		{
			long long tem4 = arr[i];
			if (tem4 == 0)
			{
				continue;
			}
			count_2 = count;
			while (tem4 > 0)
			{
				
				tem4 /= 10;
				count_2--;
			}
			tem2 = arr[i] * (long long)pow(10, count_2);
			if (tem3 < tem2)
			{
				tem3 = tem2;
				mark = i;
				mark_count = count_2;
			}
		}
		count = mark_count;
		sum += tem3;
		tem3 = 0;
		arr[mark] = 0;
	}
	printf("%lld", sum);
	return 0;
}