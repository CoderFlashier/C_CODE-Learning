#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


#define add(x,y) ((x)+(y))//利用宏写一个加法

int main()
{
	int a = 0;
	int a = 0;
	int b = 0;

	scanf("%d %d", &a, &b);
	int r = add(a, b);//调用宏

	printf("%d", r);
	return 0;
}