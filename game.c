#define  _CRT_SECURE_NO_WARNINGS	
#include  "game.h"
void init(int arr[ROW][COL], int row, int col)
{
	int i = 0;
	for (; i < ROW; i++)
	{
		int j = 0;
		for (; j < COL; j++)
		{
			arr[i][j] = ' ';
		}
	}
}//遍历数组来初始化数组
void printborad(int arr[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", arr[i][j]);
			if (j != col - 1)
				printf("|");//以“ %c |”为一组，但是最后一组的“|”不打印
		}
		printf("\n");
		if (i != row - 1)
			printf("-----------\n");//最后一组的分割线不打印
	}

}
void playermove(int arr[ROW][COL], int row, int col)
{
	printf("Player move,please input your coordinate\n");
	int x, y;
	printf("Please input : ");
	scanf("%d%d", &x, &y);
	arr[x - 1][y - 1] = '*';//考虑到玩家会将数组的第一个元素看成[1][1],所以写成x-1,y-1
	printborad(arr, ROW, COL);
}
void computermove(int arr[ROW][COL], int row, int col)
{
	int x, y;
	printf("Computer move :\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		//产生随机数x,y
		if (arr[x][y] == ' ')
		{
			arr[x][y] = '#';
			break;
		}
	}
	printborad(arr, ROW, COL);

}
int checkwin(int arr[ROW][COL], int row, int col)
{
	int win = 3;//3可以先初始化为平局需要的数字，然后再根据下面的判断条件来修改
	int ret = 2;
	int i = 0;
	for (; i < ROW; i++)
	{
		if (arr[i][0] == arr[i][1] && arr[i][0] == arr[i][2] && arr[i][0] != ' ')
		{
			if (arr[i][0] == '*')
			{
				return win = 1;//玩家赢
			}
			else
				return win = 2;//电脑赢
		}
	}//检查每一行是否满足赢得条件
	for (i = 0; i < COL; i++)
	{
		if (arr[0][i] == arr[1][i] && arr[0][i] == arr[2][i] && arr[0][i] != ' ')
		{
			if (arr[0][i] == '*')
			{
				return win = 1;//玩家赢
			}
			else
				return win = 2;//电脑赢
		}
	}//检查每一列是否满足
	for (i = 0; i<ROW - 1 ; i++)
	{

		if (arr[i][i] == arr[i + 1][i + 1])
		{
			ret = 1;
		}

	}
	if (arr[0][0]==' ')
	{
		ret = 0;
	}
	if (1== ret)
	{
		if (arr[i][i] == '*')
			return win = 1;
		else if (arr[i][i] == '#')
			return win = 2;
	}
	//检查斜向上的那列是否满足
	int j = 0;
	for (i = ROW - 1, j = 0; i >= 1 &&j <COL - 1; i--, j++)
	{

		if (arr[i][j] != arr[i - 1][j + 1])
		{
			ret = 1;
			break;
		}

	}
	if (arr[ROW][0] == ' ')
	{
		ret = 0;
	}
	if (2 == ret)
	{
		if (arr[ROW/2][COL/2] == '*')
			return win = 1;
		else if (arr[ROW/2][COL/2] == '#')
			return win = 2;
	}
	//检查斜向下的那列是否满足
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			if (arr[i][j] == ' ');
			return win = 0;
		}
	}
	//检查是否需要继续游戏，即上面的代码都不满足，因为上面每个判断代码都含有return，如果满足，就到不了这段代码。所以数组中只要含有" "，就继续游戏
	return win;

}
void game()
{
	int arr[ROW][COL];
	int num = 0;
	init(arr, ROW, COL);//初始化棋子
	printborad(arr, ROW, COL);//打印棋盘和棋子
	do
	{
		playermove(arr, ROW, COL);//玩家移动
		computermove(arr, ROW, COL);//电脑移动
		num = checkwin(arr, ROW, COL);//检查是否完成游戏
	} while (num == 0);
	switch (num)
	{
	case 1:
		printf("You win\n");
		printborad(arr, ROW, COL);
		break;
	case 2:
		printf("You lose\n");
		printborad(arr, ROW, COL);
		break;
	case 3:
		printf("it ends in a draw\n");
		printborad(arr, ROW, COL);

	}

}