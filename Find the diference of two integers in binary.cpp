#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
int main()
{
	int a, b;
	scanf("%d%d",&a,&b);
	int i = 0;
	int count=0;
	for (; i < 32; i++)
	{		
		if (a%2 != b%2)
		{
			count++;
		}
		a >>=1;
		b >>=1;		
	}
	printf("%d \n",count);
}