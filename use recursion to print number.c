#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
void print(int x)
{
	if (x > 9)
	{
		 print(x / 10);
	}
	printf("%d ",x%10);
}
int main()
{
	int i;
	scanf("%d",&i);
	print(i);
	return 0;


}