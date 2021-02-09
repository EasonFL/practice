#define  _CRT_SECURE_NO_WARNINGS	
//char *strstr(const char *string, const char *strCharSet);
#include<stdio.h>
#include<assert.h>
char*my_strstr(const char *string, const char *strcheck)
{
	assert(*string);
	const char * p1 = string;
	if (*strcheck == '\0')
	{
		return (char*)string;
	}
	while (*p1)
	{
		const char * p2 = strcheck;
		const char *p3 = p1;
		while (*p3!='\0'&& *p3 == *p2)
		{
			p3++;
			p2++;
		}
		if (*p2 == '\0')
		{
			return (char*)strcheck;
		}
		p1++;	
	}
	return (char*)NULL;
	
}
int main()
{
	char arr1[] = "abcdefghijk";
	char arr2[] = "";
	if (my_strstr(arr1, arr2)==arr2)
	{
		printf("Yes\n");
	}
	else if (my_strstr(arr1, arr2) == NULL)
	{
		printf("No\n");
	}
	else if (my_strstr(arr1, arr2) == arr1)
	{
		printf("arr2 is empty arrary\n");
	}
}