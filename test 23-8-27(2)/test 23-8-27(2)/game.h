#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<time.h>

#define ROWS 11
#define COLS 11
#define ROW ROWS-2
#define COL COLS-2
#define COUNT 10

void InitBoard(char Board[ROWS][COLS], int rows, int cols, char set);
void ShowBoard(char Board[ROWS][COLS], int row, int col);
void SetBoard(char Board[ROWS][COLS], int row, int col);
void FindBoard(char InBoard[ROWS][COLS], char OutBoard[ROWS][COLS], int row, int col);
