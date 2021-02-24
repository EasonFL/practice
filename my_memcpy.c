#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
#include<string.h>
//void *memcpy( void *dest, const void *src, size_t count );
void * my_memcpy(void * dest, const void * src, size_t count)
{
	char *p1 = dest;
	while (count--)
	{
		*((char *)dest) = *((char *)src);
		((char *)dest)++;
		((char *)src)++;
	}
	return p1;
}

int main()
{
	char arr1[] = "asdasd";
	char arr2[20] = { 0 };
	//my_memcpy(arr2, arr1, 4);
	printf("%s\n",my_memcpy(arr2,arr1,4));
	printf("%s\n",arr1);
	printf("%s\n",arr2);
	

}