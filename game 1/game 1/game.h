#define ROW 3
#define COL 3

#include<stdio.h>
#include<stdlib.h>//Ϊsrand����ʹ��
#include<time.h>//Ϊtime����ʹ��

//����
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
char IsWin(char board[ROW][COL], int row, int col);

//������Ϸ״̬
//���Ӯ - '*'
//����Ӯ - '#'
//ƽ�� - 'Q'
//���� - 'C'