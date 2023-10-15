#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	for (; num > 0; num--)
//	{
//		char arr[100] = { 0 };
//		scanf("%s", arr);
//		int sz = strlen(arr);
//		int j = 0;
//		char arr2[100] = { 0 };
//		int i = 0;
//		for (; j < sz; j++)
//		{
//			if ((arr[j] >= 65 && arr[j] <= 90) || (arr[j] >= 97 && arr[j] <= 122))
//			{
//				arr2[i] = arr[j];
//				i++;
//			}
//		}
//		printf("%s\n", arr2);
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int l = num;
//	char arr2[500] = { 0 };
//	int j = 0;
//	for (; num > 0; num--)
//	{
//		char arr[100] = { 0 };
//		scanf("%s", arr);
//		int sz = strlen(arr);
//		int i = 0;
//
//		for (; i < sz; i++)
//		{
//			arr2[j] = arr[i];
//			j++;
//		}
//	}
//	//printf("%s", arr2);
//	int k = 0;
//	for (; k < j; k++)
//	{
//		if (arr2[k] == 48 && l >= 2)
//		{
//			printf("\n");
//			l--;
//		}
//		if ((arr2[k] >= 65 && arr2[k] <= 90) || (arr2[k] >= 97 && arr2[k] <= 122))
//		{
//			printf("%c", arr2[k]);
//		}
//	}
//
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	
//	char arr2[200] = { 0 };
//	
//	int j = 0;
//	for (; input > 0; input--)
//	{
//		char arr1[100] = { 0 };
//		scanf("%s", arr1);
//		int sz = strlen(arr1);
//		int i = 0;
//		for (; i < sz; i++)
//		{
//			arr2[j] = arr1[i];
//			j++;
//		}
//	}
//	//printf("%s", arr2);
//
//	int x = 0;
//	int index = 0;
//	for (; x < j - 1; x++)
//	{
//		if (arr2[x] > 48 && arr2[x] <= 57)
//		{
//			index = arr2[x] - '0';
//			x = x + index;
//			printf("%c", arr2[x]);
//		}
//		else
//		{
//			printf("\n");
//		}
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[100][20] = { 0 };
//	int con = 0;
//	int judge = 0;
//	scanf("%d %d", &con, &judge);
//	int i = 0;
//	for (; i < con; i++)//将成绩写入二维数组
//	{
//		int j = 0;
//		for (; j < judge; j++)
//		{
//			int input = 0;
//			scanf("%d", &input);
//			arr[i][j] = input;
//		}
//	}
//	
//	int x = 0;
//	
//	for (; x < con; x++)//去掉极值
//	{
//		int mark_x = x;
//		int mark_y = 0;
//		int mark_x2 = x;
//		int mark_y2 = 0;
//		int y = 0;
//		int max = arr[x][y];
//		int min = arr[x][y];
//		for (; y < judge; y++)
//		{
//			if (max < arr[x][y])
//			{
//				max = arr[x][y];
//				mark_x = x;
//				mark_y = y;
//			}
//			if (min > arr[x][y])
//			{
//				min = arr[x][y];
//				mark_x2 = x;
//				mark_y2 = y;
//			}
//		}
//		arr[mark_x][mark_y] = 0;
//		arr[mark_x2][mark_y2] = 0;
//	}
//
//	double arr2[100] = { 0.0 };
//	x = 0;
//	for (; x < con; x++)
//	{
//		double count = 0;
//		int y = 0;
//		for (; y < judge; y++)
//		{
//			count += arr[x][y];	
//		}
//		count = count / (judge - 2);
//		arr2[x] = count;
//	}
//
//	x = 0;
//	double Max = arr2[x];
//	for (; x < con; x++)
//	{
//		if (Max < arr2[x])
//		{
//			Max = arr2[x];
//		}
//	}
//	printf("%.2lf", Max);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//
//	char arr2[2000] = { 0 };
//
//	int j = 0;
//	for (; input > 0; input--)
//	{
//		char arr1[1000] = { 0 };
//		scanf("%s", arr1);
//		int sz = strlen(arr1);
//		
//		int i = 0;
//		int index = 0;
//		
//		for (; i < sz-1; i++)
//		{
//			index = arr1[i] - '0';
//			i = i + index;
//			arr2[j] = arr1[i];
//			index = 0;
//			j++;
//		}
//		
//		if (arr1[sz - 1] == '0')
//		{
//			arr2[j] = '*';
//			j++;
//		}
//	}
//	//printf("%s", arr2);
//
//	int x = 0;
//	for (; x < j - 1; x++)
//	{
//		if (arr2[x] != '*')
//		{
//			printf("%c", arr2[x]);
//		}
//		else
//		{
//			printf("\n");
//		}
//	}
//
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int bri1[50] = {0};
//	int bri2[50] = {0};
//	int bri3[100] = { 0 };
//	int input1 = 0;
//	int input2 = 0;
//	scanf("%d", &input1);
//	int i = 0;
//	for (; i < input1; i++)
//	{
//		scanf("%d", &bri1[i]);
//	}
//	scanf("%d", &input2);
//	int j = 0;
//	for (j = 0; j < input2; j++)
//	{
//		scanf("%d", &bri2[j]);
//
//	}
//	int k = 0;
//	for (; k < i + j ; k++)
//	{
//		if (k < i)
//		{
//			bri3[k] = bri1[k];
//		}
//		else
//		{
//			bri3[k] = bri2[k - i];
//		}
//	}
//	int x = 0;
//	for (; x < i + j; x++)
//	{
//		int y = 0;
//		for (; y < i + j - 1 - x; y++)
//		{
//			if (bri3[y] > bri3[y + 1])
//			{
//				int ex = bri3[y];
//				bri3[y] = bri3[y + 1];
//				bri3[y + 1] = ex;
//			}
//		}
//	}
//	int n = 0;
//	printf("%d\n", i + j);
//	for (; n < i + j ; n++)
//	{
//		printf("%d", bri3[n]);
//		if ((n + 1) < (i + j ))
//		{
//			printf(" ");
//		}
//	}
//	return 0;
//}


#include<stdio.h>
