#define _CRT_SECURE_NO_WARNINGS


//经典bug，VS在x86环境下运行
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("wdnmd\n");
//	}
//	return 0;
//}
//在release环境下不会出现死循环，而是打印13次


#include <stdio.h>

int main()
{
	int i = 0;
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	printf("%p\n", arr);
	printf("%p\n", &i);
	/*for (i = 0; i <= 12; i++)
	{
		arr[i] = 0;
		printf("wdnmd\n");
	}*/
	return 0;
}
//可以发现，在Debug版本下，i的地址在arr后面；和Release版本下i的地址在arr前面