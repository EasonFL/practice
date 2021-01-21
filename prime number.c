#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
int prime(int i)
{
	int j = 2;
	int flag = 0;
	for (; j < i; j++)
	{
		if (0 == i%j)
		{
			flag = 1;
			break;
		}
	}
	return flag;

}

int main()
{
	int i = 100;
	for (; i <= 200; i++)
	{
		int m = prime(i);
		if (m == 0)
		{
			printf("%d ",i);

		}
       
	}




}