#define _CRT_SECURE_NO_WARNINGS


//#include<stdio.h>
//
//
//int add(int a, int b)
//{
//	return a + b;
//}
//
//int main()
//{
//	int a = 5;
//	int b = 10;
//	int c = add(a, b);
//	printf("%d", c);
//	return 0;
//}



//#include<stdio.h>
//int add(int a[], int n);
//int add2(int b[], int n);
//int add3(int c[], int n);
//
//
//int add(int a[], int n)
//{
//	int sum = add2(a, n);
//	return sum;
//}
//
//int add2(int b[], int n)
//{
//	int sum2 = add3(b, n);
//	return sum2;
//}
//
//int add3(int c[], int n)
//{
//	int i = 0;
//	int sum3 = 0;
//	for (i = 0; i < n; i++)
//	{
//		sum3 += c[i];
//	}
//	return sum3;
//}
//
//int main()
//{
//	int arr[10] = { 1 ,2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int n = sizeof(arr) / 4;
//	int sum = add(arr, n);
//	printf("%d", sum);
//	return 0;
//}



//#include<stdio.h>
//
//int main()
//{
//	int a = 20;
//	int b = 10;
//	int c = a + b;
//	printf("%d",c);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int sum = 0;//保存最终结果
//	int n = 0;
//	int ret = 1;//保存n的阶乘
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//		ret = 1;
//	}
//	printf("%d\n", sum);
//	return 0;
//}



#include <stdio.h>
int main()
{
	int i = 0;
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (i = 0; i <= 12; i++)
	{
		arr[i] = 0;
		printf("hehe\n");
	}
	return 0;
}
//死循环
//到i = 10开始越界访问0，到arr[12]会把i重置    
//只有在x86环境下才能复现                                                     