#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int a = 40;
//	int c = 212;
//	
//	int b = (-8 + 22) * a - 10 + c / 2;
//	printf("%d\n", b);//这个地方的b前面不能加&，不然输出的值为-876873116
//	return 0;
//}
////正确的值为656

//int add(int x,int y)
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	scanf("%d %d", &n1, &n2);//注意这个地方的两个%d之间不能有“，”，不然输出的只是第一个数
//	int sum = add(n1,n2);
//	printf("%d", sum);
//	return 0;
//}
//可以跑

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);//输入
//
//	if (a > b)//比大小，选择
//	{
//		printf("%d比较大",a);
//	}
//	else
//	{
//		printf("%d比较大", b);
//	}
//	return 0;
// }
//可以跑


//int Max(int x, int y)//写一个比较大小的函数
//{
//	int m = 0;
//	if (x > y)
//	{
//		m = x;
//	}
//	else
//	{
//		m = y;
//	}
//}
//
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	
//	scanf("%d %d", &a, &b);//这个地方，如果第二个%d后面加一个\n就会无法输出
//	int r = Max(a, b);//调用函数
//	
//	printf("%d\n", r);
//	return 0;
//}
//可以跑


//int Max(int x, int y)
//{
//    if (x > y)
//        return x;
//    else
//        return y;
//}
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d%d", &a, &b);
//    //求2个整数的较大值
//    int r = Max(a, b);
//    printf("%d\n", r);
//
//    return 0;
//}
//比特的代码

//int hs(int x)
//{
//	if (x > 0)
//		return 1;
//	else if (x < 0)
//		return -1;
//	else
//		return 0;
//}
//
//int mian()
//{
//	int a = 0;
//	scanf("%d", &a);
//	
//	int r = hs(a);//调用选择函数
//	
//	printf("%d", r);
//	return 0;
//}
//报错，显示无法解析的外部符号main

//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d", &x);
//
//	if (x > 0)
//		y = 1;
//	else if (x == 0)
//		y = 0;
//	else
//		y = -1;
//
//	printf("%d", y);
//	return 0;
//}

//int hs(int x)
//{
//	int y = 0;
//
//	if (x > 0)
//		y = 1;
//	else if (x < 0)
//		y = -1;
//	else
//		y = 0;
//	
//	return y;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);//注意要写取地址符&，不然测试的时候VS不会报错，但是会报debug错误
//
//	int r = hs(a);
//	printf("%d", r);
//	
//	return 0;
//}
//可以跑

int main()
{
	int a = 0;
	if (a)
	{
		printf("hehe");
	}
	return 0;
}