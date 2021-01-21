#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
void change(int arr[], int sz)
{
	int i = 0;
	for (; i<sz; i++)
	{
		int j = 0;
		for (; j<sz - i; j++)
		{
			if (arr[j]>arr[j + 1])
			{
				int tmp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = tmp;
			}

		}
	}

}
int main()
{
	int score[7] = { 0 };
	int i = 0;
	for (; i<7; i++)
	{
		scanf("%d", score[i]);
	}
	int sz = sizeof(score) / sizeof(score[0]);
	change(score, sz);
	int sum = 0;
	for (i = 1; i<sz - 1; i++)
	{
		sum += score[i];
	}
	printf("%.2f\n", sum / 5.0);

}