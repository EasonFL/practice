#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
int main()
{
	char arr[4] = { 'A', 'B', 'C', 'D' };
	int i = 0;
	int sum = 0;
	char killer;
	for (; i < 4; i++)
	{
		killer = arr[i];
		sum = (killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D');
		if (sum == 3)
		{
			printf("killer is %c\n", killer);
			return 0;
		}
	}
	printf("can't find the killer \n");

}