#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", i);
//	}
//	return 0;
//}




#include<stdio.h>


int add(int a, int b)
{
	return a + b;
}

int main()
{
	int a = 5;
	int b = 10;
	int c = add(a, b);
	printf("%d", c);
	return 0;
}