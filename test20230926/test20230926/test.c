#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//int main()
//{
//	int arr[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
//	int x = 0;
//	int y = 0;
//	for (; x <= 2; x++)
//	{
//		for (y = 0; y <= 3; y++)
//		{
//			printf("&arr[%d][%d] = %p\n", x , y , &arr[x][y]);
//		}
//	}
//	return 0;
//}


void bubble_sort(int arr[])//此处的[]不能省
{
	int ii = 0;
	for (; ii <= 9; ii++)
	{
		int i = 0;
		for (; i <= 8 - ii; i++)//注意此处不要数组越界
		{
			if (arr[i] > arr[i + 1])
			{
				int a = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = a;
			}
		}
	}
}

int main()
{
	int arr[10] = { 0 };
	int i = 0;
	for (; i <= 9; i++)
	{
		scanf("%d", &arr[i]);
	}
	bubble_sort(arr);//冒泡排序，将数从小到大排序
	for (i = 0; i <= 9; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
//报错  变量周围的堆栈已损坏