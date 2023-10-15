#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main()
{
	int input1 = 0;
	scanf("%d", &input1);
	int arr[50] = { 0 };
	int i = 0;
	int j = 0;
	for (; i < input1; i++)
	{
		scanf("%d", &arr[j]);
		j++;
	}
	int input2 = 0;
	scanf("%d", &input2);
	for (i = 0; i < input2; i++)
	{
		scanf("%d", &arr[j]);
		j++;
	}
	int k = 0;
	for (; k < j; k++)
	{
		int l = 0;
		for (; l < j - 1 ; l++)
		{
			if (arr[l] > arr[l + 1])
			{
				int ex = arr[l];
				arr[l] = arr[l + 1];
				arr[l + 1] = ex;
			}
		}
	}
	printf("%d ", input1 + input2);
	i = 0;
	for (; i < j; i++)
	{
		printf("%d", arr[i]);
		if (i + 1 < j)
		{
			printf(" ");
		}
	}
	return 0;
}