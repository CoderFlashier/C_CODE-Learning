#define _CRT_SECURE_NO_WARNINGS


//倒序输出字符串
//#include <stdio.h>
//#include <string.h>
//
//void reverse(char arr[], int length);
//
//int main()
//{
//    char arr[20] = { 0 };
//    //gets在C11被弃用
//    //gets(arr);
//
//    //注意fgets会把缓冲区中的\n也读取，并放在字符串中，而gtes()是将\n取出后丢弃
//    //如果输入的长度恰好只剩一个位置的话，\n不会被存入字符串
//    //最后一个位置一定是留给\0的
//    fgets(arr, 18, stdin);
//    int length = (int)strlen(arr);
//    //strlen计算长度不包括\0
//
//    reverse(arr, length);
//    printf("%s", arr);
//    return 0;
//}
//
//void reverse(char arr[], int length)
//{
//    char* pointer = arr + (length - 2);
//    //考虑到\n占的位置
//    //当\n不被存入字符串时，这里应该是-1
//    int len = length;
//    while (pointer >= arr)
//    {
//        char temp = *arr;
//        *arr = *pointer;
//        *pointer = temp;
//        arr++;
//        pointer--;
//    }
//}

//倒序输出字符串
//#include <stdio.h>
//#include <string.h>
//
//void reverse(char arr[], int length);
//
//int main()
//{
//    char arr[20] = { 0 };
//    //gets在C11被弃用
//    //gets(arr);
//
//    //注意fgets会把缓冲区中的\n也读取，并放在字符串中，而gtes()是将\n取出后丢弃
//    //如果输入的长度恰好只剩一个位置的话，\n不会被存入字符串
//    //最后一个位置一定是留给\0的
//    fgets(arr, 18, stdin);
//    int length = (int)strlen(arr);
//    //strlen计算长度不包括\0
//
//    reverse(arr, length);
//    printf("%s", arr);
//    return 0;
//}
//
//void reverse(char arr[], int length)
//{
//    char* pointer = arr + (length - 2);
//    //考虑到\n占的位置
//    //当\n不被存入字符串时，这里应该是-1
//    int len = length;
//    while (pointer >= arr)
//    {
//        char temp = *arr;
//        *arr = *pointer;
//        *pointer = temp;
//        arr++;
//        pointer--;
//    }
//}



//倒序输出字符串
//#include <stdio.h>
//#include <string.h>
//
//void reverse(char arr[], int length);
//
//int main()
//{
//    char arr[20] = { 0 };
//
//    fgets(arr, 18, stdin);
//    int length = (int)strlen(arr);
//    reverse(arr, length);
//
//    printf("%s", arr);
//    return 0;
//}
//
//void reverse(char arr[], int length)
//{
//    char* pointer = arr + (length - 2);
//    int len = length;
//    while (pointer >= arr)
//    {
//        char temp = *arr;
//        *arr = *pointer;
//        *pointer = temp;
//        arr++;
//        pointer--;
//    }
//}


//输出a + aa + aaa + aaaa + aaaaa
#include <stdio.h>
#include <math.h>

int main()
{
	int input = 0;
	scanf("%d", &input);
	int length = 0;
	int temp_input = input;
	while (temp_input)
	{
		length++;
		temp_input /= 10;
	}
	//printf("%d", length);

	int sum = 0;
	int temp = input;

	int i = 0;
	for (i = 0; i < 5; i++)
	{
		sum += temp;
		temp = temp * pow(10, length) + input;
	}
	
	printf("%d", sum);
	return 0;
}

