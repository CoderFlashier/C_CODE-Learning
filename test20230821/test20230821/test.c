#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int a = 73;
//	int b = 32;
//	int c = 99;
//	int d = 97;
//	int e = 100;
//	int f = 32;
//	int g = 110;
//	int h = 111;
//	int i = 32;
//	int j = 105;
//	int k = 116;
//	int l = 33;
//	printf("%c%c%c%c%c%c%c%c%c%c%c%c", a, b, c, d, e, f, g, h, i, j, k, l);//%c打印字符
//	return 0;
//}
//输出I can do it!



//int main()
//{
//	int arr[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };//创建数组
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//求数组大小
//	//sizeof(arr)计算数组总大小，sizeof(arr[0])计算数组元素大小
//
//	while (i < sz)//利用循环输出字符
//	{
//		printf("%c", arr[i]);
//		i++;
//	}
//
//	return 0;
//}
//输出I can do it!



//struct human
//{
//	int year[4];
//	int month[2];
//	int day[2];
//};
//
//int main()
//{
//	struct human  r = { 2000,01,01 };
//	scanf("%d %d %d", &r.year, &r.month, &r.day);
//	if (r.year >= 1990 && r.year <= 2015 && r.month >= 1 && r.month <= 12 && r.day >= 1 && r.day <= 30)
//	{
//		printf("%d\n %d\n %d\n", r.year, r.month, r.day);
//	}
//	else
//	{
//		printf("error");
//	}
//	return 0;
//报错（int*和int混乱）



//int main()
//{
//	int year = 0;
//	int month = 0;
//	int date = 0;
//	//输入
//	scanf("%4d%2d%2d", &year, &month, &date);//通过增加数字来设置输入数据的位数
//	//输出
//	printf("year=%d\n", year);
//	printf("month=%02d\n",month);//2d表示输出两位，0表示用0补齐位数
//	printf("date=%02d",date);
//	
//	return 0;
//}


//struct score
//{
//	int No[8];
//	float C_language[4];
//	float math[4];
//	float English[4];
//};
//
//int main()
//{
//	struct score r = { 10000000, 0.00, 0.00,0.00 };
//	scanf("%d %f %f %f", &r.No, &r.C_language, &r.math, &r.English);
//	printf("The each subject score of No.%d is %f,%f,%f", r.No, r.C_language, r.math, r.English);
//	return 0;
//}
//能跑起来，但是输出数据时数据错误



//int main()
//{
//	int id = 0;
//	float c = 0.0f;
//	float math = 0.0f;
//	float english = 0.0f;
//
//	scanf("%d%f%f%f", &id, &c, &math, &english);
//
//	printf("The each subject score of No. %d is %.2f, %.2f, %.2f.", id, c, math, english);//.2用于确定输出位数
//	//没有设置输出位数，会导致小数点后面的位数不确定
//	return 0;
//}



int main()
{

	return 0;
}