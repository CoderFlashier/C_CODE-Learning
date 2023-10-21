#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int a = 0;
//	int* pa = &a;
//	//pa是一个指针变量，用于存放地址
//	return 0;
//}


//int main()
//{
//	int n = 10;
//	char* pc = (char*)&n;
//	int* pi = &n;
//	printf("%p\n", &n);
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	printf("%p\n", pi);
//	printf("%p\n", pi + 1);
//	return 0;
//}


int main()
{
	int a = 10;
	printf("%d\n", a);
	int* pa = &a;
	*pa = 0;
	printf("%d\n", a);
	return 0;
}