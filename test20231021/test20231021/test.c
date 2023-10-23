#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int arr[10] = { 0 };//数组
//	
//	int* pa = &a;
//	int* pb = &b;
//	int* pc = &c;
//	int* parr[10] = {&a,&b,&c};//指针数组
//
//	int i = 0;
//	for (; i < 3; i++)
//	{
//		printf("%d ", *(parr[i]));
//	}
//	return 0;
//}


//int main()
//{
//	int* p;
//	*p = 5;
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int i = 0;
//	int* p = arr;
//	for (i = 1; i <= 10; i++)
//	{
//		*(p++) = 0;
//	}
//	return 0;
//}

//int* test(int x)
//{
//	int b = x;
//	return &b;
//}
//
//
//int main()
//{
//	int a = 10;
//	int* p = test(a);
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	while (*p < &arr[9])
//	{
//		(*p) = 1;
//		*p++;
//	}
//	int i = 0;
//	for (; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//	int* p = &a;//此处p为一级指针
//	int** pp = &p;//此处pp为二级指针
//	return 0;
//}


//int main()
//{
//	int arr1[5] = { 0 };
//	int arr2[5] = { 0 };
//	int arr3[5] = { 0 };
//
//	int* arrp[4] = { &arr1,&arr2,&arr3 };
//	int i = 0;
//	for (; i < 4; i++)
//	{
//		int j = 0;
//		for (; j < 5; j++)
//		{
//			printf("%d ", arrp[i][j]);
//		}
//	}
//	return 0;
//}


#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[20][20] = { 0 };
    int a = 0, b = n - 1, c = 0, d = n - 1;
    int num = 1;
    while (a <= b && c <= d) 
    {
        // 向右填充
        for (int i = a; i <= b; ++i) 
        {
            arr[c][i] = num++;
        }
        ++c;

        // 向下填充
        for (int i = c; i <= d; ++i) 
        {
            arr[i][b] = num++;
        }
        --b;

        // 向左填充
        if (a <= b) 
        {
            for (int i = b; i >= a; --i)
            {
                arr[d][i] = num++;
            }
            --d;
        }

        // 向上填充
        if (c <= d) {
            for (int i = d; i >= c; --i) 
            {
                arr[i][a] = num++;
            }
            ++a;
        }
    }

    for (int i = 0; i < n; ++i) 
    {
        for (int j = 0; j < n; ++j) 
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}