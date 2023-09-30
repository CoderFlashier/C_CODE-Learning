#define _CRT_SECURE_NO_WARNINGS
#include "game.h"


void start()
{
	system("cls");
	Sleep(500);
	printf("**************************\n");
	Sleep(500);
	printf("****      1.start    *****\n");
	Sleep(500);
	printf("****      0.exit     *****\n");
	Sleep(500);
	printf("**************************\n");
	Sleep(500);
}

void game()
{
	char board[ROW][COL] = { 0 };
	InitBoard(board,ROW,COL);//初始化棋盘
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		PlayerMove(board, 3, COL);
		DisplayBoard(board, ROW, COL);
		char ret = IsWin(board, ROW, COL);
		if (ret == '#')
		{
			printf("电脑获胜");
			break;
		}
		if (ret == '*')
		{
			printf("玩家获胜");
			break;
		}
		if (ret == 'Q')
		{
			printf("平局");
			break;
		}
		
		Sleep(500);
		
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret == '#')
		{
			printf("电脑获胜\n");
			break;
		}
		if (ret == '*')
		{
			printf("玩家获胜\n");
			break;
		}
		if (ret == 'Q')
		{
			printf("平局\n");
			break;
		}
	}
	Sleep(3000);
}

int main()
{
	srand((unsigned int )time(NULL));//利用时间戳设置随机数生成起点
	

	int chose = 0;
	do 
	{
		start();//开始菜单
		scanf("%d", &chose);
		switch (chose)
		{
		case 1:
			game();
			break;
		case 0:
			printf("exit");
			Sleep(3000);
			break;
		default:
			printf("error");
			break;
		}
	} while (chose);
		
	return 0;
}