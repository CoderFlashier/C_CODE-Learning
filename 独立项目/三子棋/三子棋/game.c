#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	
	for (; i < row; i++)
	{
		int j = 0;
		for (; j < col; j++)
		{
			board[i][j] = ' ';//把数组的内容全部换成空格
		}
	}
}


void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (; i < row; i++)//打印分割线
	{
		int j = 0;
		for (; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			int k = 0;
			for (; k < col; k++)
			{
				printf("---");
				if (k < col - 1)
				{
					printf("|");
				}
			}
		}
		printf("\n");
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	
	printf("玩家行动，请输入坐标=>");
	
	while (1)
	{
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] != ' ')//检测是否被占用
			{
				printf("该坐标被占用，请重新输入=>");
			}
			else 
			{
				board[x - 1][y - 1] = '*';
				break;
			}
		}
		else
		{
			printf("坐标非法，请重新输入=>");
		}
	}
}


void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑下棋=>\n");

	int x = 0;
	int y = 0;

	while (1)
	{
		x = rand() % row;//输出0~2
		y = rand() % col;
		if (board[x][y] == ' ')//检测是否被占用
		{
			board[x][y] = '#';
			break;
		}
	}
	
}


char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (; i < row; i++)//判断行
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			if (board[i][1] == '#')
			{
				return '#';
			}
			else
			{
				return '*';
			}
		}
	}

	int j = 0;
	for (; j < col; j++)//判断列
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
		{
			if (board[1][j] == '#')
			{
				return '#';
			}
			else
			{
				return '*';
			}
		}
	}

	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')//判断左斜
	{
		if (board[1][1] == '#')
		{
			return '#';
		}
		else
		{
			return '*';
		}
	}
	
	else if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')//判断右斜
	{
		if (board[2][2] == '#')
		{
			return '#';
		}
		else
		{
			return '*';
		}
	}

	int x = 0;
	for (; x < row; x++)//判断否继续
	{
		int y = 0;
		for (; y < col; y++)
		{
			if (board[x][y] == ' ')
			{
				return 'C';
			}
		}
	}

	return 'Q';//平局
}