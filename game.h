#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 3
#define COL 3

void init(int arr[ROW][COL], int row, int col);//��ʼ������
void printborad(int arr[ROW][COL], int row, int col);//��ӡ���̺�����
void playermove(int arr[ROW][COL], int row, int col);//����ƶ�
void computermove(int arr[ROW][COL], int row, int col);//�����ƶ�
int checkwin(int arr[ROW][COL], int row, int col);//�����Ϸ�Ƿ����
void game();//��Ϸ������