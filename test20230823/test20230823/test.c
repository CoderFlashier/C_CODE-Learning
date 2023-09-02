#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n = printf("hello world!");//取n为printf的返回值
	printf("\n%d", n);//返回值为字符个数，包括\n
	return 0;
}