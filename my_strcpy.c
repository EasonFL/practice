#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
#include<assert.h>
char* my_strcpy(char* dest, const char *src)
{
	assert(dest != NULL);
	assert(src != NULL);
	char*p = dest;
	while (*dest++ = *src++)
	*dest = *src;
	return p;
}
int main()
{
	char ch1[20] = "askjdhkjsd";
	char ch2[20] = { 0 };
	printf("%s\n",my_strcpy(ch2,ch1));


}