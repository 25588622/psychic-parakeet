#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<time.h>

#define ROW 3
#define COL 3

void InitBoard(char board[ROW][COL], int row, int col);
void ShowBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
char IsWin(char board[ROW][COL], int row, int col);
int Isfull(char board[ROW][COL], int row, int col);


//玩家赢：*
//电脑赢：#
//继续：C
//平局：Q