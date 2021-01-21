#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
#include<string.h>
int leap(int i)
{
	return((0 == i % 4) && (0 != i % 100) || (0 == i % 400));
}
int main()
{
again:
	; int year;
	printf("请输入要查找的年份\n");
	scanf("%d",&year);
	if (leap(year) != 0)
	{
		printf("It's leap year\n", year);
	}
	else
	{
		printf("Not leap year\n");
	}
	printf("Do you want to continue(YES/NO)\n");
	char arr[20] = { 0 };
	scanf("%s",arr);
	if (strcmp("YES", arr) == 0)
	{
		goto again;
	}
	else
	{
		return 0;
	}



}