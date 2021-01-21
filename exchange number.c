#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
void exchange(int *p1, int *p2)
{
	int num = *p1;
	*p1 = *p2;
	*p2 = num;
}
int main()
{
	int a, b;
	scanf("%d%d",&a,&b);
	exchange(&a,&b);
	printf("a= %d b = %d\n",a,b);



}