#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
void print(int arr[])
{
	int i = 0;
	while (1)
	{
		if (arr[i] == 0)
			break;
		printf("%d ", arr[i]);
		i++;
		
	}
	printf("\n");
}
void getarr(int arr[])
{
	int i = 0;
	while (1)
	{
		scanf("%d",&arr[i]);
		if (arr[i] == 0) 
			break;
		i++;
		
	}
}
int main()
{
	int arr1[20] = { 0 };
	int arr2[20] = { 0 };
	printf("Please input the arr1(while input the 0,It's over)\n");
	getarr(arr1);
	printf("Please input the arr2(while input the 0,It's over)\n");
	getarr(arr2);
	printf("Before: \n");
    printf("arr1= ");
	print(arr1);
	printf("arr2= ");
	print(arr2);
	int i = 0;
	for (; i < 20; i++)
	{
		int tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
	printf("After: \n");
	printf("arr1= ");
	print(arr1);
	printf("arr2= ");
	print(arr2);

}