#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
#include<math.h>
int charge(int i)
{
	double x;
	x = log10(i);
	return (int)x+1;
}

int main()
{
	int i = 0;
	for (; i <= 10000; i++)
	{
		int m = charge(i);		
		switch (m)
		{
		case 1:
				printf("%d ", i);				
			break;
		case 2:
		{   int a = i % 10;
		    int b = i / 10;
		    if (a*a + b*b == i)
			printf("%d ", i);
		}		
			break;
		case 3:
		{	int c = i % 10;
		int d = i / 10 % 10;
		int e = i / 100;
		if (c*c*c + d*d*d + e*e*e == i)
			printf("%d ", i);
		}
			break;
		default:
			break;
		}



	}

}