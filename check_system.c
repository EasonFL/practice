#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
int check_my_sys()
{
	int a = 1;
	char*p = (char*)&a;//a本来有四个字节来存储，将它强转给一个字节的char指针来指向
	return *p;//如果是大端，那么就是按00 00 00 01来存储的，第一个字节是存的0，如果是小端，那么就是按01 00 00 00来存储的，第一个字节存的是1。
}

int main()
{
	int ret = 1;
	ret = check_my_sys();
	if(ret = 1)
	{
		printf("小端\n");
	}
	else
		printf("大端\n");
}