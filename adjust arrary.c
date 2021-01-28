#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
#define len 10
void adjust(int arr[],int sz)
{
	int i = 0;
	int odd = 0;
	int arr1[len] = { 0 };
	int j = 0;
	int k = 0; 
	int l = 0;
	int m = 0;
	for (i = 0; i < sz; i++)
	{
		if (arr[i] % 2 != 0)
			odd++;
	}
	for (i = 0; i < odd; i++)
	{
		for (; j < sz; j++)
		{
			if (arr[j] % 2 != 0)
				break;
		}
		arr1[i] = arr[j];
		j++;
	}
	for (k = odd; k < sz; k++)
	{
		for (; l < sz; l++)
		{
			if (arr[l] % 2 == 0)
				break;			
		}
		arr1[k] = arr[l];
		l++;
	}
	for (; m < sz; m++)
	{
		arr[m] = arr1[m];
	}
	
}
int main()
{
	int i = 0;
	int arr[len] = { 0 };
	for (; i < len;i++)
	scanf("%d",&arr[i]);
	int sz = sizeof(arr) / sizeof(arr[0]);
	adjust(arr,sz);
	for (i = 0; i < len; i++)
	{
		printf("%d ",arr[i]);
	}
}