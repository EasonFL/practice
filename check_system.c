#define  _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>
int check_my_sys()
{
	int a = 1;
	char*p = (char*)&a;//a�������ĸ��ֽ����洢������ǿת��һ���ֽڵ�charָ����ָ��
	return *p;//����Ǵ�ˣ���ô���ǰ�00 00 00 01���洢�ģ���һ���ֽ��Ǵ��0�������С�ˣ���ô���ǰ�01 00 00 00���洢�ģ���һ���ֽڴ����1��
}

int main()
{
	int ret = 1;
	ret = check_my_sys();
	if(ret = 1)
	{
		printf("С��\n");
	}
	else
		printf("���\n");
}