#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	char arr[5] = { 0 };
//	printf("%s", arr);
//	return 0;
//}


int main()
{
	/*int arr[10] = { 0 };
	printf("%d\n", &arr[9] - &arr[0]);
	printf("%d\n", &arr[0] - &arr[9]);
	return 0;*/

	int arr[10] = { 0 };
	char ch[10] = { 0 };
	printf("%d", &arr[2] - &ch[3]);

}