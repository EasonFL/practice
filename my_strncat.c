#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>

char *my_strncat(char *strDest, const char *strSource, size_t count)
{
	char * p1 = strDest;
	while (*p1)
	{
		p1++;
	}
	while (count--)
	{
		*p1 = *strSource;
		p1++;
		strSource++;
	}
	return strDest;
}
int main()
{
	char arr1[20] = "sadkjhf";
	char arr2[] = "asjdkh";
	printf("%s\n",my_strncat(arr1,arr2,3));

}
