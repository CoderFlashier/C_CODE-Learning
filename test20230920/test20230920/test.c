#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//输入并查找最大值
int main()
{
	int arr[10] = { 0 };//当没有指定元素个数时，会根据初始化内容来确定大小
	int i = 0;
	for (; i < 10; i++)
	{
		scanf("%d", &arr[i]);//这里不是取数组的地址，而是取每个元素的地址，因此需要加&
	}
	
	int a = 0;
	int max = arr[0];
	for (a = 1; a < 10; a++)
	{
		if (arr[a] > max)
		{
			max = arr[a];
		}
	}
	printf("%d", max);
	
	return 0;
}