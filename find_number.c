#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
#define Row 3
#define Col 5
void find(int(*p)[5], int k,int row,int col)
{
	int i = 0;
	int j = 0;

	while (i <= row)
	{
		if (p[i][col-1] < k)
		{
			i++;
		}
		else if (p[i][col-1] == k)
		{
			printf("Find it\n");
			return;
		}
		else if (p[i][col-1]>k)
		{
			break;
		}
	}
	if (i == row + 1)
	{
		printf("Can't find\n");
		return;
	}
	for (j = 0; j < col-1; j++)
	{
		if (p[i][j] == k)
		{
			printf("Find it\n");
			return;
		}
	}
	printf("Can't find \n");
}
int main()
{
	int k = 20;
	int arr[Row][Col] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
	find(arr,k,Row,Col);
	return 0;

}