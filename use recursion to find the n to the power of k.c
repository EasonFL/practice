#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int power(int n, int k)
{
	static int num = 1;
	if (k>0)
	{
		return num = n*power(n,k-1);
	}
	else
		return num;
}
int main()
{
	int n, k;
	printf("Please input the n of the number and the k of power\n");
	scanf("%d%d",&n,&k);
	int m;
	m = power(n, k);
	printf("%d\n",m);


}