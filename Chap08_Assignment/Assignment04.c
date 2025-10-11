/*
*���ϸ� Assignment04.c
*�й� + �̸� : 202511220 ������
*���α׷� ��� : �迭 ���Ҹ� ����Ű�� �����͸� �̿��� �Ǽ��� �迭�� ����� ���ϴ� ���α׷�
*�ۼ��� : 20251011
*���� ��ȣ : 08-04
*���� : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

void assignment0804(void);
double calAvg(const double* arr, int size);

int main(void)
{
	assignment0804();

	return 0;
}

/*
* �Լ� �̸�: assignment0804
* ���: �迭 ���Ҹ� ����Ű�� �����͸� �̿��� �Ǽ��� �迭�� ����� ���ϴ� �Լ�
* ��ȯ ��: ���� (void)
*/

void assignment0804(void)
{
	double arr[SIZE] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.1 };
	double* ptr = arr;
	int size = sizeof(arr) / sizeof(arr[0]);

	double avg = calAvg(ptr, size);
	printf("���: %lf\n", avg);

}

/*
* �Լ� �̸�: calAvg
* ���: �迭 ���Ҹ� ����Ű�� �����͸� �̿��� �Ǽ��� �迭�� ����� ���ϴ� �Լ�
* ��ȯ ��: ��հ� (double)
*/

double calAvg(const double* arr, int size)
{
	double sum = 0.0;
	for (int i = 0; i < size; i++)
	{
		sum += *(arr + i);
	}

	return sum / size;
}