#define  _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#include <string.h>
int main()
{
	char buffer1[] = "DWGsgfdgdfg";
	char buffer2[] = "DWg";
	int n;
	n = memcmp(buffer1, buffer2, sizeof(buffer1));
	if (n>0)
		printf("'%s' is greater than '%s'.\n", buffer1, buffer2);
	else if (n<0) 
		printf("'%s' is less than '%s'.\n", buffer1, buffer2);
	else
		printf("'%s' is the same as '%s'.\n", buffer1, buffer2);
	return 0;
}