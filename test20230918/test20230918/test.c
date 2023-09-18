#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//打印乘法口诀表
//int main()
//{
//	int a = 1;
//	int b = 1;
//	int i = 0;
//	scanf("%d", &i);
//	for (; a <= i; a++)
//	{
//		for (b = 1;a >= b; b++)
//		{
//			printf("%d*%d=%-2d ", a, b, a * b);//通过%2d使结果右对齐，-2d左对齐
//
//		}
//		printf("\n");
//	}
//	return 0;
//}



//输入并查找最大值
//int main()
//{
//	int arr[10] = { 0 };//当没有指定元素个数时，会根据初始化内容来确定大小
//	int i = 0;
//	for (; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);//这里不是取数组的地址，而是取每个元素的地址，因此需要加&
//	}
//	
//	int a = 0;
//	int max = arr[0];
//	for (a = 1; a < 10; a++)
//	{
//		if (arr[a] > max)
//		{
//			max = arr[a];
//		}
//	}
//	printf("%d", max);
//	
//	return 0;
//}



//int main()
//{
//	char arr[] = { 'a','b','c' };
//	printf("%s", arr);
//	return 0;
//}
//烫烫烫


int main()
{
	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (; i <= (sz - 1); i++)
	{
		printf("&arr[%d] = %p\n", i, &arr[i]);
	}
	return 0;
}
//打印元素地址