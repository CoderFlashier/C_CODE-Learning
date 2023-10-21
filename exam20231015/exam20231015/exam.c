#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int arr[11000] = { 0 };
//	for (; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int j = 0;
//	int k = 0;
//	int count = 0;
//	for (; k <= n; k++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (k == arr[j])
//			{
//				break;
//			}
//			count++;
//		}
//		if (count == n)
//		{
//			printf("%d", k);
//		}
//		else
//			count = 0;
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[1000] = { 0 };
//	gets(arr);
//	int i = 0;
//	int sz = 0;
//	sz = strlen(arr);
//	int up = 0;
//	int down = 0;
//	int space = 0;
//	int num = 0;
//	int others = 0;
//	for (; i < sz; i++)
//	{
//		if (arr[i] >= 65 && arr[i] <= 90)
//		{
//			up++;
//		}
//		else if (arr[i] >= 97 && arr[i] <= 122)
//		{
//			down++;
//		}
//		else if (arr[i] >= 48 && arr[i] <= 57)
//		{
//			num++;
//		}
//		else if (arr[i] == ' ')
//		{
//			space++;
//		}
//		else
//		{
//			others++;
//		}
//	}
//	printf("%d %d %d %d %d", up, down,space, num, others);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int Bo = 0;
//	int Ex = 0;
//	scanf("%d %d", &Bo, &Ex);
//	int count = 0;
//	count += Bo;
//	
//	while (Bo >= Ex)
//	{
//		int exchange = 0;
//		exchange = Bo / Ex;
//		Bo = Bo % Ex + exchange;
//		count += exchange;
//	}
//	printf("%d", count);
//	return 0;
//}


//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double up = 0.0;
//	double down = 0.0;
//	double length = 0.0;
//	scanf("%lf %lf %lf", &down, &up, &length);
//	double count = 0.0;
//	count = down;
//	double sum = 0.0;
//	while (count < (up - length))
//	{
//		count += length;
//		sum += pow(count, 2) * length;
//	}
//	printf("%.2lf", sum);//第二组数据会多出0.01
//	return 0;
//}



//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	float up = 0.0f;
//	float down = 0.0f;
//	float length = 0.0f;
//	scanf("%f %f %f", &down, &up, &length);
//	float count = 0.0;
//	count = down;
//	float sum = 0.0;
//	while (count < up)
//	{
//		count += length;
//		sum += pow(count, 2) * length;
//	}
//	printf("%f", sum);//第二组数据会多出0.01
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int arr[1100] = { 0 };
//	for (; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int count = 0;
//	while (1)
//	{
//		int j = 0;
//		for (; j < n; j++)
//		{
//			if (j > 0)
//			{
//				if (arr[j] < arr[j - 1])
//				{
//					int ex = 0;
//					ex = arr[j - 1];
//					arr[j - 1] = arr[j];
//					arr[j] = ex;
//					count++;
//				}
//			}
//		}
//		int l = 0;
//		int count2 = 0;
//		for (; l < n - 1; l++)
//		{
//			
//			if (arr[l] < arr[l + 1])
//			{
//				count2++;
//			}
//			
//		}
//		if (count2 == n - 1)
//		{
//			break;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}


//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int max = 0;
//	max = pow(n, 2);
//	int arr[50][50] = { 0 };
//	int x = 0;
//	int y = 1;
//	int i = 0;
//	int count = 0;
//	int mark = 1;
//	int mark_i = n - 1;
//	int count2 = -1;
//	arr[0][0] = 1;
//	for (i = 2; i <= max; i++)
//	{
//		arr[x][y] = i;
//		count++;
//		if (count2 < 2)
//		{
//			if (count == mark_i)
//			{
//				mark++;
//				count2++;
//				count = 0;
//			}
//		}
//		else
//		{
//			if (count == mark_i - 1)
//			{
//				mark++;
//				count2++;
//				count = 0;
//			}
//		}
//		if (mark % 4 == 1)
//		{
//			y++;
//		}
//		if (mark %4 == 2)
//		{
//			x++;
//		}
//		if (mark % 4 == 3)
//		{
//			y--;
//		}
//		if (mark % 4 == 0)
//		{
//			x--;
//		}
//		if (count2 == 2)
//		{
//			mark_i -= 1;
//			count2 = 0;
//		}
//	}
//	x = 0;
//	y = 0;
//	for (; x < n; x++)
//	{
//		y = 0;
//		for (; y < n; y++)
//		{
//			printf("%d", arr[x][y]);
//			if (y + 1 < n)
//			{
//				printf(" ");
//			}
//		}
//		if (x + 1 < n)
//		{
//			printf("\n");
//		}
//	}
//	return 0;
//}



//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[110][100] = { 0 };
//	char arr_mark[10] = { 0 };
//	int i = 0;
//	int count = 0;
//	strcpy(arr[0], "http://www.acm.org/");
//	while (1)
//	{
//		scanf("%s", arr_mark);
//		int cmp = 0;
//		if ((strcmp(arr_mark, "VISIT")) == 0)
//		{
//			i++;
//			scanf("%s", arr[i]);
//			printf("%s\n", arr[i]);
//			count = i;
//			
//		}
//		if ((strcmp(arr_mark, "BACK")) == 0)
//		{
//			if (i > 0)
//			{
//				i--;
//				printf("%s\n", arr[i]);
//			}
//			else
//			{
//				printf("Ignored\n");
//			}
//		}
//		if ((strcmp(arr_mark, "FORWARD")) == 0)
//		{
//			if (i < count)
//			{
//				i++;
//				printf("%s\n", arr[i]);
//			}
//			else
//			{
//				printf("Ignored\n");
//			}
//		}
//		if ((strcmp(arr_mark, "QUIT")) == 0)
//		{
//			break;
//		}
//	}
//	return 0;
//}



#include<stdio.h>
int main()
{
	char arr[100] = "0";
	gets(arr);
	printf("%s", arr);
	return 0;
}