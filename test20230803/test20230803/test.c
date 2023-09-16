#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//    printf("加入比特\n");
//    int line = 0;
//    while (line <= 20000)
//    {
//        line++;
//        printf("我要继续努力敲代码\n");
//    }
//    if (line > 20000)
//        printf("好offer\n");
//    return 0;
//}
//这是比特的代码


//int main()
//{
//	int line = 0;
//	printf("要写代码吗\n");
//	while (line <= 20000)
//		{
//			line++;
//			printf("开干%d\n", line);
//		}
//		if (line >= 20000)
//		{
//			printf("写好辣");
//		}
//	return 0;
//}
//可以跑

int main()
{
	char input = 'y';
	int line = 0;

	printf("写代码吗？（y/n）\n");
	printf("你的选择是=>");
	scanf("%c", &input);

	if (input == 'y')//这个地方一定要两个=，不然输入y或者n都是到while循环
	{
		while (line <= 10)
		{
			printf("写%d\n", line);
			line++;
		}
		if (line >= 10)
		{
			printf("写完辣");
		}
	}
	else
	{
		printf("那就回去卖番薯");
	}
	return 0;
}