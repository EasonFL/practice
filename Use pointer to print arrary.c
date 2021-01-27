#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
void print(int * str,int sz)
{
	int i = 0;
	for (; i < sz; i++)
	{
		printf("%d ",*str);
		str++;
	}
}
int main()
{
	int arr[] = {0,1,2,3,4,5,6,7,8,9};
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(arr,sz);

}