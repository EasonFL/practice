#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
#include<string.h>
void reverse(char*str, int sz)
{
	while (sz>0)
	{
		printf("%c", *(str + sz - 1));
		sz--;
	}
}
int main()
{
	char ch[30];
	gets(ch);
	int sz = strlen(ch);
	reverse(ch, sz);
	return 0;

}