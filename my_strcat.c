#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
#include<assert.h>
//char *strcat( char *strDestination, const char *strSource );
char * my_strcat(char * strdest, const char* strsourse)
{
	assert(strdest&&strsourse);
	char *p1 = strdest;
    char *p2 =(char*) strsourse;
	while (*p1++)
	{
		;
	}
	while (*p1++ = *p2++)
	{
		;
	}
	return strdest;
}
void print(char *arr)
{
	while (*arr)
	{
		printf("%c",*arr);
		arr++;
	}
	arr++;
	while (*arr)
	{
		printf("%c", *arr);
		arr++;
	}
}
int main()
{
	char arr1[20] = "abcdefgh";
	char arr2[] = "sdxc";
	printf("%s\n",arr1);
	//printf("%s\n", my_strcat(arr1, arr2));
	print(my_strcat(arr1,arr2));
	return 0;

}