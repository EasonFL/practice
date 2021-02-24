#define  _CRT_SECURE_NO_WARNINGS	
//char *strncpy(char *strDest, const char *strSource, size_t count);
#include<stdio.h>
char *my_strncpy(char *strDest, const char *strSource, size_t count)
{
	char*p1 = strDest;
	const char* p2 = strSource;
	while (count--)
	{
		*p1 = *p2;
		p1++;
		p2++;
	}
	return strDest;

}

int main()
{
	char arr1[20] = "asjdhkha";
	char arr2[20] = { 0 };
	printf("%s\n", my_strncpy(arr2, arr1, 5));

}
