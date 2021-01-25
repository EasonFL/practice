#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
void print(int num[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		if (num[i] == -1)
		{
			break;
		}
		printf("%d ",num[i]);
	}
	printf("\n");
}
void bubble_sort(int num[20], int sz)
{
	int i = 0;
	int flag = 0;	
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j=0; j < sz - 1 - i; j++)
		{
			if (num[j] > num[j + 1])
			{
				int tmp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = tmp;
				flag = 1;
			}

		}
		if (flag == 0)
		{
			break;
		}
	}

}
void getarr(int num[20])
{
	int i = 0;
	for (; i < 20; i++)
	{
		
		scanf("%d",&num[i]);
		if (num[i] == -1)
		{
			break;
		}
		
	}

}
int getnum(int num[20])
{
	int i = 0;
	for (; i < 20; i++)
	{
		if (num[i] == -1)
			break;
	}
	return i;
}
int main()
{
	//实现对整形数组的排序
	int arr[20] = { 0 };
	printf("Please input the array(the ending sign is -1)\n");
	getarr(arr);
	int sz = getnum(arr);
	printf("Before:");
	print(arr,sz);
	bubble_sort(arr, sz);
	printf("After: ");
	print(arr, sz);
	return 0;


}