/*
*���ϸ� Assignment06.c
*�й� + �̸� : 202511220 ������
*���α׷� ��� : ������ �迭 ���� �� �ִ񰪰� �ּڰ��� ã�� �Լ� ���� �� ����ϴ� ���α׷�
*�ۼ��� : 20251011
*���� ��ȣ : 08-06
*���� : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int main(void)
{
	assignment0806();

	return 0;
}

/*
* �Լ� �̸�: get_min_max
* ���: ������ �迭 ���� �� �ִ񰪰� �ּڰ��� ã�� �Լ�
* ��ȯ ��: ���� (void)
*/

int assignment0806(void)
{
	int arr[SIZE] = { 23, 45, 62, 12, 99 , 83, 23, 50, 72, 37 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int min = 0, max = 0;

	int* ptr = arr;
	int* pmn = &min, * pmx = &max;

	get_min_max(ptr, size, pmn, pmx);
	printf("�ִ�: %d\n", *pmx);
	printf("�ּڰ�: %d\n", *pmn);


	return 0;
}

/*
* �Լ� �̸�: get_min_max
* ���: ������ �迭 ���� �� �ִ񰪰� �ּڰ��� ã�� �Լ�
* ��ȯ ��: ���� (void)
*/

void get_min_max(const int* arr, int size, int* min, int* max)
{
	int i;
	*min = *max = arr[0];
	for (i = 1; i < size; i++)
	{
		if (*min > arr[i])
		{
			*min = arr[i];
		}
		if (*max < arr[i])
		{
			*max = arr[i];
		}
	}

	return;
}