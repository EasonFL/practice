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
}//������������ʼ������
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
				printf("|");//�ԡ� %c |��Ϊһ�飬�������һ��ġ�|������ӡ
		}
		printf("\n");
		if (i != row - 1)
			printf("-----------\n");//���һ��ķָ��߲���ӡ
	}

}
void playermove(int arr[ROW][COL], int row, int col)
{
	printf("Player move,please input your coordinate\n");
	int x, y;
	printf("Please input : ");
	scanf("%d%d", &x, &y);
	arr[x - 1][y - 1] = '*';//���ǵ���һὫ����ĵ�һ��Ԫ�ؿ���[1][1],����д��x-1,y-1
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
		//���������x,y
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
	int win = 3;//3�����ȳ�ʼ��Ϊƽ����Ҫ�����֣�Ȼ���ٸ���������ж��������޸�
	int ret = 2;
	int i = 0;
	for (; i < ROW; i++)
	{
		if (arr[i][0] == arr[i][1] && arr[i][0] == arr[i][2] && arr[i][0] != ' ')
		{
			if (arr[i][0] == '*')
			{
				return win = 1;//���Ӯ
			}
			else
				return win = 2;//����Ӯ
		}
	}//���ÿһ���Ƿ�����Ӯ������
	for (i = 0; i < COL; i++)
	{
		if (arr[0][i] == arr[1][i] && arr[0][i] == arr[2][i] && arr[0][i] != ' ')
		{
			if (arr[0][i] == '*')
			{
				return win = 1;//���Ӯ
			}
			else
				return win = 2;//����Ӯ
		}
	}//���ÿһ���Ƿ�����
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
	//���б���ϵ������Ƿ�����
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
	//���б���µ������Ƿ�����
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			if (arr[i][j] == ' ');
			return win = 0;
		}
	}
	//����Ƿ���Ҫ������Ϸ��������Ĵ��붼�����㣬��Ϊ����ÿ���жϴ��붼����return��������㣬�͵�������δ��롣����������ֻҪ����" "���ͼ�����Ϸ
	return win;

}
void game()
{
	int arr[ROW][COL];
	int num = 0;
	init(arr, ROW, COL);//��ʼ������
	printborad(arr, ROW, COL);//��ӡ���̺�����
	do
	{
		playermove(arr, ROW, COL);//����ƶ�
		computermove(arr, ROW, COL);//�����ƶ�
		num = checkwin(arr, ROW, COL);//����Ƿ������Ϸ
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