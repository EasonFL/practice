#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
int main()
{
	int year, month;
	while ((scanf("%d%d", &year, &month)) != EOF)
	{
		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
		{
			if (month % 2 == 0 && month != 2)
			{
				if (month < 7)
				{
					printf("30\n");
				}
				else
					printf("31");
			}
			else if (month % 2 == 1)
			{
				if (month < 8)
					printf("31\n");
				else
					printf("30\n");
			}
			else
				printf("29\n");
		}
		else
		{
			if (month % 2 == 0)
			{
				if (month < 7)
				{
					printf("30\n");
				}
				else
					printf("31");
			}
			else if (month % 2 == 1)
			{
				if (month < 8)
					printf("31\n");
				else
					printf("30\n");
			}

		}


	}
}