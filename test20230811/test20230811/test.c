#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	
//	switch (day)
//	{
//	case 1:
//		printf("\n星期一");
//		break;//跳出switch语句 
//	case 2:
//		printf("\n星期二");
//		break;
//	case 3:
//		printf("\n星期三");
//		break;
//	case 4:
//		printf("\n星期四");
//		break;
//	case 5:
//		printf("\n星期五");
//		break;
//	case 6:
//		printf("\n星期六");
//		break;
//	case 7:
//		printf("\n星期日");
//		break;
//	}
//	return 0;
//}


//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//
//	switch (day)
//	{
//	case 1:
//		case 2:
//		case 3:
//		case 4:
//	case 5:
//		printf("\nweekday");
//		break;
//	case 6:
//	case 7:		
//		printf("\nweekend");
//		break;
//	default:
//		printf("error");
//	}
//	return 0;
//}


//int main()
//{
//	int num = 0;
//	while (num<=10)
//	{
//		printf("wdnmd%d\n", num);
//		num++;
//		if (num == 6)
//			break;
//	}
//	return 0;
//}//输出1-5



//int main()
//{
//	int num = 0;
//	while (num <= 10)
//	{
//		if (num == 6)
//			continue;
//
//		printf("wdnmd%d\n", num);
//		num++;
//	}
//	return 0;
//}//程序会卡死


//int main()
//{
//	int a = 0;
//	a = (getchar());//getchar函数得到的就是输入的字符对应的ASCII值，因此用int而不是char
//	if (a != EOF)
//	{
//		printf("wdnmd\t%c", a);
//	}
//	return 0;
//}


//
//int main()
//{
//	int a = 0;
//	while ((a=getchar()) != EOF)//用（）让元素成为一个整体
//	{
//		printf("%c", a);
//	}
//	return 0;
//}//输入什么字符，输出什么字符，输入Ctrl+Z停止程序


int main()
{
	char password[20] = { 0 };
	printf("请输入密码>");
	scanf("%s", password);//只读取\n或空格前的字符串

	//getchar();//只能读取一个字符,即清理缓冲区内的一个字符，若输入有空格，就不能完全清理

	//利用循环清理缓冲区
	int a = 0;
	while ((a = getchar()) != '\n')
	{
		;//不能漏
	}

	printf("请确认密码(Y/N)>%s\n",password);

	int ret = getchar();
	if (ret == 'Y')
	{
		printf("确认\n");
	}
	else
	{
		printf("取消\n");
	}


	return 0;
}

