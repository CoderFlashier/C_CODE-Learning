#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//#include<stdlib.h>
//int cmp_int(const void* e1, const void* e2)
//{
//	//return (*(int*)e1 - *(int*)e2);
//	//排成升序
//	return (*(int*)e2 - *(int*)e1);
//	//排成降序就是相反的逻辑
//	//因为程序要求的返回值是> = < 0 ，所以可以直接返回相减的值
//}
//
//
//int main()
//{
//	int arr[] = { 10,9,8,6,7,5,4,3,2,1};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include<string.h>
//#include<stdlib.h>
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//	//strcmp根据ASCII来逐个比较
//}
//int cmp_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->name - ((struct Stu*)e2)->name;
//}
//void Stu_cmp()
//{
//	struct Stu s[] = {{"zhangsan",15},{"lisi",16},{"wangwu",14}};
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_name);
//	//根据姓名比较
//	qsort(s, sz, sioeof(s[0]), cmp_age);
//	//根据年龄比较
//}
//
//int main()
//{
//	Stu_cmp();
//	return 0;
//}



//利用指针模拟qsort函数，写一个适用于各类数据的冒泡排序
int cmp(const void* e1, const void* e2)
{
	return (*(int*)e1 - *(int*)e2);
	//将传过来的指针换成原数据类型对应的指针（此处为int）后再解引用进行比较
}

void Swap(char* e1, char* e2, int width)
{
	int i = 0;
	//为了适应不同类型的数据，这里通过将字节一一对应进行交换实现数据的交换
	for (i = 0; i < width; i++)
	{
		char tmp = *e1;
		*e1 = *e2;
		*e2 = tmp;
		e1++;
		e2++;
	}
}

void bubble_sort(void* base, int sz, int width, int(*cmp)(const void* e1, const void* e2))
{
	//这里接收数据用void*，具有兼容性，用const修饰，防止数据被篡改
	int i = 0;
	for (; i < sz; i++)
	{
		int j = 0;
		int mark = 1;//用于判定数据是否有变动
		for (; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			//这里的base是数组的首地址，用转换为char是因为char是最小的单位，通过乘数据大小的方式可以适应不同数据
			{
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
				//将两个数据进行交换，此处需要传递首地址和数据大小
				mark = 0;
			}
		}
		if (mark == 1)
			//如果在一轮冒泡排序以后，数据没有 被修改，说明当前数据的排序正确，无需后续判断
		{
			break;
		}
	}
}

void bubble()
{
	int arr[] = { 0,8,4,6,2,1,4,5,6,7,8,5 };
	//创建用于排序的数据
	int sz = sizeof(arr) / sizeof(arr[0]);
	//求出需要排序的数据大小
	bubble_sort(arr, sz, sizeof(arr[0]), cmp);
	//传参，内容为：需要排序的数组、数据大小、单个数据大小、用于当前类型数据排序的函数
	//即：当要比较的数据类型不同时，只需要提供相应的比较函数即可，排序用的函数不变

	//打印结果
	int j = 0;
	for (; j < sz; j++)
	{
		printf("%d ", arr[j]);
	}
}

int main()
{
	bubble();
	return 0;
}