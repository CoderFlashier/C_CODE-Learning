#define _CRT_SECURE_NO_WARNINGS

#include"game.h"

void menu()
{
	printf("**************************\n");
	printf("*****    1.start     *****\n");
	printf("*****    0.exit      *****\n");
	printf("**************************\n");
	printf("请选择=>");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');//创建并初始化两个数组
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);

	//SetMine(mine, ROW, COL);//设置雷区
	//DisplayBoard(mine, ROW, COL);

	FindMine(show, mine, ROW, COL);//开始扫雷
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//设置随机数生成的种子

	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//printf("game\n");
			game();
			break;
		case 0:
			printf("exit\n");
			break;
		default:
			printf("error\n");
			break;
		}
	} while (input);
	return 0;
}