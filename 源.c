#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
void multiplication(int a)
{
	int i = 1;
	for (; i <= a; i++)
	{
		int j = 1;
		for (; j <= a; j++)
		{
			printf("%d*%d = %d ",i,j,i*j);

		}
		printf("\n");
	}


}
int main()
{
	int i = 0;
	printf("������Ҫ��ӡ�ĳ˷��ھ��Ĵ�С\n");
	scanf("%d",&i);
	multiplication(i);
	return 0;


}