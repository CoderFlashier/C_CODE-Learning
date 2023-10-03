#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//int main()
//{
//	int arr[8] = { 0 };
//	int i = 0;
//	for (; i < 8; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int input = 0;
//	scanf("%d", &input);
//	for (i = 0; i < 8; i++)
//	{
//		if (input == arr[i])
//		{
//			printf("%d", i + 1);
//			break;
//		}
//		else
//		{
//			printf("0");
//			break;
//		}
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	printf("{");
//	int i = 0;
//	for (i = 1; i <= input; i++)
//	{
//		long long output = 0;
//		output = i * i;
//		printf("%d:%lld", i, output);
//		if (i < input)
//		{
//			printf("£¬");
//		}
//	}
//	printf("}");
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	int count = 0;
//	while (1)
//	{
//		if (input % 2 == 0)
//		{
//			input = input / 2;
//			count++;
//		}
//		else if (input % 2 == 1&& input != 1)
//		{
//			input = (input * 3 + 1) / 2;
//			count++;
//		}
//		else
//		{
//			printf("%d", count);
//			break;
//		}
//
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	if (input % 4 == 0 && input % 100 != 0)
//	{
//		printf("YES");
//	}
//	else if (input % 400 == 0)
//	{
//		printf("YES");
//	}
//	else
//	{
//		printf("NO");
//	}
//	return 0;
//}



#include<stdio.h>
void fib(int input)
{
	int a = 1;
	int b = 0;
	int c = 0;
	if (input == 1)
	{
		printf("%d", a);
	}
	else
	{
		printf("%d", a);
		printf(",");
		while (1)
		{
			c = a + b;
			if (c <= input)
			{
				printf("%d", c);
			}
			else
			{
				break;
			}
			b = a;
			a = c;
			if (a + b <= input)
			{
				printf(",");
			}
		}
	}
}
int main()
{
	int input = 0;
	scanf("%d", &input);
	fib(input);
	return 0;
}