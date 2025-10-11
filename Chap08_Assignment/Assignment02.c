/*
*���ϸ� Assignment02.c
*�й� + �̸� : 202511220 ������
*���α׷� ��� : �迭���Ҹ� ����Ű�� �����Ϳ� ������ ������ �̿��� �Ǽ��� �迭�� ��� ���Ҹ� ����ϴ� ���α׷� �ۼ�(ũ�� 10)
*�ۼ��� : 20251011
*���� ��ȣ : 08-02
*���� : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 10

void assignment0802(void);
void printArray(const double* arr, int size);

int main(void)
{
	assignment0802();

	return 0;
}

/*
* �Լ� �̸�: assignment0802
* ���: �Ǽ��� �迭�� ��� ���Ҹ� ����ϴ� �Լ�
* ��ȯ ��: ���� (void)
*/

void assignment0802(void)
{
	double arr[SIZE] = { 0.1, 0.2, 0.3, 0.4,0.5, 0.6, 0.7, 0.8, 0.9, 1.3  };
	int size = sizeof(arr) / sizeof(arr[0]);
	double* ptr = arr;

	printArray(ptr, size);

}

/*
* �Լ� �̸�: printArray
* ���: �����Ϳ� ������ ������ �̿��� �迭�� ��� ���Ҹ� ����ϴ� �Լ�
* ��ȯ ��: ���� (void)
*/

void printArray(const double* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%.2lf", *(arr + i));
	}
	return;
}
