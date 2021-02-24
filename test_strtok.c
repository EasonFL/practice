
#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
//#include<string.h>
//#include <stdio.h>
#include <string.h>
int main()
{
	char str[] = "- This, a simple string.";
	char * pch;
	printf("Splitting string \"%s\" into tokens:\n", str);
	pch = strtok(str, " ,.-");
	while (pch != NULL)
	{
		printf("%s\n", pch);
		pch = strtok(NULL, " ,.-");
	}
	return 0;
}
//int main()
//{
//	char *p = "zhangpengwei@bitedu.tech";
//	const char* sep = ".@";
//	char arr[30];
//	char *str = NULL;
//	strcpy(arr, p);//将数据拷贝一份，处理arr数组的内容
//	for (str = strtok(arr, sep); str != NULL; str = strtok(NULL, sep))
//	{
//		printf("%s\n", str);
//	}
//}