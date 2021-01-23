#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
int fac(int n)
{
	if (n > 1)
	{
	 return	n*fac(n - 1);
	}
	else
		return 1;

}
int main()
{
	int n;
	scanf("%d",&n);
	int num = fac(n);
	printf("%d\n",num);
	return 0;

}