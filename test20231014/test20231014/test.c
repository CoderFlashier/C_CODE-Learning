#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[100] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (; i < n; i++)
//	{
//		scanf("%s", arr);
//		/*j = strlen(arr);l
//		arr[j] = '*';
//		j++;*/
//	}
//	printf("%s", arr);
//	return 0;
//}


//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	int i = 0;
//	int mark = 0;
//	for (i = a; i <= b; i++)
//	{
//		int tem = i;
//		int tem2 = i;
//		int j = 0;
//		while (tem2 > 0)
//		{
//			tem2 /= 10;
//			j++;
//		}
//		j--;
//		while (tem > 0)
//		{
//			int pw = 0;
//			pw = (int)pow(10, j);
//			if (tem / pw == tem % 10)
//			{
//				tem %= (int)pow(10, j);
//				j -= 1;
//				tem /= 10;
//				j -= 1;
//				if (j <= 0)
//				{
//					break;
//				}
//			}
//			else
//			{
//				break;
//			}
//		}
//		if (tem <= 9)
//		{
//			mark++;
//			if (mark > 1)
//			{
//				printf("\n%d", i);
//			}
//			else
//			{
//				printf("%d", i);
//			}
//			
//		}
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int b = 0;
//	b = pow(10, a);
//	printf("%d", b);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int arr[1000] = { 0 };
//	int j = 0;
//	int mark = 0;
//	for (; i < n; i++)
//	{
//		arr[i] = i + 1;
//	}
//
//	while (1)
//	{
//		for (i = 0; i < n; i++)
//		{
//			if (arr[i] != 0)
//			{
//				j++;
//				if (j == 3)
//				{
//					arr[i] = 0;
//					j = 0;
//					mark++;
//				}
//			}
//		}
//		if (mark == (n - 1))
//		{
//			break;
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] != 0)
//		{
//			printf("最后剩下同学的原始编号为:%d", arr[i]);
//			break;
//		}
//	}
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 2;
//	int l = 0;
//	for (; i < (n / 2 + 1); i++)
//	{
//		if (n % i == 0)
//		{
//			int j = 2;
//			int k = 0;
//			for (; j < i; j++)
//			{
//				if (i % j == 0)
//				{
//					k++;
//					break;
//				}
//			}
//			if (k == 0)
//			{
//				l = n / i;
//			}
//			if (i > l)
//			{
//				l = i;
//			}
//		}
//	}
//	printf("%d", l);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	long long arr[1000] = { 0 };
//	int count = 0;
//	long long arr_mark[100] = { 0 };
//	for (;i < n; i++)
//	{
//		scanf("%lld", &arr[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		int j = i + 1;
//		for (; j < n; j++)
//		{
//			int k = 0;
//			for (; k < n; k++)
//			{
//				if (arr[i] + arr[j] == arr[k])
//				{
//					int l = 0;
//					int mark = 0;
//					for (; l < count; l++)
//					{
//						if (arr[k] == arr_mark[l])
//						{
//							mark = 1;
//							break;
//						}
//					}
//					if (mark == 0)
//					{
//						arr_mark[count] = arr[k];
//						count++;
//						mark = 0;
//					}
//				}
//			}
//		}
//	}
//	printf("%d", count);
//	return 0;
//}



//最大的整数
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	char arr1[1000] = { 0 };
//	char arr2[100] = { 0 };
//	char arr3[100] = "0";
//	int i = 0;
//	int sz = 0;
//	int j = 0;
//	for (; i < n; i++)
//	{
//		scanf("%s", arr2);
//		sz = strlen(arr2);
//		j = j + sz;
//		//printf("%d\n", sz);	
//		strcat(arr1, arr2);
//		if (i >= 1)
//		{
//			j++;
//		}
//		arr1[j] = '*';//在每一个数后面放一个*
//	}
//	//printf("%s", arr1);
//	
//	char arr_com1[100] = { 0 };
//	
//	i = 0;
//	int k = 0;
//	while(1)
//	{
//		if (arr1[i] != '*')
//		{
//			arr_com1[k] = arr1[i];
//			i++;
//			k++;
//		}
//		else
//		{
//			break;
//		}
//	}//取第一个数作为初始值
//	
//	char arr_sum[1000] = { 0 };
//	int l = 0;
//	int mark = 0;
//	int sz2 = 0;
//	for (; l < n; l++)
//	{
//		i = 0;
//		while (i < j)//循环读取每个数并比较
//		{
//			k = 0;
//			char arr_com2[100] = { 0 };
//			while (1)
//			{
//				if (arr1[i] != '*')
//				{
//					arr_com2[k] = arr1[i];
//					i++;
//					k++;
//				}
//				else
//				{
//					break;
//				}
//			}
//			int ret = 0;
//			int p = 0;
//			while (1)
//			{
//				int sz_1 = strlen(arr_com1);
//				int sz_2 = strlen(arr_com2);
//				if (arr_com1[p] > arr_com2[p])
//				{
//					ret = 1;
//					break;
//				}
//				if (arr_com1[p] < arr_com2[p])
//				{
//					ret = -1;
//					break;
//				}
//				p++;
//				if (p >= sz_1 || p >= sz_2)
//				{
//					if (sz_1 > sz_2)
//					{
//						if (arr_com1[sz_2] > arr_com2[0])
//						{
//							ret = 1;
//							break;
//						}
//						else
//						{
//							ret = -1;
//							break;
//						}
//					}
//					else if(sz_1 < sz_2)
//					{
//						if (arr_com1[0] < arr_com2[sz_1])
//						{
//							ret = -1;
//							break;
//						}
//						else
//						{
//							ret = 1;
//							break;
//						}
//					}
//					else
//					{
//						ret = 0;
//						break;
//					}
//				}
//			}
//			if (ret <= 0)
//			{
//				mark = i;
//				sz2 = strlen(arr_com2);
//				strcpy(arr_com1, arr_com2);
//			}
//			//strcpy(arr_com2, arr3);
//			i++;
//		}
//		int m = 0;
//		
//		for (; m < sz2; m++)
//		{
//			arr1[mark - 1 - m] = 1;
//		}
//		strcat(arr_sum, arr_com1);
//		strcpy(arr_com1, arr3);
//		//strcpy(arr_com2, arr3);
//	}
//	printf("%s", arr_sum);
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int compare(const void* a, const void* b)
//{
//    char str1[20], str2[20];
//    sprintf(str1, "%d", *(int*)a);
//    sprintf(str2, "%d", *(int*)b);
//
//    char ab[40], ba[40];
//    strcpy(ab, str1);
//    strcat(ab, str2);
//    strcpy(ba, str2);
//    strcat(ba, str1);
//
//    return strcmp(ba, ab);
//}
//
//int main() {
//    int n;
//    scanf("%d", &n);
//
//    int nums[100];
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &nums[i]);
//    }
//
//    qsort(nums, n, sizeof(int), compare);
//
//    char result[1000] = "";
//    for (int i = 0; i < n; i++) 
//    {
//        char temp[20];
//        sprintf(temp, "%d", nums[i]);
//        strcat(result, temp);
//    }
//
//    printf("%s\n", result);
//
//    return 0;
//}


#include<stdio.h>
int main()
{
	int length = 0;
	int num = 0;
	int new = 0;
	scanf("%d %d %d", &length, &num, &new);
	int arr[30000] = { 0 };
	int i = 0;
	for (; i <= length; i++)
	{
		arr[i] = i;
	}
	int j = 0;
	for (; j < num; j++)
	{
		int mark1 = 0;
		scanf("%d", &mark1);
		arr[mark1] = -1;
	}
	
	int k = 0;
	int record = 0;
	int distance = 0;
	int mark_max = 0;
	int mark_new = 0;
	int mark_dis = 0;
	while (new > 0)
	{
		k = 0;
		for (; k <= length; k++)
		{
			if (k > 0)
			{
				distance++;
			}
			if (arr[k] == -1)
			{
				record++;
			}
			if (record == 2)
			{
				if (distance > mark_dis)
				{
					mark_max = k;
					mark_dis = distance;
					
				}
				record = 1;
				distance = 0;
			}
		}
		record = 0;
		mark_new = (mark_max * 2 - mark_dis) / 2;
		arr[mark_new] = -1;
		mark_max = 0;
		mark_dis = 0;
		distance = 0;
		new--;
	}
	
	
	int l = 0;
	int count = 0;
	int max2 = 0;
	int mark2 = 0;
	int mark3 = 0;
	for (; l <= length; l++)
	{
		if (l > 0)
		{
			count++;
		}
		if (arr[l] == -1)
		{
			mark2++;
			printf("%d ", l);
		}
		if (mark2 == 2)
		{
			if (max2 < count)
			{
				max2 = count;
				mark3 = l;
			}
			mark2 = 1;
			count = 0;
		}
	}
	printf("%d", max2);
	return 0;
}


//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	int i = 0;
//	for (; i < input; i++)
//	{
//		long long g = 0;
//		long long l = 0;
//		long long a = 0;
//		long long b = 0;
//		long long max = 0;
//		long long min = 0;
//		scanf("%lld %lld", &g, &l);
//		a = g;
//		b = l;
//		max = a + b;
//		min = (long long)sqrt(l / g) * g * 2;
//		printf("%lld %lld\n", min, max);
//	}
//	return 0;
//}
//
//#include <stdio.h>
//#include <math.h>
//int main() {
//	long long t;
//	long long a, b;
//	scanf("%lld", &t);
//	for (int i = 1; i <= t; i++) {
//		scanf("%lld %lld", &a, &b);
//		printf("%lld %lld\n", (long long)sqrt(b / a) * a * 2, a + b);
//	}
//	return 0;
//}