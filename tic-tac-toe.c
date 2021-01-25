#define  _CRT_SECURE_NO_WARNINGS	
#include  "game.h"
void menu()
{
	printf("***********************\n");
	printf("******  1.play  *******\n");
	printf("******  0.exit  *******\n");
	printf("***********************\n");
}//打印菜单
int main()
{
	int input;
	srand((unsigned int)time(NULL));//设置一个随机数起点，为电脑随机下棋做准备
	do
	{
		menu();
		printf("Please input 1/0\n");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
				game();//游戏主函数
				break;
		case 0:
			printf("Exitgame\n");
			break;
		default:
			printf("Input error,please input again\n");
			break;
		}
	} while (input);
}