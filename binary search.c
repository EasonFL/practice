#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int binary_search(int arr[], int b,int sz)
{
	int left, right, mid;	
	left = 0;
	right = sz - 1;
	while (left <= right)
	{
		mid = right + (right - left) / 2;
		if (arr[mid] < b)
		{
			left = mid + 1;
		}
		else if (arr[mid]>b)
		{
			right = mid - 1;

		}
		else
		{
			return mid;
		}	
	}
	if (left > right)
	{
		return -1;
	}
}
int main()
{
	//�����
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 7;
	//���ֲ��ҵ�
	//�ҵ��ˣ������±�
	//�Ҳ��������� -1
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, k,sz);	
	if (ret == -1)
	{
		printf("�Ҳ���\n");
	}
	else
	{
		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
	}

	return 0;
}
