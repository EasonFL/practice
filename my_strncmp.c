#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
#include<string.h>
int my_strncmp(const char *string1, const char *string2, size_t count)
{
	while (count--)
	{
		if (*string1 < *string2)
			return -1;
		else if (*string1 > *string2)
			return 1;
		else
		{
			string1++;
			string2++;
		}
	}
	return 0;
}
int main()
{
	char arr1[] = "abcdefgggg";
	char arr2[] = "abcdefghhh";
	printf("%d\n",my_strncmp(arr1,arr2,8));
	printf("%d\n", strncmp(arr1, arr2, 8));

}