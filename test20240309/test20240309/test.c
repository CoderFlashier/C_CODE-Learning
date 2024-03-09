#define _CRT_SECURE_NO_WARNINGS


//#include <stdio.h>
////C语言标准输入输出
//
//int Is_min(int a, int b, int c);
////函数声明
//
//int main()
//{
//	//创建变量并初始化
//	int a = 0;
//	int b = 0;
//	int c = 0;
//
//	printf("Please enter three numbers：\n");
//	//输入变量
//	scanf("%d %d %d", &a, &b, &c);
//
//	//将变量传入函数，并将返回值赋给min
//	int min = Is_min(a, b, c);
//
//	//输出(打印）最小值
//	printf("The smallest number is %d.", min);
//	return 0;
//}
//
//
////创建一个得到最小值的函数，传入参数即为三个输入变量
//int Is_min(int a, int b, int c)
//{
//	if (a >= b)
//	//当 a >= b，if的条件为真，进入if语句内部，否则进入else语句
//	{
//		if (b >= c)
//			return c;
//			//当函数出现返回操作时，函数被停止
//		else
//			return b;
//	}
//	else
//	{
//		if (a >= c)
//			return c;
//		else
//			return a;
//	}
//}



//#include <stdio.h>
//
//int main() {
//	int a = 0, b = 0, c = 0;
//	int min = 0;//创建并初始化变量
//	scanf("%d %d %d", &a, &b, &c);//输入变量
//
//	if (a < b)//进行比较，当括号内条件成立时，进入if语句内
//		min = a;
//	else
//		min = b;
//	//此时min为a，b中的较小值
//	
//	if (c < min)
//		min = c;
//	printf("a,b,c中最小者是%d\n", min);
//	return 0;
//}



int main()
{
	float a = -8.625;
	return 0;
}