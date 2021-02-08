#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
#include<string.h>
void reverse(char*e1, char*e2)
{
	while (e1<e2)
	{
		char ch = *e1;
		*e1 = *e2;
		*e2 = ch;
		e1++;
		e2--;
	}
}

void charge(char*arr1, char*arr2)
{
	int i = 0;
	int len1 = strlen(arr1);
	int len2 = strlen(arr2);
	if (len1 != len2)
	{
		printf("No\n");
		return;
	}
	for (; i < len1; i++)
	{
		reverse(arr1, arr1 + i-1);
		reverse(arr1 + i, arr1 + len1 - 1);
		reverse(arr1, arr1 + len1 - 1);
		if (!strcmp(arr1, arr1))
		{
			printf("Yes\n");
			return;
		}
	}

}
int main()
{
	char arr1[] = "abcdefghijk";
	char arr2[] = "defghijkabc";
	charge(arr1, arr2);
	return 0;
}