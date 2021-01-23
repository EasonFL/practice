#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
int my_strlen(char * str)
{
	int count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return count;
}
int main()
{
	char ch[20] = { 0 };
	scanf("%s",ch);
	int num = my_strlen(ch);
	printf("%d\n",num);




}
