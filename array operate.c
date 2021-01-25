#define  _CRT_SECURE_NO_WARNINGS	
#define NUM 20
#include<stdio.h>
void getarr(int arr[])
{
	printf("Please input the arr (while input 0,It's over)\n");
	int i = 0;
	for (; i < NUM; i++)
	{
		scanf("%d",&arr[i]);
		if (arr[i] == 0)
			break;
	}

}
void init(int arr[])
{
	int i = 0;
	for (; i < NUM; i++)
	{
		arr[i] = 0;
	}
}
int getnum(int arr[])
{
	int i = 0;
	for (; i < NUM; i++)
	{
		if (arr[i] == 0)
			break;
	}
	return i;
}
void print(int arr[], int sz)
{
	int i = 0;
	for (; i < sz; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
void reverse(int arr[], int sz)
{
	int i = 0;
	while (i<=sz-1-i)
	{
		int tmp;
	    tmp = arr[i];
		arr[i] =arr[sz-1-i];
		arr[sz-1-i] = tmp;
		i++;
	}

}
int main()
{
	int arr[NUM];
	int sz = 0;
	init(arr);
	getarr(arr);
	sz = getnum(arr);
	printf("Before:\n");
	print(arr,sz);
	reverse(arr,sz);
	printf("After:\n");
	print(arr, sz);
	return 0;

}