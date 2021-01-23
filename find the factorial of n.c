#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
int fac(int n)
{ 
	int num = 1;
	while (n >= 1)
	{
		num *= n;
		n--;
	}
	return num;

}

int main()
{
	int n;
	scanf("%d",&n);
	int num = fac(n);
	printf("%d",num);
	return 0;


}