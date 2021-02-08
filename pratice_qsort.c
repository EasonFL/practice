#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stu
{
	char name[20];
	int age;
};
int cmp_int(const void *e1, const void * e2)
{
	return *((int*)e1) - *((int *)e2);
}
int cmp_stu_name(const void *e1, const void *e2)
{
	return strcmp(((struct stu *)e1)->name, ((struct stu *)e2)->name);

}
void print_arr1(int *arr, int sz)
{
	int i = 0;
	for (; i < sz; i++)
	{
		printf("%d ",arr[i]);
	}

}
void print_arr2(struct stu* str, int sz)
{
	int i = 0;
	for (; i < sz; i++)
	{
		printf("%s, %d ", (str + i)->name, (str + i)->age);
	}
}

int main()
{
	//int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	struct stu arr[] = { { "zhangsan", 12 }, { "lisi", 45 }, { "wangwu", 20 } };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_stu_name);
	print_arr2(arr, sz);






}