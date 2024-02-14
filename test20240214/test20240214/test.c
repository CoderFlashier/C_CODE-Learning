#define _CRT_SECURE_NO_WARNINGS


//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hehe\n");
//    }
//    return 0;
//}
//死循环
//到i = 10开始越界访问0，到arr[12]会把i重置    
//只有在x86环境下才能复现       
//原因：i和arr[12]在同一内存空间
//i和arr都是局部数据，放在内存的栈区
//栈区内存的使用习惯：先使用高地址处的空间，再使用低地址处的空间
//数组随着下标的增长，地址由低到高变化
//如果i和arr之间有适当的空间，利用数组的越界操作就有可能覆盖i，从而导致死循环
//i和arr之间的空间大小取决于编译器，如vs2022在x86环境下为8个字节
//如果i在arr之后创建，则不会出现这种情况



//strcpy

//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char arr2[20] = "xxxxxxxxxxxx";
//	char arr1[] = "hello world";
//	strcpy(arr2, arr1);
//	printf("%s", arr2);
//}
//通过监视，发现strcpy会把\0也拷贝


////模拟实现strcpy
//#include<stdio.h>
//void my_strcpy(char* dest, char* src)
////传入字符串地址
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}
//
//
//int main()
//{
//	char arr2[20] = "xxxxxxxxxxxx";
//	char arr1[] = "hello world";
//
//	my_strcpy(arr2, arr1);
//	printf("%s", arr2);
//}


//改进代码
#include <stdio.h>
#include <assert.h>
char* my_strcpy(char* dest, const char* src)//这里利用const保证src不会因为代码编写错误而修改
//返回char*是为了链式访问，使得该函数的返回值可以作为其它函数的参数，返回目标空间的起始地址
{
	//断言，当src为NULL（空指针）时，会报错并指出错误（可以用于任意自己想判断的语句）
	assert(src != NULL);
	assert(dest != NULL);
	//在release版本中assert会被优化

	char* ret = dest;

	while (*dest++ = *src++);
	//一个赋值表达式，当拷贝字符时，不为0，当拷贝\0时，为假，停止循环
	//同时利用后置++简化代码，while的大括号可去

	return ret;
}


int main()
{
	char arr2[20] = "xxxxxxxxxxxx";
	char arr1[] = "hello world";

	my_strcpy(arr2, arr1);
	printf("%s", arr2);
}



//#include <stdio.h>
//
//int main()
//{
//	const int num = 10;
//	int num2 = 50;
//	num = 20;
//	//这样改会报错
//
//	int* p = &num;
//	*p = 20;
//	//这样改可以
//
//	//1、const 在 * 左边
//	int const* p = &num;
//	*p = 20;
//	//这样也会报错
//	//这里int const* p（const在*左边）的意思是：p指向的对象不能通过p来改变了，但是p自身可以改变
//	p = &num2;
//	//没有问题
//
//	 
//	//2、const 在 * 右边
//	int* const p = &num;
//	//意思是p指向的对象可以通过p改变，但是不能修改p本身
//	*p = 0;
//	//此时num被修改
//	p = &num2;
//	//p不能被修改
//
//	//*的左右可以各加一个const
//	const int* const p = &num;
//	p = &num2;
//	*p = 20;
//	//都不行
//
//	printf("%d", num);
//	return 0;
//}