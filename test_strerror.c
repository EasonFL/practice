#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
#include<errno.h>//errnoҪ������ͷ�ļ�
#include<string.h>//strerrorҪ������ͷ�ļ�
int main()
{
	FILE * pFile;
	pFile = fopen("unexist.ent", "r");
	if (pFile == NULL)
		printf("Error opening file unexist.ent: %s\n", strerror(errno));
	//errno: Last error number
	return 0;
}