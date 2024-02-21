#define _CRT_SECURE_NO_WARNINGS


//求a，b的最小公倍数
//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	if (a < b)
//	{
//		int temp = a;
//		a = b;
//		b = temp;
//	}
//	//辗转相除法求最大公因数
//	int temp_a = a;
//	int temp_b = b;
//	int max_com = 0;
//	int rem = temp_a % temp_b;
//	if (rem == 0)
//		max_com = temp_b;
//	else
//	{
//		while (rem)
//		{
//			int temp = temp_b;
//			temp_b = rem;
//			rem = temp % rem;
//		}
//		max_com = temp_b;
//	}
//	//printf("%d", max_com);
//	
//	//求最小公倍数
//	int ret = (a * b) / max_com;
//	printf("%d", ret);
//	return 0;
//}



//逆序单词输出,即单词不变，顺序调换
//in: I like Beijing.   out: Beijing. like I
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr_in[101] = { 0 };
//	char arr_out[101] = { 0 };
//	fgets(arr_in, 101, stdin);
//	int i = 0;
//	int length = (int)strlen(arr_in);
//	int mark = length - 1;
//	int k = 0;
//	int l = 0;
//	for (i = 0; i <= length; i++)
//	{
//		if (arr_in[i] == ' ' || arr_in[i] == '\n')
//		{
//			k = mark - i;
//			while( l < i)
//			{
//				arr_out[k] = arr_in[l];
//				k++;
//				l++;
//			}
//			arr_out[k] = ' ';
//			k++;
//			l++;
//		}
//	}
//	printf("%s", arr_out);
//	return 0;
//}


//先把整个字符串逆序，再把每个单词逆序
//逆序字符串和单词的算法是相同的，可以复用
#include <stdio.h>
#include <string.h>

void inversion(char arr[], int st, int mark)
//字符串，起始位置，结束位置
{
	int i = st;
	int j = (mark - 1);
	while (j >= i)
	{
		char temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		j--;
		i++;
	}
}


int main()
{
	char arr[101] = { 0 };
	fgets(arr, 101, stdin);
	int length = (int)strlen(arr) - 1;//把\n算上
	inversion(arr, 0, length);
	int i = 0;
	int mark = 0;
	for (i = 0; i <= length; i++)
	{
		if (arr[i] == ' ' || arr[i] == '\n')
		{
			inversion(arr, mark, i);
			mark = i + 1;
		}
	}
	printf("%s", arr);
	return 0;
}