#define  _CRT_SECURE_NO_WARNINGS	
#include"game.h"
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		scanf("%d",&input);
		switch (input)
		{
			case 1:
		    game();	
			break;
			case 0:
				printf("Exit game\n");
			default:
				printf("Input error,please input again\n ");
		}
		

	} while (input);
        

	
	
	


}