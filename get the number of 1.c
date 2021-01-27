#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int count = 0;
	while (n>0)
	{
		if ((n & 1) == 1)
			count++;
		n >>= 1;
	}
	printf("%d\n",count);
}