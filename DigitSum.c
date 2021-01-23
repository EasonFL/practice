#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
int DigitSum(int n)
{
	static int sum = 0;
	if (n > 9)
	{
		sum += n % 10;
		DigitSum(n / 10);
	}
	else
		return sum += n;
}
int main()
{
	int n;
	scanf("%d",&n);
	int sum = DigitSum(n);
	printf("%d",sum);


}