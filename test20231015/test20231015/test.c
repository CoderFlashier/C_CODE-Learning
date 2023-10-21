#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main()
{
	int length = 0;
	int num = 0;
	int new = 0;
	scanf("%d %d %d", &length, &num, &new);
	int arr[30000] = { 0 };
	int i = 0;
	for (; i <= length; i++)
	{
		arr[i] = i;
	}
	int j = 0;
	for (; j < num; j++)
	{
		int mark1 = 0;
		scanf("%d", &mark1);
		arr[mark1] = -1;
	}

	int k = 0;
	int record = 0;
	int distance = 0;
	int mark_max = 0;
	int mark_new = 0;
	int mark_dis = 0;
	while (new > 0)
	{
		k = 0;
		for (; k <= length; k++)
		{
			if (k > 0)
			{
				distance++;
			}
			if (arr[k] == -1 || k == length)
			{
				record++;
			}
			if (record == 2)
			{
				if (distance > mark_dis)
				{
					mark_max = k;
					mark_dis = distance;

				}
				record = 1;
				distance = 0;
			}
		}
		record = 0;
		mark_new = (mark_max * 2 - mark_dis) / 2;
		arr[mark_new] = -1;
		mark_max = 0;
		mark_dis = 0;
		distance = 0;
		new--;
	}


	int l = 0;
	int count = 0;
	int max2 = 0;
	int mark2 = 0;
	int mark3 = 0;
	for (; l <= length; l++)
	{
		if (l > 0)
		{
			count++;
		}
		if (arr[l] == -1 || l == length)
		{
			mark2++;
			printf("%d ", l);
		}
		if (mark2 == 2)
		{
			if (max2 < count)
			{
				max2 = count;
				mark3 = l;
			}
			mark2 = 1;
			count = 0;
		}
	}
	printf("%d", max2);
	return 0;
}