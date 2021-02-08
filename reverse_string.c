#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
#include<string.h>
//void reverse_string(char *arr, int k)
//{
//	
//	int j = 0;
//	int len = strlen(arr);
//	for (j = 0; j < k; j++)
//	{
//		char ch = *arr;
//		int i = 0;
//		for ( i = 0; i<len-1; i++)
//		{
//			arr[i] = arr[i + 1];
//		}
//		arr[len - 1] = ch;
//	}
//}
void reverse(char *e1, char *e2)
{
	while (e1 < e2)
	{
		char tmp = *e1;
		*e1 = *e2;
		*e2 = tmp;
		e1++;
		e2--;
	}
}
void reverse_string(char arr[], int k)
{
	int len = strlen(arr);
	reverse(arr,arr + k - 1);
	reverse(arr + k, arr + len - 1);
	reverse(arr,arr + len - 1);

}
int main()
{
	char arr[] = "abcdefgh";
	int k = 3;
	printf("%s\n",arr);
	reverse_string(arr, k);
	printf("%s\n",arr);
}
