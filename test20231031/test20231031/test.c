#include<stdio.h>

int a = 0;
void test()
{
	a = 100;
}
int main()
{
	printf("%d\n", a);
	test();
	printf("%d", a);
}