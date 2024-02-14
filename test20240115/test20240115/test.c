#define _CRT_SECURE_NO_WARNINGS

//插入排序
//#include<stdio.h>
//
//int main()
//{
//	int arr[10] = { 1, 45, 78, 23, 488, 56, 45, 85, 15, 23 };
//	int i = 0;
//	for (i = 0; i < 9; i++)
//	{
//		int end_mark = i;
//		int num_next = arr[end_mark + 1];
//		while (end_mark >= 0)
//		{
//			if (arr[end_mark] < num_next || arr[end_mark] == num_next)
//			{
//				arr[end_mark + 1] = num_next;
//				break;
//			}
//			else
//			{
//				arr[end_mark + 1] = arr[end_mark];
//				arr[end_mark] = num_next;
//				end_mark--;
//			}
//		}
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d  ", arr[i]);
//	}
//}


//希尔排序
//#include<stdio.h>
//
//int main()
//{
//	int arr[10] = { 1, 45, 78, 23, 488, 56, 45, 85, 15, 23 };
//	int i = 0;
//	int gap = 10 / 2;
//	while (gap >= 1)
//	{
//		for (i = 0; i < (10 - gap); i++)
//		{
//			int end = i;
//			int temp = arr[end + gap];
//			while (end >= 0)
//			{
//				if (arr[end] > arr[end + gap])
//				{
//					arr[end + gap] = arr[end];
//					arr[end] = temp;
//					end -= gap;
//				}
//				else
//					break;
//			}
//		}
//		gap /= 2;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d  ", arr[i]);
//	}
//}



//选择排序
//#include<stdio.h>
//
//int main()
//{
//	int arr[10] = { 1, 45, 78, 23, 488, 56, 45, 85, 15, 23 };
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		int j = 0;
//		int max = arr[i];
//		int min = arr[i];
//		int max_mark = i;
//		int min_mark = i;
//		for (j = i; j < (10 - i); j++)
//		{
//			if (arr[j] > max)
//			{
//				max_mark = j;
//				max = arr[j];
//			}
//			if (arr[j] < min)
//			{
//				min_mark = j;
//				min = arr[j];
//			}
//		}
//		int temp = 0;
//		temp = arr[i];
//		arr[i] = min;
//		arr[min_mark] = temp;
//		if (i == max_mark)
//			max_mark = min_mark;
//		//这里一定要进行处理、不然当最大的数正好在最小的数需要放的位置上时，会导致数据错误
//
//		temp = arr[9 - i];
//		arr[9 - i] = max;
//		arr[max_mark] = temp;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d  ", arr[i]);
//	}
//}



//#include <stdio.h>
//
//#define MAXN 10
//typedef float ElementType;
//
//ElementType Median(ElementType A[], int N);
//
//int main()
//{
//    ElementType A[MAXN];
//    int N, i;
//
//    scanf("%d", &N);
//    for (i = 0; i < N; i++)
//        scanf("%f", &A[i]);
//    printf("%.2f\n", Median(A, N));
//
//    return 0;
//}
//
//
//ElementType Median(ElementType A[], int N)
//{
//    int i = 0;
//    int gap = N / 2;
//    while (gap > 0)
//    {
//        for (i = 0; i < (N - gap); i++)
//        {
//            int end = i;
//            
//            while (end >= 0)
//            {
//                if (A[end] > A[end + gap])
//                {
//                    ElementType temp = A[end + gap];
//                    A[end + gap] = A[end];
//                    A[end] = temp;
//                    end -= gap;
//                }
//                else
//                    break;
//            }
//        }
//        gap /= 2;
//    }
//
//    if (N % 2 == 0)
//        return A[(N + 1) / 2];
//    else
//        return A[N / 2];
//}



//#include <stdio.h>
//
//int even(int n);
//
//int main()
//{
//    int n;
//
//    scanf("%d", &n);
//    if (even(n))
//        printf("%d is even.\n", n);
//    else
//        printf("%d is odd.\n", n);
//
//    return 0;
//}
//
//
//int even(int n)
//{
//    if (n < 0)
//        n = -n;
//    if (n % 2 == 0)
//        return 1;
//    else
//        return 0;
//}



//#include<stdio.h>
//
//int main()
//{
//	double input = 0.0;
//	scanf("%lf", &input);
//	input /= 30.48;
//	double temp = input;
//	temp = input - (int)input;
//	temp *= 12;
//	printf("%d %d", (int)input, (int)temp);
//}


#include<stdio.h>

int main()
{
	int time = 0;

}