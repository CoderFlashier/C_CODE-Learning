#define _CRT_SECURE_NO_WARNINGS


//#include<stdio.h>
//int i;
//int main()
//{
//	i--;
//	//sizeof这个操作符计算返回的结果时size_t类型，为无符号整形
//	//此时int会被转换成unsigned int ，-1变成一个很大的值
//	//当一个表达式有不同类型的数据，会进行转换
//	//类型大小小于整形的，会进行整形提升，提升为更大的类型
//	if (i > sizeof(i))
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//	//输出>
//}


//#include<stdio.h>
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int blank_left = 0;
//	int blank_mid = 0;
//	int mark = n;
//	int index = 1;
//	while (n >= 0)
//	{
//		int i = 0;
//		for (i = 0; i < blank_left; i++)
//		{
//			printf(" ");
//		}
//		printf("*");
//		if (n > 1 && mark)
//		{
//			for (i = 0; i < (n - 2); i++)
//			{
//				printf(" ");
//			}
//			printf("*");
//			blank_left++;
//		}
//		if (n <= 2)
//		{
//			blank_left--;
//		}
//		if (!mark)
//		{
//			if (n % 2 == 1 && index)
//			{
//				blank_mid++;
//				index = 0;
//			}
//			for (i = 0; i < blank_mid; i++)
//			{
//				printf(" ");
//			}
//			printf("*");
//			blank_mid += 2;
//			blank_left--;
//		}
//		printf("\n");
//		n -= 2;
//		if (n < 1 && mark)
//		{
//			n = (mark - 2);
//			mark = 0;
//		}
//	}
//} 



//#include<stdio.h>
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (i == j)
//				printf("*");
//			else if ((i + j) == (n - 1))
//				printf("*");
//			else
//				printf(" ");
//		}
//		printf("\n");
//	}
//}



#include<stdio.h>

int main()
{
	int year = 0;
	int month = 0;
	scanf("%d %d", &year, &month);
	int days_31[7] = { 1, 3, 5, 7, 8, 10 ,12 };
	int i = 0;
	if (month == 2)
	{
		if (((year % 4 == 0) && (year % 400 != 0)) || (year % 400 == 0))
			printf("29");
		else
			printf("28");
		goto end;
	}
	for (i = 0; i < 7; i++)
	{
		if (month == days_31[i])
		{
			printf("31");
			goto end;
		}
	}
	printf("30");
end:
	return 0;
}