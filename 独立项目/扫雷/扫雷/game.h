#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define EAZY_COUNT 10

void InitBoard(char arr[ROWS][COLS], int rows, int cols, char set);//初始化棋盘
void DisplayBoard(char arr[ROWS][COLS], int rows, int cols);//打印棋盘

void SetMine(char arr[ROWS][COLS], int row, int col, int a, int b);//设置雷区

void FindMine(char show[ROWS][COLS], char mine[ROWS][COLS], int row, int cow);//扫雷
int MineCount(char mine[ROWS][COLS], int x, int y);//计算雷数
void AutoExc(char show[ROWS][COLS], char mine[ROWS][COLS], int row, int col, int x, int y);//自动排除