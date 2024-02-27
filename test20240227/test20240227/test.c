#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}
////死循环



//#include <stdio.h>
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//
//	c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}



////插入排序
//#include<stdio.h>
//
//int main()
//{
//    int arr[10] = { 1, 45, 78, 488, 23, 56, 45, 85, 15, 23 };
//    int i = 0;
//    for (i = 0; i < 9; i++)
//    {
//        int end_mark = i;
//        int num_next = arr[end_mark + 1];
//        while (end_mark >= 0)
//        {
//            if (arr[end_mark] < num_next || arr[end_mark] == num_next)
//            {
//                arr[end_mark + 1] = num_next;
//                break;
//            }
//            else
//            {
//                arr[end_mark + 1] = arr[end_mark];
//                arr[end_mark] = num_next;
//                end_mark--;
//                //num_next = arr[end_mark + 1];
//                //这里不用加这句
//                //因为当最后两个数实现交换的时候（无论交换几次），num_next里面存的实际上还是需要被排序的那个数字
//            }
//        }
//    }
//
//    for (i = 0; i < 10; i++)
//    {
//        printf("%d  ", arr[i]);
//    }
//}



//希尔排序
#include<stdio.h>

//int main()
//{
//    int arr[10] = { 1, 45, 78, 23, 488, 56, 45, 85, 15, 23 };
//    int i = 0;
//    int gap = 10 / 2;
//    while (gap >= 1)
//    {
//        for (i = 0; i < (10 - gap); i++)
//        {
//            int end = i;
//            int temp = arr[end + gap];
//            while (end >= 0)
//            {
//                if (arr[end] > arr[end + gap])
//                {
//                    arr[end + gap] = arr[end];
//                    arr[end] = temp;
//                    end -= gap;
//                }
//                else
//                    break;
//            }
//        }
//        gap /= 2;
//    }
//
//    for (i = 0; i < 10; i++)
//    {
//        printf("%d  ", arr[i]);
//    }
//}



#include <stdio.h>

void shell_sort(int arr[], int len) 
{
    int gap, i, j;
    int temp;
    for (gap = len >> 1; gap > 0; gap >>= 1)
        for (i = gap; i < len; i++) 
        {
            temp = arr[i];
            for (j = i - gap; j >= 0 && arr[j] > temp; j -= gap)
                arr[j + gap] = arr[j];
            arr[j + gap] = temp;
        }
}


int main()
{
    int arr[10] = { 1, 45, 78, 23, 488, 56, 45, 85, 15, 23 };
    shell_sort(arr, 10);
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

