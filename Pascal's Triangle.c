#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
#define N 13
int main()
{
	int i,j,a,b,n = 0; int arr[N][N];
	while (n <= 0 || n > N)
		scanf("%d",&n);
	for (i = 1; i <= n; i++)
	{
		arr[i][1] = 1;
		arr[i][i] = 1;
	}
	for (i = 3; i <= n; i++)
	{
		for (j = 2; j <= i-1; j++)
		{
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
		}
	}	
	for (a = 1; a <= n; a++)
	{
		for (i = 0; i < n-a; i++)
			printf(" ");
			for (b = 1; b <= a; b++)
			{
				printf("%d ",arr[a][b]);
			}
			printf("\n");
	}
}