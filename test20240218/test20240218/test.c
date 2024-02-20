#define _CRT_SECURE_NO_WARNINGS


//打印菱形阵列
//#include <stdio.h>
//
//int main()
//{
//	int left = 0;
//	int right = 0;
//	int max = 0;
//	int mark = 1;
//	scanf("%d", &max);
//	left = max / 2;
//	right = (max / 2) + 1;
//	while (left)
//	{
//		int i = 0;
//		for (i = 0; i < left; i++)
//			printf(" ");
//		for (; i < right; i++)
//			printf("*");
//		if (right != max)
//			printf("\n");
//		right++;
//		left--;
//	}
//
//	//printf("\n");
//	while (right >= left)
//	{
//		int i = 0;
//		for (i = 0; i < left; i++)
//			printf(" ");
//		for (; i < right; i++)
//			printf("*");
//		if (right != left)
//			printf("\n");
//		right--;
//		left++;
//	}
//	
//	return 0;
//}


//买汽水，1元一瓶，2个空瓶换一瓶
#include <stdio.h>


int main()
{
	int money = 0;
	scanf("%d", &money);
	int num = money;
	int count = num;
	
	while (num > 1)
	{
		//int temp = num % 2;
		count += num / 2;
		num = (num / 2) + (num % 2);
	}
	printf("%d", count);
	return 0;
}