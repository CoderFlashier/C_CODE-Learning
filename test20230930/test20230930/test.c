#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//实现字符串的倒序输出
//#include<string.h>
//
//int main()
//{
//	char arr[] = "abcdefg";
//	int left = 0;
//	int right = 0;
//	//right = sizeof(arr) / sizeof(arr[0]) - 2;
//	right = strlen(arr) - 1;
//	while (left <= right)
//	{
//		char x = arr[left];
//		arr[left] = arr[right];
//		arr[right] = x;
//		left++;
//		right--;
//	}
//	
//	printf("%s", arr);
//	return 0;
//}


//利用递归实现
//#include<string.h>
//
//void reverse(char* arr)
//{
//	char x = *arr;
//	int len = strlen(arr);
//	*arr = *(arr + len - 1);
//	*(arr + len - 1) = '\0';
//	if (strlen(arr + 1) >= 2)//加上判断，否则为死递归
//	{
//		reverse(arr + 1);
//	}
//	*(arr + len - 1) = x;//这个要放在最后，要不没办法递归
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//	reverse(arr);
//	printf("%s", arr);
//	return 0;
//}


//利用递归实现求整数的各位对应的数之和
//int DigitSum(int a)
//{
//	int b = 0;
//	int sum = 0;
//	int c = 0;
//	b = a % 10;
//	if (a / 10 != 0)
//	{
//		c = DigitSum(a / 10);
//	}
//	sum = b + c;
//	return sum;
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int ret = 0;
//	ret = DigitSum(a);
//	printf("%d", ret);
//	return 0;
//}


//利用递归求n的k次方
//double Square(int n, int k)
//{
//	double ret = 1;
//	int c = 1;
//	if (k > 1)
//	{
//		ret = Square(n, k - 1);
//	}
//	if (k < 0)
//	{
//		return  1.0 / Square(n, -k);
//	}
//	ret = ret * n;
//	return ret;
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret = 0;
//	if (k >= 2 || k < 0)
//	{
//		ret = Square(n, k);
//	}
//	if (k >= 0 && k < 2)
//	{
//		ret = 1;
//	}
//	printf("%lf", ret);
//	return 0;
//}


//交换两个一样大小的数组的内容
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,4,6,8,0 };
//	int left = 0;
//	int right = 0;
//	right = sizeof(arr1) / sizeof(arr1[0]) - 1;
//	
//	while (left <= right)
//	{
//		int tmp = 0;
//		tmp = arr2[left];
//		arr2[left] = arr1[left];
//		arr1[left] = tmp;
//		left++;
//	}
//	
//	for (left = 0; left <= right; left++)
//	{
//		printf("%d ", arr1[left]);
//	}
//	printf("\n");
//	for (left = 0; left <= right; left++)
//	{
//		printf("%d ", arr2[left]);
//	}
//	return 0;
//}
//此处不能直接用arr1 = arr2，因为数组名是首元素地址


