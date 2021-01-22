#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
void print(int i)
{
	if (i > 9)
	{
		printf("%d ",i%10);
		return print(i / 10);
	}
	else
		printf("%d ",i%10);

}
int main()
{
	int i = 0;
	scanf("%d",&i);
	print(i);
	return 0;
}