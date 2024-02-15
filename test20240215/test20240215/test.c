#define _CRT_SECURE_NO_WARNINGS


//判断三角形类型
//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//
//	//输入
//	while (scanf("%d %d %d", &a, &b, &c) == 3)
//	{
//		//判断
//		if ((a + b) > c && (a + c) > b && (b + c) > a)
//		{
//			if (a == b && b == c)
//			{
//				printf("Equilateral triangle!\n");
//				//等边
//			}
//			else if ((a == b) || (b == c) || (a == c))
//			{
//				printf("Lsosceles triangle!\n");
//				//等腰
//			}
//			else
//			{
//				printf("Ordinary triangle!\n");
//				//普通
//			}
//		}
//		else
//		{
//			printf("Not a triangle!\n");
//			//不成立
//		}
//	}
//	return 0;
//}



//倒序输出字符串
//#include <stdio.h>
//#include <string.h>
//
//void reverse(char arr[], int length);
//
//int main()
//{
//	char arr[20] = { 0 };
//	//gets在C11被弃用
//	gets(arr);
//
//	//注意fgets会把缓冲区中的\n也读取，并放在字符串中，而gtes()是将\n取出后丢弃
//	//如果输入的长度恰好只剩一个位置的话，\n不会被存入字符串
//	//最后一个位置一定是留给\0的
//	//fgets(arr, 18, stdin);
//	int length = (int)strlen(arr);
//	//strlen计算长度不包括\0
//
//	reverse(arr, length);
//	printf("%s", arr);
//	return 0;
//}
//
//void reverse(char arr[], int length)
//{
//	char* pointer = arr + (length - 2);
//	//考虑到\n占的位置
//	//当\n不被存入字符串时，这里应该是-1
//	char* st = arr;
//	//这里注意不能直接用arr进行计算，不然字符串的首地址会被改变
//	int len = length;
//	while (pointer >= st)
//	{
//		char temp = *st;
//		*st = *pointer;
//		*pointer = temp;
//		st++;
//		pointer--;
//	}
//}




//#include <stdio.h>
//
//int main()
//{
//	char arr1[5] = { 0 };
//	char arr2[5] = { 0 };
//	fgets(arr1, 5, stdin);
//	fgets(arr2, 5, stdin);
//	
//	printf("arr1 = %s\n", arr1);
//	printf("arr2 = %s", arr2);
//	return 0;
//}



#include <stdio.h>

int main()
{
	char arr1[5] = { 0 };
	char arr2[5] = { 0 };
	gets(arr1);
	gets(arr2);

	printf("arr1 = %s\n", arr1);
	printf("arr2 = %s\n", arr2);
	return 0;
}