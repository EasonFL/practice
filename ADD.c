#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
int add(int a)
{
	int i = 0;
	int tmp = a;
	int j = 0;
	int sum = 0;
	for (; j < 5; j++)
	{
	    
		for (; i < j; i++)
		{
			
			a *= 10;
			tmp += a;
		}
		sum += tmp;
	}
	return  sum;
}
int main()
{
	int a;
	int sum=0;
	scanf("%d",&a);
	sum = add(a);
	printf("%d\n",sum);
}