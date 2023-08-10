#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int a = 1;
//	int b = 2;
//	if (a == 3)
//		if (b == 2)
//			printf("wdnmd");
//		else
//			printf("qz");
//	return 0;
//}
////无输出


//int main()
//{
//	int a = 1;
//	int b = 2;
//	if (a == 3)
//	{
//		if (b == 2)
//			printf("wdnmd");
//	}
//	else
//			printf("qz");
//	return 0;
//}
////输出qz


//int a = 3
//;
//int test()
//{
//	if (a == 2)
//		return 3;
//	return 4;
//}
//
//int main()
//{
//	int b = 0;
//
//	b = test();
//	printf("%d", b);
//	return 0;
//}
////输出4


//判断一个数是否为奇数
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);//输入
//
//	int r = a % 2;
//	
//	if (0 == r)//判断
//		printf("%d为偶数", a);
//	else
//		printf("%d为奇数", a);
//	return 0;
//}


//输出1-100之间的奇数
int main()
{
	int a = 0;
	while (a < 100)
	{
		a++;
		if (a % 2 == 1)
			printf("%d ", a);
	}
	return 0;
}