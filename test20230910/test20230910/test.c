#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


void wdnmd(int a[])
{
	printf("%zu\n", sizeof(a));//数组在传参的时候传递的是数组首元素的地址，应该用指针接收，此处为求指针的大小
	//此处在x86环境下输出4，x64输出8
}
int main()
{
	int a[10] = { 0 };
	printf("%zu\n", sizeof(a));//整个数组
	printf("%zu\n", sizeof(a[1]));//第二个元素的大小
	wdnmd(a);
	return 0;
}
//输出40、4、8

  