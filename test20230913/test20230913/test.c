#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>          


//int test(int x)//闰年leap year
//{
//	if (((x % 4 == 0) && (x % 100 != 0)) || (x % 400 == 0))//这个地方不能加分号
//	{
//		return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	int year = 0;
//	int num = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (test(year))
//		{
//			printf("%d\n", year);
//			num++;
//		}
//	}
//	printf("%d", num);
//	return 0;
//}



//int binary_search(int arr[], int x, int sz)//此处的arr只是一个指针变量（大小为4或8bit）
//{
//	int right = 0;
//	int left = 0;
//	int mid = 0;
//
//	right = sz - 1;
//	
//	while (left <= right)
//	{
//		mid = left + (right - left) / 2;//防止溢出
//		if (arr[mid] < x)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > x)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int input = 0;
//	scanf("%d", &input);
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//此处sz不能在函数中定义，因为传过去的不是数组而是数组的首元素地址，而不是整个数组
//	//所以在函数内部计算一个函数参数部分的数组的元素个数时不靠谱的
//	
//	ret = binary_search(arr, input, sz);//此处传数组名只需传数组名
//	if (ret == -1)
//	{
//		printf("没找到");
//	}
//	else
//	{
//		printf("找到了，对应下标为%d", ret);
//	} 
//	//约定，找到返回下标，找不到返回-1
//	return 0;
//
//}



//利用bool（布尔）类型进行判断的返回，实际就是把0和1封装了一下
//#include<math.h>
//#include<stdbool.h>
//
//bool test(int x)
//{
//	int b = 0;
//	int flag = 1;
//
//	for (b = 2; b <= sqrt(x); b++)
//	{
//		if (x % b == 0)
//		{
//			flag = 0;
//			return false;
//		}
//	}
//		return true;
//}
//
//int main()
//{
//	int a = 0;
//	int num = 0;
//	int c = 0;
//
//	for (a = 101; a <= 200; a += 2)
//	{
//		c += test(a);
//		if (test(a))
//		{
//			printf("%d\n", a);
//		}
//	}
//
//	printf("%d", c);
//	return 0;
//}


//#include<stdlib.h>
//
//int test()
//{
//	return 1;
//}
//
//int main()
//{
//	int num = 0;
//	while (1)
//	{
//		test();
//		num += test();
//		//system("cls");
//		printf("%d\n", num);
//	}
//	return 0;
//}
//每调用一次test，num加一


//void test(int *p)//利用传参
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	while (1)
//	{
//		test(&num);
//		printf("%d\n", num);
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	return 0;
//}



//#include<string.h>
//int main()
//{
//	int len = strlen("abcdef");
//	printf("%d\n", len);//输出6
//	printf("%d\n", strlen("abcdef"));//输出6
//	
//	printf("%d", printf("%d", printf("%d", 43)));//究极套娃,输出4321
//
//	return 0;
//}



int binary_search(int arr[], int x)
{
	int right = 0;
	int left = 0;
	int mid = 0;
	int sz = 0;
	sz = sizeof(arr) / sizeof(arr[0]);

	right = sz - 1;

	while (left <= right)
	{
		mid = left + (right - left) / 2;
		if (arr[mid] < x)
		{
			left = mid + 1;
		}
		else if (arr[mid] > x)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int input = 0;
	scanf("%d", &input);
	int ret = 0;
	

	ret = binary_search(arr, input);
	if (ret == -1)
	{
		printf("没找到");
	}
	else
	{
		printf("找到了，对应下标为%d", ret);
	}

	return 0;

}
//错误写法