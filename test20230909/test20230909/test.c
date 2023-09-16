#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9,10 };
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d", &c); 
//
//	a = sizeof(arr) / sizeof(arr[0]);
//	for (b = 0; b < a; b++)
//	{
//		if (arr[b] == c)
//		{
//			printf("有，下标是%d", b);
//			break;
//		}
//	}
//	if (b == a)
//	{
//		printf("冇");
//	}
//	return 0;
//}
//查找有序数组中的数字，原始查找（遍历），一个个比较，效率极低



//int main()
//{
//	int left = 0;
//	int right = 0;
//	int mid = 0;
//	int i = 0;
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9,10 };
//	i = sizeof(arr) / sizeof(arr[0]);
//	right = i - 1;
//	
//	int a = 0;
//	scanf("%d", &a);//输入
//
//	while (left <= right)
//	{
//		mid = (right - left) / 2 + left;//此时不会超出范围
//	//此处若用mid = (left + right) / 2;//求mid不能放在循环外面
//	//当left和right的值加起来超过一个int能表达的最大值，会导致错误
//
//		if (arr[mid] < a)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > a)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("有,下标是%d", mid);//输出
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("冇");
//	}
//	return 0;
//}
////利用二分法（折半查找）查找有序数列，条件较为苛刻（但即使有2的32次方个数字，也最多只需要查找32次）


//void test()
//{
//	static b = 1;
//	b++;
//	printf("%d\n", b);
//}
//
//int main()
//{
//	int a = 0;
//
//	while (a < 5)
//	{
//		test();
//		a++;
//	}
//	return 0;
//}


//#include<string.h>//strlen函数
//#include<windows.h>//Sleep函数
//#include<stdlib.h>//cls指令
//
//int main()
//{
//	char arr1[] = "hello world!";
//	char arr2[] = "############";
//
//	int left = 0;
//	int right = strlen(arr2) - 1;//字符串的\0算长度
//
//	while (left <= right)
//	{
//		system("cls");//清空屏幕，实现一行的效果
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s", arr2);
//		Sleep(500);//产生停顿
//		left++;
//		right--;
//	}
//	return 0;
//}


#include<string.h>//strcmp
int main()
{
	int a = 0;
	char password[20] = { 0 };

	for (a = 0; a < 3; a++)
	{
		printf("输=>");
		scanf("%s", password);//数组名就是地址，此处可以不取地址
		//比较两个字符串是否相等，不能用==，eg：password == "123456"
		//而应该使用函数strcmp  (strling compair)
		if (strcmp(password,"123456") == 0)//如果函数的返回值是0，则两字符串相等
		{
			printf("oh yes!");
			break;
		}
		else
		{
			printf("error\n");
		}
	}
	if (a == 3)
	{
		printf("wdnmd");
	}
	return 0;
}