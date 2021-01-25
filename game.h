#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 3
#define COL 3

void init(int arr[ROW][COL], int row, int col);//初始化数组
void printborad(int arr[ROW][COL], int row, int col);//打印棋盘和棋子
void playermove(int arr[ROW][COL], int row, int col);//玩家移动
void computermove(int arr[ROW][COL], int row, int col);//电脑移动
int checkwin(int arr[ROW][COL], int row, int col);//检查游戏是否结束
void game();//游戏主函数