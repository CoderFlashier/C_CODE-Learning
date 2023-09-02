#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	printf("printf(\"Hello World!\\n\");\n");//利用转义字符
//	printf("cout<<\"Hello World!\"<<endl;");
//	return 0;
//}

//int main()
//{
//	int arr[4] = { 0 };
//	int i = 0;
//	while (i < 4)
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//
//	int max = arr[0];
//	i = 1;
//	while (i < 4)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//		i++;
//	}
//	printf("%d", max);
//	return 0;
//}
//输出输入的数中最大的那个


//int main()
//{
//	float a = 0.0f;
//	scanf("%f", &a);
//	float b = 3.1415926;
//
//	float c = 4 / 3.0 * b * a * a * a;//除法两端只要有一个浮点数，就是输出浮点数结果
//	printf("%.3f", c);
//	return 0;
//}
//给出半径，求球体体积



int main()
{
	int arr[2] = { 0 };//输入整数体重、身高（厘米）
	int i = 0;
	while (i < 2)
	{
		scanf("%d", &arr[i]);
		i++;
	}

	float b = 0.0f;
	float c = arr[1] / 100.0;//100.0的.0不能少
	b = arr[0] / c / c;
	printf("%.2f", b);
	return 0;
}
//输出BMI值