#define  _CRT_SECURE_NO_WARNINGS	
#include  "game.h"
void menu()
{
	printf("***********************\n");
	printf("******  1.play  *******\n");
	printf("******  0.exit  *******\n");
	printf("***********************\n");
}//��ӡ�˵�
int main()
{
	int input;
	srand((unsigned int)time(NULL));//����һ���������㣬Ϊ�������������׼��
	do
	{
		menu();
		printf("Please input 1/0\n");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
				game();//��Ϸ������
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