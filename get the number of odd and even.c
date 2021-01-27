#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
int main()
{
	int n;
	int i = 0;
	scanf("%d",&n);
	printf("even sequence : ");
	
	for (; i < 31; i += 2)
	{
		printf("%d ",(n>>i)&1);
	}
	printf("\nodd sequence : ");
	for (i = 1; i < 32; i += 2)
	{
		printf("%d ",(n>>i)&1);
	}
	printf("\n");
}