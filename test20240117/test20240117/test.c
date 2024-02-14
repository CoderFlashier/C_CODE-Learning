#define _CRT_SECURE_NO_WARNINGS


//#include<stdio.h>

//int count_num_of_1(unsigned int n)
//{
//	int ret = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//			ret++;
//		n /= 2;
//	}
//	return ret;
//}

//int count_num_of_1(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		int i = 0;
//		if ((n & 1) == 1)
//			count++;
//		i++;
//		n = n >> 1;
//	}
//	return count;
//}


//int count_num_of_1(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int count = 0;
//	count = count_num_of_1((unsigned int)n);
//	printf("%d", count);
//	return 0;
//}


//#include<stdio.h>
//
//int count_dif_num(unsigned int a, unsigned int b)
//{
//	unsigned int c = 0;
//	int count = 0; 
//	c = a ^ b;
//	while (c)
//	{
//		c = c & (c - 1);
//		count++;
//	}
//	return count;
//}
//
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int count = 0;
//	count = count_dif_num((unsigned int)a, (unsigned int)b);
//	printf("%d", count);
//	return 0;
//}



#include<stdio.h>

void print_odd_even(unsigned int input)
{
	unsigned int odd[16] = { 0 };
	unsigned int even[16] = { 0 };
	int mark = 1;
	int odd_mark = 0;
	int even_mark = 0;
	while (input)
	{
		if (mark % 2 == 1)
		{
			odd[odd_mark] = (input & 1);
			odd_mark++;
		}
		else
		{
			even[even_mark] = (input & 1);
			even_mark++;
		}
		mark++;
		input = (input >> 1);
	}

	int i = 0;
	printf("odd:");
	for (i = 15; i >= 0; i--)
	{
		printf("%d", odd[i]);
	}
	printf("\n");
	printf("even:");
	for (i = 15; i >= 0; i--)
	{
		printf("%d", even[i]);
	}
}


int main()
{
	int input = 0;
	scanf("%d", &input);
	print_odd_even((unsigned int)input);
	return 0;
}