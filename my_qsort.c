#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
void _swap(char *e1, char *e2, size_t width)
{
	int i = 0;
	for (; i < width; i++)
	{
		char  tmp = *(e1+i);
		*(e1 + i) = *(e2 + i);
		*(e2 + i) = tmp;
	}

}
int cmpare_int(const void  *e1, const void  * e2)
{
	int ret = 0;
	return ret = *((int *)e1) - *((int *)e2);
}
void my_qsort(void*str, size_t sz, size_t width, int(*cmp)(const void * e1, const void * e2))
{
	int i = 0;
	for (i = 0; i < sz-1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((void*)((char*)str+j*width),(void *)((char*)str+(j+1)*width))>0)
			{
				_swap((char*)str + j*width, (char*)str + (j + 1)*width,width);
			}
		}

	}

}
void print_arr(int * arr,size_t sz)
{
	int i = 0;
	for (; i < sz; i++)
	{
		printf("%d ",arr[i]);
	}
}
int main()
{
	int arr[] = {9,8,7,6,5,4,3,2,1,0};
	int sz = sizeof(arr) / sizeof(arr[0]);	
	my_qsort(arr, sz, sizeof(arr[0]), cmpare_int);
	print_arr(arr,sz);


}