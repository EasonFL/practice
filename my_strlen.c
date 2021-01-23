#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
int my_strlen(char* str)
{
	if ((*str) != '\0')
	{
		return 1 + my_strlen(str + 1);
	}
	else
		return 0;
}
int main()
{
	char arr[] = "asdasd";
	/*scanf("%s", arr);*/
	int num = my_strlen(arr);
	puts("The lenth is :\n");
	printf("%d\n",num);
	return 0;



}