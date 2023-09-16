#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<windows.h>


int start(input)//创建开始菜单
{
	printf("####################\n");
	Sleep(300);//提供0.3s的停顿，提升观感
	printf("#####1、start ######\n");
	Sleep(300);
	printf("#####0、 exit ######\n"); 
	Sleep(300);
	printf("####################\n");
	Sleep(300);
	printf("请选择=>");
	
	scanf("%d", &input);//输入选择
	
	return input;//返回输入值
}

void game()
{
	int input2 = 0;
	int guess = 0;
	int ret = 0;
	
	do//先执行一次
	{
		ret = rand() % 100 + 1;//生成随机数，限制输出的随机数为1~100
		while (ret)
		{
			//printf("%d\n", ret);//用于测试
			printf("请输入猜测=>");
			scanf("%d", &guess);
			
			if (guess > ret)
			{
				printf("大了\n");
			}
			else if (guess < ret)
			{
				printf("小了\n");
			}
			else
			{
				printf("拟态棒辣，猜对了\n");
				printf("是否要再玩一次？\n1、again\nothers number、exit\n=>");
				scanf("%d", &input2);

				if (input2 == 1)
				{
					system("cls");
					break;
				}
				else
				{
					Sleep(500);
					printf("exit");
					Sleep(1000);
					break;//退出循环
				}
			}
		}
	}
	while (input2 == 1);//用于检测是否再次游玩
}

int main()
{
	srand((unsigned int)time(NULL));//srand提供种子，利用时间戳作为参数，将返回值类型由time_t强制转换为无符号整形
    int input = 0;
	
	do
	{
		input = start();
		system("cls");
		switch (input)//进行选择
		{
		case 1:
			game();
			input = 0;
			break;
		case 0:
			printf("exit");
			Sleep(500);
			break;
		default:
			printf("error\n");
			Sleep(1000);
			break;
		}
	}
	while (input);
	
	return 0;
}
//输入数字以外的东西会卡死