#pragma once
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<windows.h>


//统一定义行和列，方便修改
#define ROW  3//定义行,这里定义常量不能加 = 和 ；
#define COL  3//定义列


//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col);
//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);

//玩家行动
void PlayerMove(char board[ROW][COL], int row, int col);
//电脑行动
//找没有棋的位置随机下
void ComputerMove(char board[ROW][COL], int row, int col);

//判断输赢
char IsWin(char board[ROW][COL], int row, int col);
//返回#，则电脑胜利
//返回*，玩家胜利
//返回C，游戏继续
//返回Q，平局