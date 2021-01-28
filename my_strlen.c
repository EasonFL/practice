#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
#include<assert.h>
int my_strlen(const char *str)
{
	assert(str != NULL);
	int i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return i;

}


int main()
{
	char ch[30];
	gets(ch);
	int num = my_strlen(ch);
	printf("%d\n",num);

}