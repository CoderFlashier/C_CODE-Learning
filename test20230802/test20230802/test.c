#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int num1 = 0;//初始化
//	int num2 = 0;
//	//输入两个整数
//	scanf("%d %d",&num1,&num2);
//		//求和
//		int sum = num1 + num2;
//	printf("%d\n", sum);
//	return 0;
//}\

//
//int main()
//{
//	char arr1[] =  "abcdef" ;
//	char arr2[] = { 'a', 'b', 'c','d','e','f','\0'};
//	
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	printf("\\wdnmd");
//	return 0;
//}

//int main()
//{
//	char input = 'y';
//	printf("加入深大\n");
//	printf("是否好好读书（Y/N）\n");
//	scanf（"%c", &input）;
//	if（input == 'Y'）
//	{
//		printf("前程似锦\n");
//	}
//	else
//	{
//		printf("卖红薯\n")
//		}
//	return 0;写废了


//int main()
//{
//	int input = 0;
//	printf("加入深大\n");
//	printf("是否好好读书（1/0）\n");
//	scanf("%d", &input);
//	if(input == 1)
//	{
//		printf("前程似锦\n");
//	}
//	else
//	{
//		printf("卖番薯\n");
//	}
//	return 0;
//
//}


//int main()
//{
//    int coding = 0;
//    printf("你会去敲代码吗？（选择1 or 0）:>");
//    scanf("%d", &coding);
//    if (coding == 1)
//    {
//        printf("坚持，你会有好offer\n");
//    }
//    else
//    {
//        printf("放弃，回家卖红薯\n");
//    }
//    return 0;
//比特的代码


int main()
{
	char input = 'y';//变量初始化
	printf("加入深大\n");
	printf("是否好好学习?(y/n)=>>");//提出疑问
	scanf("%c", &input);//用户回答

	if (input == 'y')//选择
	{
		printf("前程似锦");
	}
	else
	{
		printf("回家卖番薯");
	}
	return 0;
}