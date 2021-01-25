#define  _CRT_SECURE_NO_WARNINGS	
#include"game.h"
void menu()
{
	printf("************************\n");
	printf("******   1.play   ******\n");
	printf("******   0.exit   ******\n");
	printf("************************\n");
	printf("PLease input 1/0 :  ");
}
void init(char arr[ROWS][COLS],int rows,int cols,char ch)
{
	int i = 0;
	for (; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = ch;
		}
	}



}
void printboard(char arr[ROWS][COLS], int row, int col)
{
	int i = 1;
	for(i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	
	for (i=1; i <=row; i++)
	{
		printf("%d ",i);
		int j = 1;		
		for (j=1; j <=col; j++)
		{
			
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}
}
void setmine(char arr1[ROWS][COLS],char arr2[ROWS][COLS],int row, int col,int minenum)
{
	int x, y,i;
	printf("How many mines you want to choose,please input (mine number is form 1 to 80): ");
	scanf("%d",&minenum);
	for (i = 0; i < minenum; i++)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;
		arr1[x][y] = '1';
	}
	printboard(arr2, ROW, COL);
}
void findmine(char arr1[ROWS][COLS],char arr2[ROWS][COLS],int row, int col)
{
	int x, y;
	while (1)
	{
		printf("Please input you coordinate : ");
		scanf("%d%d",&x,&y);
		if (arr1[x][y] == '0')
		{
			int i = 0; int j = 0;char ch = '0';
			for (i = x - 2; i < x + 1; i++)
			{
				for (j = y - 2; j < y + 1; j++)
				{
					if (arr1[x][y] == '1')
					{
						ch+=1;
					}
				}
			}
			arr2[x][y] = ch;
			printboard(arr2,ROW,COL);

		}
		else
		{
			printf("You die\n");
			printboard(arr1, ROW, COL);
			break;
		}
			
	}
}
void game()
{
	char arr1[ROWS][COLS];
	char arr2[ROWS][COLS];
	init(arr1, ROWS, COLS, '0');
	init(arr2, ROWS, COLS, '*');	
	int minenum = 0;
	setmine(arr1,arr2,ROW,COL,minenum);
	printboard(arr1, ROW, COL);
	printboard(arr2, ROW, COL);
	findmine(arr1,arr2, ROW, COL);






}
