#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int a = -7;
//	int b = a >> 1;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}


//int main()
//{
//	int a = 3;
//	int b = -5;
//	int c = a ^ b;
//	
//	printf("%d\n", a);
//	printf("%d\n", b);
//	printf("%d\n", c);
//	return 0;
//}


//不创建临时变量交换两个数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d", a, b);
//	return 0;
//}


//计算一个整数储存在内存中的二进制中1的个数
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	int count = 0;
//	for (; i < 32; i++)
//	{
//		if (a >> i & 1 == 1)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}


//int main()
//{
//	int flag = 3;
//	//flag为真，进入if
//	if (flag)
//	{
//		printf("wdnmd");
//	}
//
//	//flag为假，进入if
//	if (!flag)
//	{
//		printf("wdnmd");
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	printf("%d", ~a);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = a++;
//	//b = a; a = a + 1;
//	int c = ++a;
//	//a = a + 1; c = a;
//	printf("%d %d %d", a, b,c);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int* p = &a;//将a的地址存进p
//	*p = 20;//对p解引用，通过p找到a
//	printf("%d", a);
//	return 0;
//}


//int main()
//{
//	int a = 3.14;
//	printf("%d", a);
//	return 0;
//}


//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));//(2)
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//(4)
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//(1)
//	printf("%d\n", sizeof(ch));//(3)
//	test1(arr);
//	test2(ch);
//	return 0;
//}


//int main()
//{
//	int a = 3;
//	int b = 0;
//	int c = a || b;//任一为真，结果为真（1）
//	printf("%d", c);
//	return 0;
//}


//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	i = a++||++b||d++;
//	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}


//#include<stdio.h>
//
//long long Peaches(int x)
//{
//	long long peach = 1;
//	for(; x >= 1; x--)
//	{
//		peach = (peach + 1) * 2;
//	}
//	return peach;
//}
//
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	long long ret = 0;1
//	ret = Peaches(input - 1);
//	printf("%lld", ret);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a);
//	b = (a > 5 ? 3 : -3);
//	//另一种写法(a > 5) ? (b = 3): (b = -3);
//	printf("%d", b);
//	return 0;
//}


//int main()
//{
//	int a = 6;
//	int b = a << 1;
//	printf("a=%d\nb=%d", a, b);
//	return 0;
//}

//此时a = 00000000000000000000000000000110
//    b = 00000000000000000000000000001100



int main()
{
	int a = -6;
	int b = a >> 2;
	//补码：
	//a = 11111111111111111111111111111010
	//b = 11111111111111111111111111111110
	printf("a=%d\nb=%d", a, b);
	return 0;
}