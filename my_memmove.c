#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
//void *memmove(void *dest, const void *src, size_t count);
void print(int *arr, size_t i)
{
	size_t j = 0;
	for (; j < i; j++)
	{
		printf("%d ",arr[j]);
	}
}
void * my_memmove(void *dest, const void * src, size_t count)
{
	void *p1 = dest;
	if (src < dest)//从后到前
	{
		while (count--)
		{
			*((char *)dest + count) = *((char *)src + count);
		}
		return p1;
	}
	
	else //从前到后
	{
		while (count--)
		{
			*(char *)dest = *(char *)src;
			((char *)dest)++;
			((char *)src)++;
		}
		return p1;
	}
}
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	my_memmove(arr + 3, arr, 20);
	print(arr,10);




}
