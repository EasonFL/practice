#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
int main()
{
	char str1[20] = "*************";
	char str2[20] = "             ";
	int i, j, k,l;
	for (i=0; i < 6; i++)
	{
		for (j = 0; j < 6 - i; j++)
			printf("%c",str2[j]);
		for (k = 6 - i; k <= 6 + i; k++)
			printf("%c",str1[k]);
		for (l = 6 + i; l < 13; l++)
			printf("%c",str2[l]);
		printf("\n");

	}
	for (i = 6; i>=0; i--)
	{
		for (j = 0; j < 6 - i; j++)
			printf("%c", str2[j]);
		for (k = 6 - i; k <= 6 + i; k++)
			printf("%c", str1[k]);
		for (l = 6 + i; l < 13; l++)
			printf("%c", str2[l]);
		printf("\n");

	}
}